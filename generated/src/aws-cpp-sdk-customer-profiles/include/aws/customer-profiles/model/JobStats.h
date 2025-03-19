/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Statistics about the Identity Resolution Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/JobStats">AWS
   * API Reference</a></p>
   */
  class JobStats
  {
  public:
    AWS_CUSTOMERPROFILES_API JobStats() = default;
    AWS_CUSTOMERPROFILES_API JobStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API JobStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of profiles reviewed.</p>
     */
    inline long long GetNumberOfProfilesReviewed() const { return m_numberOfProfilesReviewed; }
    inline bool NumberOfProfilesReviewedHasBeenSet() const { return m_numberOfProfilesReviewedHasBeenSet; }
    inline void SetNumberOfProfilesReviewed(long long value) { m_numberOfProfilesReviewedHasBeenSet = true; m_numberOfProfilesReviewed = value; }
    inline JobStats& WithNumberOfProfilesReviewed(long long value) { SetNumberOfProfilesReviewed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of matches found.</p>
     */
    inline long long GetNumberOfMatchesFound() const { return m_numberOfMatchesFound; }
    inline bool NumberOfMatchesFoundHasBeenSet() const { return m_numberOfMatchesFoundHasBeenSet; }
    inline void SetNumberOfMatchesFound(long long value) { m_numberOfMatchesFoundHasBeenSet = true; m_numberOfMatchesFound = value; }
    inline JobStats& WithNumberOfMatchesFound(long long value) { SetNumberOfMatchesFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of merges completed.</p>
     */
    inline long long GetNumberOfMergesDone() const { return m_numberOfMergesDone; }
    inline bool NumberOfMergesDoneHasBeenSet() const { return m_numberOfMergesDoneHasBeenSet; }
    inline void SetNumberOfMergesDone(long long value) { m_numberOfMergesDoneHasBeenSet = true; m_numberOfMergesDone = value; }
    inline JobStats& WithNumberOfMergesDone(long long value) { SetNumberOfMergesDone(value); return *this;}
    ///@}
  private:

    long long m_numberOfProfilesReviewed{0};
    bool m_numberOfProfilesReviewedHasBeenSet = false;

    long long m_numberOfMatchesFound{0};
    bool m_numberOfMatchesFoundHasBeenSet = false;

    long long m_numberOfMergesDone{0};
    bool m_numberOfMergesDoneHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
