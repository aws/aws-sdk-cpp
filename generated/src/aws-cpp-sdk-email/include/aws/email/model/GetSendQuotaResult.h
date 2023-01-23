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
    AWS_SES_API GetSendQuotaResult();
    AWS_SES_API GetSendQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetSendQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The maximum number of emails the user is allowed to send in a 24-hour
     * interval. A value of -1 signifies an unlimited quota.</p>
     */
    inline double GetMax24HourSend() const{ return m_max24HourSend; }

    /**
     * <p>The maximum number of emails the user is allowed to send in a 24-hour
     * interval. A value of -1 signifies an unlimited quota.</p>
     */
    inline void SetMax24HourSend(double value) { m_max24HourSend = value; }

    /**
     * <p>The maximum number of emails the user is allowed to send in a 24-hour
     * interval. A value of -1 signifies an unlimited quota.</p>
     */
    inline GetSendQuotaResult& WithMax24HourSend(double value) { SetMax24HourSend(value); return *this;}


    /**
     * <p>The maximum number of emails that Amazon SES can accept from the user's
     * account per second.</p>  <p>The rate at which Amazon SES accepts the
     * user's messages might be less than the maximum send rate.</p> 
     */
    inline double GetMaxSendRate() const{ return m_maxSendRate; }

    /**
     * <p>The maximum number of emails that Amazon SES can accept from the user's
     * account per second.</p>  <p>The rate at which Amazon SES accepts the
     * user's messages might be less than the maximum send rate.</p> 
     */
    inline void SetMaxSendRate(double value) { m_maxSendRate = value; }

    /**
     * <p>The maximum number of emails that Amazon SES can accept from the user's
     * account per second.</p>  <p>The rate at which Amazon SES accepts the
     * user's messages might be less than the maximum send rate.</p> 
     */
    inline GetSendQuotaResult& WithMaxSendRate(double value) { SetMaxSendRate(value); return *this;}


    /**
     * <p>The number of emails sent during the previous 24 hours.</p>
     */
    inline double GetSentLast24Hours() const{ return m_sentLast24Hours; }

    /**
     * <p>The number of emails sent during the previous 24 hours.</p>
     */
    inline void SetSentLast24Hours(double value) { m_sentLast24Hours = value; }

    /**
     * <p>The number of emails sent during the previous 24 hours.</p>
     */
    inline GetSendQuotaResult& WithSentLast24Hours(double value) { SetSentLast24Hours(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSendQuotaResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSendQuotaResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    double m_max24HourSend;

    double m_maxSendRate;

    double m_sentLast24Hours;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
