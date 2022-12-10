/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The Match group object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MatchItem">AWS
   * API Reference</a></p>
   */
  class MatchItem
  {
  public:
    AWS_CUSTOMERPROFILES_API MatchItem();
    AWS_CUSTOMERPROFILES_API MatchItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline const Aws::String& GetMatchId() const{ return m_matchId; }

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline bool MatchIdHasBeenSet() const { return m_matchIdHasBeenSet; }

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline void SetMatchId(const Aws::String& value) { m_matchIdHasBeenSet = true; m_matchId = value; }

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline void SetMatchId(Aws::String&& value) { m_matchIdHasBeenSet = true; m_matchId = std::move(value); }

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline void SetMatchId(const char* value) { m_matchIdHasBeenSet = true; m_matchId.assign(value); }

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline MatchItem& WithMatchId(const Aws::String& value) { SetMatchId(value); return *this;}

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline MatchItem& WithMatchId(Aws::String&& value) { SetMatchId(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline MatchItem& WithMatchId(const char* value) { SetMatchId(value); return *this;}


    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const{ return m_profileIds; }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline void SetProfileIds(const Aws::Vector<Aws::String>& value) { m_profileIdsHasBeenSet = true; m_profileIds = value; }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline void SetProfileIds(Aws::Vector<Aws::String>&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::move(value); }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline MatchItem& WithProfileIds(const Aws::Vector<Aws::String>& value) { SetProfileIds(value); return *this;}

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline MatchItem& WithProfileIds(Aws::Vector<Aws::String>&& value) { SetProfileIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline MatchItem& AddProfileIds(const Aws::String& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline MatchItem& AddProfileIds(Aws::String&& value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline MatchItem& AddProfileIds(const char* value) { m_profileIdsHasBeenSet = true; m_profileIds.push_back(value); return *this; }


    /**
     * <p>A number between 0 and 1, where a higher score means higher similarity.
     * Examining match confidence scores lets you distinguish between groups of similar
     * records in which the system is highly confident (which you may decide to merge),
     * groups of similar records about which the system is uncertain (which you may
     * decide to have reviewed by a human), and groups of similar records that the
     * system deems to be unlikely (which you may decide to reject). Given confidence
     * scores vary as per the data input, it should not be used an absolute measure of
     * matching quality.</p>
     */
    inline double GetConfidenceScore() const{ return m_confidenceScore; }

    /**
     * <p>A number between 0 and 1, where a higher score means higher similarity.
     * Examining match confidence scores lets you distinguish between groups of similar
     * records in which the system is highly confident (which you may decide to merge),
     * groups of similar records about which the system is uncertain (which you may
     * decide to have reviewed by a human), and groups of similar records that the
     * system deems to be unlikely (which you may decide to reject). Given confidence
     * scores vary as per the data input, it should not be used an absolute measure of
     * matching quality.</p>
     */
    inline bool ConfidenceScoreHasBeenSet() const { return m_confidenceScoreHasBeenSet; }

    /**
     * <p>A number between 0 and 1, where a higher score means higher similarity.
     * Examining match confidence scores lets you distinguish between groups of similar
     * records in which the system is highly confident (which you may decide to merge),
     * groups of similar records about which the system is uncertain (which you may
     * decide to have reviewed by a human), and groups of similar records that the
     * system deems to be unlikely (which you may decide to reject). Given confidence
     * scores vary as per the data input, it should not be used an absolute measure of
     * matching quality.</p>
     */
    inline void SetConfidenceScore(double value) { m_confidenceScoreHasBeenSet = true; m_confidenceScore = value; }

    /**
     * <p>A number between 0 and 1, where a higher score means higher similarity.
     * Examining match confidence scores lets you distinguish between groups of similar
     * records in which the system is highly confident (which you may decide to merge),
     * groups of similar records about which the system is uncertain (which you may
     * decide to have reviewed by a human), and groups of similar records that the
     * system deems to be unlikely (which you may decide to reject). Given confidence
     * scores vary as per the data input, it should not be used an absolute measure of
     * matching quality.</p>
     */
    inline MatchItem& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}

  private:

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet = false;

    double m_confidenceScore;
    bool m_confidenceScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
