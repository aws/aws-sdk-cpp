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
    AWS_CODEGURUSECURITY_API GetMetricsSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricsSummary"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

    AWS_CODEGURUSECURITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The date you want to retrieve summary metrics from, rounded to the nearest
     * day. The date must be within the past two years.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    GetMetricsSummaryRequest& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
