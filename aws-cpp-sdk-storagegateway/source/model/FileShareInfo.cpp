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

#include <aws/storagegateway/model/FileShareInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

FileShareInfo::FileShareInfo() : 
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
}

FileShareInfo::FileShareInfo(const JsonValue& jsonValue) : 
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
  *this = jsonValue;
}

FileShareInfo& FileShareInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FileShareARN"))
  {
    m_fileShareARN = jsonValue.GetString("FileShareARN");

    m_fileShareARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareId"))
  {
    m_fileShareId = jsonValue.GetString("FileShareId");

    m_fileShareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareStatus"))
  {
    m_fileShareStatus = jsonValue.GetString("FileShareStatus");

    m_fileShareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  return *this;
}

JsonValue FileShareInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_fileShareIdHasBeenSet)
  {
   payload.WithString("FileShareId", m_fileShareId);

  }

  if(m_fileShareStatusHasBeenSet)
  {
   payload.WithString("FileShareStatus", m_fileShareStatus);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws