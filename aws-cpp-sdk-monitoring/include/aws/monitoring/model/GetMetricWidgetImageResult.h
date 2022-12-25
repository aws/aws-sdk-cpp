/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetMetricWidgetImageResult
  {
  public:
    AWS_CLOUDWATCH_API GetMetricWidgetImageResult();
    AWS_CLOUDWATCH_API GetMetricWidgetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetMetricWidgetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The image of the graph, in the output format specified. The output is
     * base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMetricWidgetImage() const{ return m_metricWidgetImage; }

    /**
     * <p>The image of the graph, in the output format specified. The output is
     * base64-encoded.</p>
     */
    inline void SetMetricWidgetImage(const Aws::Utils::ByteBuffer& value) { m_metricWidgetImage = value; }

    /**
     * <p>The image of the graph, in the output format specified. The output is
     * base64-encoded.</p>
     */
    inline void SetMetricWidgetImage(Aws::Utils::ByteBuffer&& value) { m_metricWidgetImage = std::move(value); }

    /**
     * <p>The image of the graph, in the output format specified. The output is
     * base64-encoded.</p>
     */
    inline GetMetricWidgetImageResult& WithMetricWidgetImage(const Aws::Utils::ByteBuffer& value) { SetMetricWidgetImage(value); return *this;}

    /**
     * <p>The image of the graph, in the output format specified. The output is
     * base64-encoded.</p>
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
