/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A set of filters by which to return Jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobsRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeJobsRequestFilters
  {
  public:
    AWS_DRS_API DescribeJobsRequestFilters();
    AWS_DRS_API DescribeJobsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeJobsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start date in a date range query.</p>
     */
    inline const Aws::String& GetFromDate() const{ return m_fromDate; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline bool FromDateHasBeenSet() const { return m_fromDateHasBeenSet; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDate(const Aws::String& value) { m_fromDateHasBeenSet = true; m_fromDate = value; }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDate(Aws::String&& value) { m_fromDateHasBeenSet = true; m_fromDate = std::move(value); }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline void SetFromDate(const char* value) { m_fromDateHasBeenSet = true; m_fromDate.assign(value); }

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithFromDate(const Aws::String& value) { SetFromDate(value); return *this;}

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithFromDate(Aws::String&& value) { SetFromDate(std::move(value)); return *this;}

    /**
     * <p>The start date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithFromDate(const char* value) { SetFromDate(value); return *this;}


    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIDs() const{ return m_jobIDs; }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline bool JobIDsHasBeenSet() const { return m_jobIDsHasBeenSet; }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline void SetJobIDs(const Aws::Vector<Aws::String>& value) { m_jobIDsHasBeenSet = true; m_jobIDs = value; }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline void SetJobIDs(Aws::Vector<Aws::String>&& value) { m_jobIDsHasBeenSet = true; m_jobIDs = std::move(value); }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline DescribeJobsRequestFilters& WithJobIDs(const Aws::Vector<Aws::String>& value) { SetJobIDs(value); return *this;}

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline DescribeJobsRequestFilters& WithJobIDs(Aws::Vector<Aws::String>&& value) { SetJobIDs(std::move(value)); return *this;}

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline DescribeJobsRequestFilters& AddJobIDs(const Aws::String& value) { m_jobIDsHasBeenSet = true; m_jobIDs.push_back(value); return *this; }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline DescribeJobsRequestFilters& AddJobIDs(Aws::String&& value) { m_jobIDsHasBeenSet = true; m_jobIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline DescribeJobsRequestFilters& AddJobIDs(const char* value) { m_jobIDsHasBeenSet = true; m_jobIDs.push_back(value); return *this; }


    /**
     * <p>The end date in a date range query.</p>
     */
    inline const Aws::String& GetToDate() const{ return m_toDate; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline bool ToDateHasBeenSet() const { return m_toDateHasBeenSet; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDate(const Aws::String& value) { m_toDateHasBeenSet = true; m_toDate = value; }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDate(Aws::String&& value) { m_toDateHasBeenSet = true; m_toDate = std::move(value); }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline void SetToDate(const char* value) { m_toDateHasBeenSet = true; m_toDate.assign(value); }

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithToDate(const Aws::String& value) { SetToDate(value); return *this;}

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithToDate(Aws::String&& value) { SetToDate(std::move(value)); return *this;}

    /**
     * <p>The end date in a date range query.</p>
     */
    inline DescribeJobsRequestFilters& WithToDate(const char* value) { SetToDate(value); return *this;}

  private:

    Aws::String m_fromDate;
    bool m_fromDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobIDs;
    bool m_jobIDsHasBeenSet = false;

    Aws::String m_toDate;
    bool m_toDateHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
