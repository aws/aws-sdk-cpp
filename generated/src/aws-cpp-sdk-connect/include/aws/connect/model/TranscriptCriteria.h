/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure that defines search criteria base on words or phrases,
   * participants in the Contact Lens conversational analytics
   * transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TranscriptCriteria">AWS
   * API Reference</a></p>
   */
  class TranscriptCriteria
  {
  public:
    AWS_CONNECT_API TranscriptCriteria() = default;
    AWS_CONNECT_API TranscriptCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TranscriptCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The participant role in a transcript</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline TranscriptCriteria& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchText() const { return m_searchText; }
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
    template<typename SearchTextT = Aws::Vector<Aws::String>>
    void SetSearchText(SearchTextT&& value) { m_searchTextHasBeenSet = true; m_searchText = std::forward<SearchTextT>(value); }
    template<typename SearchTextT = Aws::Vector<Aws::String>>
    TranscriptCriteria& WithSearchText(SearchTextT&& value) { SetSearchText(std::forward<SearchTextT>(value)); return *this;}
    template<typename SearchTextT = Aws::String>
    TranscriptCriteria& AddSearchText(SearchTextT&& value) { m_searchTextHasBeenSet = true; m_searchText.emplace_back(std::forward<SearchTextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline SearchContactsMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(SearchContactsMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline TranscriptCriteria& WithMatchType(SearchContactsMatchType value) { SetMatchType(value); return *this;}
    ///@}
  private:

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_searchText;
    bool m_searchTextHasBeenSet = false;

    SearchContactsMatchType m_matchType{SearchContactsMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
