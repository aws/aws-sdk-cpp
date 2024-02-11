/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class GetMetricsSummaryRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API GetMetricsSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricsSummary"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

    AWS_CODEGURUSECURITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline GetMetricsSummaryRequest& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years since metrics data is only
     * stored for two years. If a date outside of this range is passed, the response
     * will be empty.</p>
     */
    inline GetMetricsSummaryRequest& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
