/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ResponseMetadata.h>
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
   * <p>Represents your Amazon SES daily sending quota, maximum send rate, and the
   * number of emails you have sent in the last 24 hours.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuotaResponse">AWS
   * API Reference</a></p>
   */
  class GetSendQuotaResult
  {
  public:
    AWS_SES_API GetSendQuotaResult() = default;
    AWS_SES_API GetSendQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetSendQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The maximum number of emails the user is allowed to send in a 24-hour
     * interval. A value of -1 signifies an unlimited quota.</p>
     */
    inline double GetMax24HourSend() const { return m_max24HourSend; }
    inline void SetMax24HourSend(double value) { m_max24HourSendHasBeenSet = true; m_max24HourSend = value; }
    inline GetSendQuotaResult& WithMax24HourSend(double value) { SetMax24HourSend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of emails that Amazon SES can accept from the user's
     * account per second.</p>  <p>The rate at which Amazon SES accepts the
     * user's messages might be less than the maximum send rate.</p> 
     */
    inline double GetMaxSendRate() const { return m_maxSendRate; }
    inline void SetMaxSendRate(double value) { m_maxSendRateHasBeenSet = true; m_maxSendRate = value; }
    inline GetSendQuotaResult& WithMaxSendRate(double value) { SetMaxSendRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of emails sent during the previous 24 hours.</p>
     */
    inline double GetSentLast24Hours() const { return m_sentLast24Hours; }
    inline void SetSentLast24Hours(double value) { m_sentLast24HoursHasBeenSet = true; m_sentLast24Hours = value; }
    inline GetSendQuotaResult& WithSentLast24Hours(double value) { SetSentLast24Hours(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSendQuotaResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    double m_max24HourSend{0.0};
    bool m_max24HourSendHasBeenSet = false;

    double m_maxSendRate{0.0};
    bool m_maxSendRateHasBeenSet = false;

    double m_sentLast24Hours{0.0};
    bool m_sentLast24HoursHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
