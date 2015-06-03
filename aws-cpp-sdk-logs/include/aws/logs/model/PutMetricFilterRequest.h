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
#include <aws/logs/model/MetricTransformation.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCHLOGS_API PutMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    PutMetricFilterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    
    inline PutMetricFilterRequest&  WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    
    inline PutMetricFilterRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline const Aws::String& GetFilterName() const{ return m_filterName; }
    
    inline void SetFilterName(const Aws::String& value) { m_filterName = value; }

    
    inline void SetFilterName(const char* value) { m_filterName.assign(value); }

    
    inline PutMetricFilterRequest&  WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    
    inline PutMetricFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}

    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPattern = value; }

    
    inline void SetFilterPattern(const char* value) { m_filterPattern.assign(value); }

    
    inline PutMetricFilterRequest&  WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline PutMetricFilterRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const{ return m_metricTransformations; }
    
    inline void SetMetricTransformations(const Aws::Vector<MetricTransformation>& value) { m_metricTransformations = value; }

    
    inline PutMetricFilterRequest&  WithMetricTransformations(const Aws::Vector<MetricTransformation>& value) { SetMetricTransformations(value); return *this;}

    
    inline PutMetricFilterRequest& AddMetricTransformations(const MetricTransformation& value) { m_metricTransformations.push_back(value); return *this; }

  private:
    Aws::String m_logGroupName;
    Aws::String m_filterName;
    Aws::String m_filterPattern;
    Aws::Vector<MetricTransformation> m_metricTransformations;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
