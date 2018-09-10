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

#include <aws/dms/model/DmsTransferSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DmsTransferSettings::DmsTransferSettings() : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false)
{
}

DmsTransferSettings::DmsTransferSettings(JsonView jsonValue) : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

DmsTransferSettings& DmsTransferSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DmsTransferSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
