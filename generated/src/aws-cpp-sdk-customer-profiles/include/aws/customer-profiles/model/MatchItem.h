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
    AWS_CUSTOMERPROFILES_API MatchItem() = default;
    AWS_CUSTOMERPROFILES_API MatchItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifiers for this group of profiles that match.</p>
     */
    inline const Aws::String& GetMatchId() const { return m_matchId; }
    inline bool MatchIdHasBeenSet() const { return m_matchIdHasBeenSet; }
    template<typename MatchIdT = Aws::String>
    void SetMatchId(MatchIdT&& value) { m_matchIdHasBeenSet = true; m_matchId = std::forward<MatchIdT>(value); }
    template<typename MatchIdT = Aws::String>
    MatchItem& WithMatchId(MatchIdT&& value) { SetMatchId(std::forward<MatchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers for profiles that match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const { return m_profileIds; }
    inline bool ProfileIdsHasBeenSet() const { return m_profileIdsHasBeenSet; }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    void SetProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::forward<ProfileIdsT>(value); }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    MatchItem& WithProfileIds(ProfileIdsT&& value) { SetProfileIds(std::forward<ProfileIdsT>(value)); return *this;}
    template<typename ProfileIdsT = Aws::String>
    MatchItem& AddProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds.emplace_back(std::forward<ProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline double GetConfidenceScore() const { return m_confidenceScore; }
    inline bool ConfidenceScoreHasBeenSet() const { return m_confidenceScoreHasBeenSet; }
    inline void SetConfidenceScore(double value) { m_confidenceScoreHasBeenSet = true; m_confidenceScore = value; }
    inline MatchItem& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}
    ///@}
  private:

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet = false;

    double m_confidenceScore{0.0};
    bool m_confidenceScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
