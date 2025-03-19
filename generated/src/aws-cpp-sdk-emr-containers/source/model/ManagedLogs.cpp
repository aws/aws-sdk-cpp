/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ManagedLogs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

ManagedLogs::ManagedLogs(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedLogs& ManagedLogs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowAWSToRetainLogs"))
  {
    m_allowAWSToRetainLogs = AllowAWSToRetainLogsMapper::GetAllowAWSToRetainLogsForName(jsonValue.GetString("allowAWSToRetainLogs"));
    m_allowAWSToRetainLogsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedLogs::Jsonize() const
{
  JsonValue payload;

  if(m_allowAWSToRetainLogsHasBeenSet)
  {
   payload.WithString("allowAWSToRetainLogs", AllowAWSToRetainLogsMapper::GetNameForAllowAWSToRetainLogs(m_allowAWSToRetainLogs));
  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
