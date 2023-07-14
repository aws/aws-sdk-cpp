/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/QopConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

QopConfiguration::QopConfiguration() : 
    m_rpcProtection(HdfsRpcProtection::NOT_SET),
    m_rpcProtectionHasBeenSet(false),
    m_dataTransferProtection(HdfsDataTransferProtection::NOT_SET),
    m_dataTransferProtectionHasBeenSet(false)
{
}

QopConfiguration::QopConfiguration(JsonView jsonValue) : 
    m_rpcProtection(HdfsRpcProtection::NOT_SET),
    m_rpcProtectionHasBeenSet(false),
    m_dataTransferProtection(HdfsDataTransferProtection::NOT_SET),
    m_dataTransferProtectionHasBeenSet(false)
{
  *this = jsonValue;
}

QopConfiguration& QopConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RpcProtection"))
  {
    m_rpcProtection = HdfsRpcProtectionMapper::GetHdfsRpcProtectionForName(jsonValue.GetString("RpcProtection"));

    m_rpcProtectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTransferProtection"))
  {
    m_dataTransferProtection = HdfsDataTransferProtectionMapper::GetHdfsDataTransferProtectionForName(jsonValue.GetString("DataTransferProtection"));

    m_dataTransferProtectionHasBeenSet = true;
  }

  return *this;
}

JsonValue QopConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rpcProtectionHasBeenSet)
  {
   payload.WithString("RpcProtection", HdfsRpcProtectionMapper::GetNameForHdfsRpcProtection(m_rpcProtection));
  }

  if(m_dataTransferProtectionHasBeenSet)
  {
   payload.WithString("DataTransferProtection", HdfsDataTransferProtectionMapper::GetNameForHdfsDataTransferProtection(m_dataTransferProtection));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
