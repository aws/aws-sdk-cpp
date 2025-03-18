/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/SendDataPoint.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>Represents a list of data points. This list contains aggregated data from the
   * previous two weeks of your sending activity with Amazon SES.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatisticsResponse">AWS
   * API Reference</a></p>
   */
  class GetSendStatisticsResult
  {
  public:
    AWS_SES_API GetSendStatisticsResult() = default;
    AWS_SES_API GetSendStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetSendStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline const Aws::Vector<SendDataPoint>& GetSendDataPoints() const { return m_sendDataPoints; }
    template<typename SendDataPointsT = Aws::Vector<SendDataPoint>>
    void SetSendDataPoints(SendDataPointsT&& value) { m_sendDataPointsHasBeenSet = true; m_sendDataPoints = std::forward<SendDataPointsT>(value); }
    template<typename SendDataPointsT = Aws::Vector<SendDataPoint>>
    GetSendStatisticsResult& WithSendDataPoints(SendDataPointsT&& value) { SetSendDataPoints(std::forward<SendDataPointsT>(value)); return *this;}
    template<typename SendDataPointsT = SendDataPoint>
    GetSendStatisticsResult& AddSendDataPoints(SendDataPointsT&& value) { m_sendDataPointsHasBeenSet = true; m_sendDataPoints.emplace_back(std::forward<SendDataPointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSendStatisticsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SendDataPoint> m_sendDataPoints;
    bool m_sendDataPointsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
