/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
