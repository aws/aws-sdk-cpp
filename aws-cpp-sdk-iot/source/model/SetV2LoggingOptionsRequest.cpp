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

#include <aws/iot/model/SetV2LoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest() : 
    m_roleArnHasBeenSet(false),
    m_defaultLogLevel(LogLevel::NOT_SET),
    m_defaultLogLevelHasBeenSet(false),
    m_disableAllLogs(false),
    m_disableAllLogsHasBeenSet(false)
{
}

Aws::String SetV2LoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_defaultLogLevelHasBeenSet)
  {
   payload.WithString("defaultLogLevel", LogLevelMapper::GetNameForLogLevel(m_defaultLogLevel));
  }

  if(m_disableAllLogsHasBeenSet)
  {
   payload.WithBool("disableAllLogs", m_disableAllLogs);

  }

  return payload.WriteReadable();
}




