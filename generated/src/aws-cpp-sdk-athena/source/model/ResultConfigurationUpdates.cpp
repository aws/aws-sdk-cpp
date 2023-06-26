/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultConfigurationUpdates.h>
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

ResultConfigurationUpdates::ResultConfigurationUpdates() : 
    m_outputLocationHasBeenSet(false),
    m_removeOutputLocation(false),
    m_removeOutputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_removeEncryptionConfiguration(false),
    m_removeEncryptionConfigurationHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_removeExpectedBucketOwner(false),
    m_removeExpectedBucketOwnerHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false),
    m_removeAclConfiguration(false),
    m_removeAclConfigurationHasBeenSet(false)
{
}

ResultConfigurationUpdates::ResultConfigurationUpdates(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_removeOutputLocation(false),
    m_removeOutputLocationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_removeEncryptionConfiguration(false),
    m_removeEncryptionConfigurationHasBeenSet(false),
    m_expectedBucketOwnerHasBeenSet(false),
    m_removeExpectedBucketOwner(false),
    m_removeExpectedBucketOwnerHasBeenSet(false),
    m_aclConfigurationHasBeenSet(false),
    m_removeAclConfiguration(false),
    m_removeAclConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ResultConfigurationUpdates& ResultConfigurationUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetString("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveOutputLocation"))
  {
    m_removeOutputLocation = jsonValue.GetBool("RemoveOutputLocation");

    m_removeOutputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveEncryptionConfiguration"))
  {
    m_removeEncryptionConfiguration = jsonValue.GetBool("RemoveEncryptionConfiguration");

    m_removeEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedBucketOwner"))
  {
    m_expectedBucketOwner = jsonValue.GetString("ExpectedBucketOwner");

    m_expectedBucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveExpectedBucketOwner"))
  {
    m_removeExpectedBucketOwner = jsonValue.GetBool("RemoveExpectedBucketOwner");

    m_removeExpectedBucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AclConfiguration"))
  {
    m_aclConfiguration = jsonValue.GetObject("AclConfiguration");

    m_aclConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveAclConfiguration"))
  {
    m_removeAclConfiguration = jsonValue.GetBool("RemoveAclConfiguration");

    m_removeAclConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultConfigurationUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_removeOutputLocationHasBeenSet)
  {
   payload.WithBool("RemoveOutputLocation", m_removeOutputLocation);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_removeEncryptionConfigurationHasBeenSet)
  {
   payload.WithBool("RemoveEncryptionConfiguration", m_removeEncryptionConfiguration);

  }

  if(m_expectedBucketOwnerHasBeenSet)
  {
   payload.WithString("ExpectedBucketOwner", m_expectedBucketOwner);

  }

  if(m_removeExpectedBucketOwnerHasBeenSet)
  {
   payload.WithBool("RemoveExpectedBucketOwner", m_removeExpectedBucketOwner);

  }

  if(m_aclConfigurationHasBeenSet)
  {
   payload.WithObject("AclConfiguration", m_aclConfiguration.Jsonize());

  }

  if(m_removeAclConfigurationHasBeenSet)
  {
   payload.WithBool("RemoveAclConfiguration", m_removeAclConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
