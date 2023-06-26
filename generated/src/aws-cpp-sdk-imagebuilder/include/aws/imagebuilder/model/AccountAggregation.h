/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/SeverityCounts.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains counts of vulnerability findings from image scans that run when you
   * create new Image Builder images, or build new versions of existing images. The
   * vulnerability counts are grouped by severity level. The counts are aggregated
   * across resources to create the final tally for the account that owns
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/AccountAggregation">AWS
   * API Reference</a></p>
   */
  class AccountAggregation
  {
  public:
    AWS_IMAGEBUILDER_API AccountAggregation();
    AWS_IMAGEBUILDER_API AccountAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API AccountAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline AccountAggregation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline AccountAggregation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifies the account that owns the aggregated resource findings.</p>
     */
    inline AccountAggregation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline AccountAggregation& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings.</p>
     */
    inline AccountAggregation& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
