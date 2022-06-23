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
  class AWS_CUSTOMERPROFILES_API MatchItem
  {
  public:
    MatchItem();
    MatchItem(Aws::Utils::Json::JsonView jsonValue);
    MatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>A number between 0 and 1 that represents the confidence level of assigning
     * profiles to a matching group. A score of 1 likely indicates an exact match.</p>
     */
    inline double GetConfidenceScore() const{ return m_confidenceScore; }

    /**
     * <p>A number between 0 and 1 that represents the confidence level of assigning
     * profiles to a matching group. A score of 1 likely indicates an exact match.</p>
     */
    inline bool ConfidenceScoreHasBeenSet() const { return m_confidenceScoreHasBeenSet; }

    /**
     * <p>A number between 0 and 1 that represents the confidence level of assigning
     * profiles to a matching group. A score of 1 likely indicates an exact match.</p>
     */
    inline void SetConfidenceScore(double value) { m_confidenceScoreHasBeenSet = true; m_confidenceScore = value; }

    /**
     * <p>A number between 0 and 1 that represents the confidence level of assigning
     * profiles to a matching group. A score of 1 likely indicates an exact match.</p>
     */
    inline MatchItem& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}

  private:

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet;

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet;

    double m_confidenceScore;
    bool m_confidenceScoreHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
