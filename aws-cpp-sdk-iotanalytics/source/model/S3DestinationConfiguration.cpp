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

#include <aws/iotanalytics/model/S3DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

S3DestinationConfiguration::S3DestinationConfiguration() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_glueConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_glueConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationConfiguration& S3DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("glueConfiguration"))
  {
    m_glueConfiguration = jsonValue.GetObject("glueConfiguration");

    m_glueConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_glueConfigurationHasBeenSet)
  {
   payload.WithObject("glueConfiguration", m_glueConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
