/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/S3DataRepositoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

S3DataRepositoryConfiguration::S3DataRepositoryConfiguration() : 
    m_autoImportPolicyHasBeenSet(false),
    m_autoExportPolicyHasBeenSet(false)
{
}

S3DataRepositoryConfiguration::S3DataRepositoryConfiguration(JsonView jsonValue) : 
    m_autoImportPolicyHasBeenSet(false),
    m_autoExportPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataRepositoryConfiguration& S3DataRepositoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoImportPolicy"))
  {
    m_autoImportPolicy = jsonValue.GetObject("AutoImportPolicy");

    m_autoImportPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoExportPolicy"))
  {
    m_autoExportPolicy = jsonValue.GetObject("AutoExportPolicy");

    m_autoExportPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataRepositoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_autoImportPolicyHasBeenSet)
  {
   payload.WithObject("AutoImportPolicy", m_autoImportPolicy.Jsonize());

  }

  if(m_autoExportPolicyHasBeenSet)
  {
   payload.WithObject("AutoExportPolicy", m_autoExportPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
