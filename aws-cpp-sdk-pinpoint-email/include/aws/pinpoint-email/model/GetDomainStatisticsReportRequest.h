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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to obtain deliverability metrics for a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainStatisticsReportRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDomainStatisticsReportRequest : public PinpointEmailRequest
  {
  public:
    GetDomainStatisticsReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainStatisticsReport"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline GetDomainStatisticsReportRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline GetDomainStatisticsReportRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain that you want to obtain deliverability metrics for.</p>
     */
    inline GetDomainStatisticsReportRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline GetDomainStatisticsReportRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The first day (in Unix time) that you want to obtain domain deliverability
     * metrics for.</p>
     */
    inline GetDomainStatisticsReportRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline GetDomainStatisticsReportRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The last day (in Unix time) that you want to obtain domain deliverability
     * metrics for. The <code>EndDate</code> that you specify has to be less than or
     * equal to 30 days after the <code>StartDate</code>.</p>
     */
    inline GetDomainStatisticsReportRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
