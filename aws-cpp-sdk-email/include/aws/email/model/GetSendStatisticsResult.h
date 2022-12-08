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
    AWS_SES_API GetSendStatisticsResult();
    AWS_SES_API GetSendStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetSendStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline const Aws::Vector<SendDataPoint>& GetSendDataPoints() const{ return m_sendDataPoints; }

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline void SetSendDataPoints(const Aws::Vector<SendDataPoint>& value) { m_sendDataPoints = value; }

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline void SetSendDataPoints(Aws::Vector<SendDataPoint>&& value) { m_sendDataPoints = std::move(value); }

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline GetSendStatisticsResult& WithSendDataPoints(const Aws::Vector<SendDataPoint>& value) { SetSendDataPoints(value); return *this;}

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline GetSendStatisticsResult& WithSendDataPoints(Aws::Vector<SendDataPoint>&& value) { SetSendDataPoints(std::move(value)); return *this;}

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline GetSendStatisticsResult& AddSendDataPoints(const SendDataPoint& value) { m_sendDataPoints.push_back(value); return *this; }

    /**
     * <p>A list of data points, each of which represents 15 minutes of activity.</p>
     */
    inline GetSendStatisticsResult& AddSendDataPoints(SendDataPoint&& value) { m_sendDataPoints.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSendStatisticsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSendStatisticsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SendDataPoint> m_sendDataPoints;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
