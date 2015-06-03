/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCHLOGS_API TestMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    TestMetricFilterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPattern = value; }

    
    inline void SetFilterPattern(const char* value) { m_filterPattern.assign(value); }

    
    inline TestMetricFilterRequest&  WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline TestMetricFilterRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetLogEventMessages() const{ return m_logEventMessages; }
    
    inline void SetLogEventMessages(const Aws::Vector<Aws::String>& value) { m_logEventMessages = value; }

    
    inline TestMetricFilterRequest&  WithLogEventMessages(const Aws::Vector<Aws::String>& value) { SetLogEventMessages(value); return *this;}

    
    inline TestMetricFilterRequest& AddLogEventMessages(const Aws::String& value) { m_logEventMessages.push_back(value); return *this; }

    
    inline TestMetricFilterRequest& AddLogEventMessages(const char* value) { m_logEventMessages.push_back(value); return *this; }

  private:
    Aws::String m_filterPattern;
    Aws::Vector<Aws::String> m_logEventMessages;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
