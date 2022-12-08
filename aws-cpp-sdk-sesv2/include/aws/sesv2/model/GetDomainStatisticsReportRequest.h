/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to obtain deliverability metrics for a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReportRequest">AWS
   * API Reference</a></p>
   */
  class GetDomainStatisticsReportRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDomainStatisticsReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainStatisticsReport"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    bool m_domainHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
