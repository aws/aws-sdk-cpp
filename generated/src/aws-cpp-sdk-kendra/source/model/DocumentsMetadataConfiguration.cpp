/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentsMetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentsMetadataConfiguration::DocumentsMetadataConfiguration() : 
    m_s3PrefixHasBeenSet(false)
{
}

DocumentsMetadataConfiguration::DocumentsMetadataConfiguration(JsonView jsonValue) : 
    m_s3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentsMetadataConfiguration& DocumentsMetadataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentsMetadataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
