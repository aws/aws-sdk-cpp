/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
