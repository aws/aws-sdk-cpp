/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultConfiguration::ResultConfiguration() : 
    m_outputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false)
{
}

ResultConfiguration::ResultConfiguration(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ResultConfiguration& ResultConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetString("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedBucketOwner"))
  {
    m_expectedBucketOwner = jsonValue.GetString("ExpectedBucketOwner");

    m_expectedBucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AclConfiguration"))
  {
    m_aclConfiguration = jsonValue.GetObject("AclConfiguration");

    m_aclConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_expectedBucketOwnerHasBeenSet)
  {
   payload.WithString("ExpectedBucketOwner", m_expectedBucketOwner);

  }

  if(m_aclConfigurationHasBeenSet)
  {
   payload.WithObject("AclConfiguration", m_aclConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
