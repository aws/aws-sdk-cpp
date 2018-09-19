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

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <utility>

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
  class AWS_CLOUDWATCH_API GetMetricWidgetImageResult
  {
  public:
    GetMetricWidgetImageResult();
    GetMetricWidgetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetMetricWidgetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The image of the graph, in the output format specified.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMetricWidgetImage() const{ return m_metricWidgetImage; }

    /**
     * <p>The image of the graph, in the output format specified.</p>
     */
    inline void SetMetricWidgetImage(const Aws::Utils::ByteBuffer& value) { m_metricWidgetImage = value; }

    /**
     * <p>The image of the graph, in the output format specified.</p>
     */
    inline void SetMetricWidgetImage(Aws::Utils::ByteBuffer&& value) { m_metricWidgetImage = std::move(value); }

    /**
     * <p>The image of the graph, in the output format specified.</p>
     */
    inline GetMetricWidgetImageResult& WithMetricWidgetImage(const Aws::Utils::ByteBuffer& value) { SetMetricWidgetImage(value); return *this;}

    /**
     * <p>The image of the graph, in the output format specified.</p>
     */
    inline GetMetricWidgetImageResult& WithMetricWidgetImage(Aws::Utils::ByteBuffer&& value) { SetMetricWidgetImage(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetMetricWidgetImageResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetMetricWidgetImageResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_metricWidgetImage;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
