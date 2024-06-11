/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SeverityCounts.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A response that contains details on the results of a finding aggregation by
   * title.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TitleAggregationResponse">AWS
   * API Reference</a></p>
   */
  class TitleAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API TitleAggregationResponse();
    AWS_INSPECTOR2_API TitleAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API TitleAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline TitleAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline TitleAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline TitleAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represent the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }
    inline TitleAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}
    inline TitleAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title that the findings were aggregated on.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline TitleAggregationResponse& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline TitleAggregationResponse& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline TitleAggregationResponse& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vulnerability ID of the finding.</p>
     */
    inline const Aws::String& GetVulnerabilityId() const{ return m_vulnerabilityId; }
    inline bool VulnerabilityIdHasBeenSet() const { return m_vulnerabilityIdHasBeenSet; }
    inline void SetVulnerabilityId(const Aws::String& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId = value; }
    inline void SetVulnerabilityId(Aws::String&& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId = std::move(value); }
    inline void SetVulnerabilityId(const char* value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId.assign(value); }
    inline TitleAggregationResponse& WithVulnerabilityId(const Aws::String& value) { SetVulnerabilityId(value); return *this;}
    inline TitleAggregationResponse& WithVulnerabilityId(Aws::String&& value) { SetVulnerabilityId(std::move(value)); return *this;}
    inline TitleAggregationResponse& WithVulnerabilityId(const char* value) { SetVulnerabilityId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_vulnerabilityId;
    bool m_vulnerabilityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
