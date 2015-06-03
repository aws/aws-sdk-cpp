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

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCHLOGS_API DeleteLogStreamRequest : public CloudWatchLogsRequest
  {
  public:
    DeleteLogStreamRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    
    inline DeleteLogStreamRequest&  WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    
    inline DeleteLogStreamRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamName = value; }

    
    inline void SetLogStreamName(const char* value) { m_logStreamName.assign(value); }

    
    inline DeleteLogStreamRequest&  WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    
    inline DeleteLogStreamRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

  private:
    Aws::String m_logGroupName;
    Aws::String m_logStreamName;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
