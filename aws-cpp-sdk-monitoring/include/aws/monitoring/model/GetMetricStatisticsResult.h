﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/Datapoint.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class AWS_CLOUDWATCH_API GetMetricStatisticsResult
  {
  public:
    GetMetricStatisticsResult();
    GetMetricStatisticsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetMetricStatisticsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A label for the specified metric.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A label for the specified metric.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_label = value; }

    /**
     * <p>A label for the specified metric.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_label = value; }

    /**
     * <p>A label for the specified metric.</p>
     */
    inline void SetLabel(const char* value) { m_label.assign(value); }

    /**
     * <p>A label for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A label for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& WithLabel(Aws::String&& value) { SetLabel(value); return *this;}

    /**
     * <p>A label for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& WithLabel(const char* value) { SetLabel(value); return *this;}

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline const Aws::Vector<Datapoint>& GetDatapoints() const{ return m_datapoints; }

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline void SetDatapoints(const Aws::Vector<Datapoint>& value) { m_datapoints = value; }

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline void SetDatapoints(Aws::Vector<Datapoint>&& value) { m_datapoints = value; }

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& WithDatapoints(const Aws::Vector<Datapoint>& value) { SetDatapoints(value); return *this;}

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& WithDatapoints(Aws::Vector<Datapoint>&& value) { SetDatapoints(value); return *this;}

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& AddDatapoints(const Datapoint& value) { m_datapoints.push_back(value); return *this; }

    /**
     * <p>The data points for the specified metric.</p>
     */
    inline GetMetricStatisticsResult& AddDatapoints(Datapoint&& value) { m_datapoints.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetMetricStatisticsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetMetricStatisticsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_label;
    Aws::Vector<Datapoint> m_datapoints;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws