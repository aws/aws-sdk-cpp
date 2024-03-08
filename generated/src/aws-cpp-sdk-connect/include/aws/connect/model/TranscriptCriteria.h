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
    AWS_CONNECT_API TranscriptCriteria();
    AWS_CONNECT_API TranscriptCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TranscriptCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The participant role in a transcript</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>The participant role in a transcript</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>The participant role in a transcript</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>The participant role in a transcript</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>The participant role in a transcript</p>
     */
    inline TranscriptCriteria& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>The participant role in a transcript</p>
     */
    inline TranscriptCriteria& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchText() const{ return m_searchText; }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline void SetSearchText(const Aws::Vector<Aws::String>& value) { m_searchTextHasBeenSet = true; m_searchText = value; }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline void SetSearchText(Aws::Vector<Aws::String>&& value) { m_searchTextHasBeenSet = true; m_searchText = std::move(value); }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline TranscriptCriteria& WithSearchText(const Aws::Vector<Aws::String>& value) { SetSearchText(value); return *this;}

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline TranscriptCriteria& WithSearchText(Aws::Vector<Aws::String>&& value) { SetSearchText(std::move(value)); return *this;}

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline TranscriptCriteria& AddSearchText(const Aws::String& value) { m_searchTextHasBeenSet = true; m_searchText.push_back(value); return *this; }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline TranscriptCriteria& AddSearchText(Aws::String&& value) { m_searchTextHasBeenSet = true; m_searchText.push_back(std::move(value)); return *this; }

    /**
     * <p>The words or phrases used to search within a transcript.</p>
     */
    inline TranscriptCriteria& AddSearchText(const char* value) { m_searchTextHasBeenSet = true; m_searchText.push_back(value); return *this; }


    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline const SearchContactsMatchType& GetMatchType() const{ return m_matchType; }

    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }

    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline void SetMatchType(const SearchContactsMatchType& value) { m_matchTypeHasBeenSet = true; m_matchType = value; }

    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline void SetMatchType(SearchContactsMatchType&& value) { m_matchTypeHasBeenSet = true; m_matchType = std::move(value); }

    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline TranscriptCriteria& WithMatchType(const SearchContactsMatchType& value) { SetMatchType(value); return *this;}

    /**
     * <p>The match type combining search criteria using multiple search texts in a
     * transcript criteria.</p>
     */
    inline TranscriptCriteria& WithMatchType(SearchContactsMatchType&& value) { SetMatchType(std::move(value)); return *this;}

  private:

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_searchText;
    bool m_searchTextHasBeenSet = false;

    SearchContactsMatchType m_matchType;
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
