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
    AWS_CUSTOMERPROFILES_API JobStats();
    AWS_CUSTOMERPROFILES_API JobStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API JobStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of profiles reviewed.</p>
     */
    inline long long GetNumberOfProfilesReviewed() const{ return m_numberOfProfilesReviewed; }

    /**
     * <p>The number of profiles reviewed.</p>
     */
    inline bool NumberOfProfilesReviewedHasBeenSet() const { return m_numberOfProfilesReviewedHasBeenSet; }

    /**
     * <p>The number of profiles reviewed.</p>
     */
    inline void SetNumberOfProfilesReviewed(long long value) { m_numberOfProfilesReviewedHasBeenSet = true; m_numberOfProfilesReviewed = value; }

    /**
     * <p>The number of profiles reviewed.</p>
     */
    inline JobStats& WithNumberOfProfilesReviewed(long long value) { SetNumberOfProfilesReviewed(value); return *this;}


    /**
     * <p>The number of matches found.</p>
     */
    inline long long GetNumberOfMatchesFound() const{ return m_numberOfMatchesFound; }

    /**
     * <p>The number of matches found.</p>
     */
    inline bool NumberOfMatchesFoundHasBeenSet() const { return m_numberOfMatchesFoundHasBeenSet; }

    /**
     * <p>The number of matches found.</p>
     */
    inline void SetNumberOfMatchesFound(long long value) { m_numberOfMatchesFoundHasBeenSet = true; m_numberOfMatchesFound = value; }

    /**
     * <p>The number of matches found.</p>
     */
    inline JobStats& WithNumberOfMatchesFound(long long value) { SetNumberOfMatchesFound(value); return *this;}


    /**
     * <p>The number of merges completed.</p>
     */
    inline long long GetNumberOfMergesDone() const{ return m_numberOfMergesDone; }

    /**
     * <p>The number of merges completed.</p>
     */
    inline bool NumberOfMergesDoneHasBeenSet() const { return m_numberOfMergesDoneHasBeenSet; }

    /**
     * <p>The number of merges completed.</p>
     */
    inline void SetNumberOfMergesDone(long long value) { m_numberOfMergesDoneHasBeenSet = true; m_numberOfMergesDone = value; }

    /**
     * <p>The number of merges completed.</p>
     */
    inline JobStats& WithNumberOfMergesDone(long long value) { SetNumberOfMergesDone(value); return *this;}

  private:

    long long m_numberOfProfilesReviewed;
    bool m_numberOfProfilesReviewedHasBeenSet = false;

    long long m_numberOfMatchesFound;
    bool m_numberOfMatchesFoundHasBeenSet = false;

    long long m_numberOfMergesDone;
    bool m_numberOfMergesDoneHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
