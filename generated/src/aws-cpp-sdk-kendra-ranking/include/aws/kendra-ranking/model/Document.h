/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
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
namespace KendraRanking
{
namespace Model
{

  /**
   * <p>Information about a document from a search service such as OpenSearch (self
   * managed). Amazon Kendra Intelligent Ranking uses this information to rank and
   * score on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/Document">AWS
   * API Reference</a></p>
   */
  class Document
  {
  public:
    AWS_KENDRARANKING_API Document() = default;
    AWS_KENDRARANKING_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Document& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional group identifier of the document from the search service.
     * Documents with the same group identifier are grouped together and processed as
     * one document within the service.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    Document& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the search service's document.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Document& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body text of the search service's document.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Document& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the search service's document represented as a list of tokens or
     * words. You must choose to provide <code>Title</code> or
     * <code>TokenizedTitle</code>. You cannot provide both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenizedTitle() const { return m_tokenizedTitle; }
    inline bool TokenizedTitleHasBeenSet() const { return m_tokenizedTitleHasBeenSet; }
    template<typename TokenizedTitleT = Aws::Vector<Aws::String>>
    void SetTokenizedTitle(TokenizedTitleT&& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle = std::forward<TokenizedTitleT>(value); }
    template<typename TokenizedTitleT = Aws::Vector<Aws::String>>
    Document& WithTokenizedTitle(TokenizedTitleT&& value) { SetTokenizedTitle(std::forward<TokenizedTitleT>(value)); return *this;}
    template<typename TokenizedTitleT = Aws::String>
    Document& AddTokenizedTitle(TokenizedTitleT&& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle.emplace_back(std::forward<TokenizedTitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body text of the search service's document represented as a list of
     * tokens or words. You must choose to provide <code>Body</code> or
     * <code>TokenizedBody</code>. You cannot provide both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenizedBody() const { return m_tokenizedBody; }
    inline bool TokenizedBodyHasBeenSet() const { return m_tokenizedBodyHasBeenSet; }
    template<typename TokenizedBodyT = Aws::Vector<Aws::String>>
    void SetTokenizedBody(TokenizedBodyT&& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody = std::forward<TokenizedBodyT>(value); }
    template<typename TokenizedBodyT = Aws::Vector<Aws::String>>
    Document& WithTokenizedBody(TokenizedBodyT&& value) { SetTokenizedBody(std::forward<TokenizedBodyT>(value)); return *this;}
    template<typename TokenizedBodyT = Aws::String>
    Document& AddTokenizedBody(TokenizedBodyT&& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody.emplace_back(std::forward<TokenizedBodyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The original document score or rank from the search service. Amazon Kendra
     * Intelligent Ranking gives the document a new score or rank based on its
     * intelligent search algorithms.</p>
     */
    inline double GetOriginalScore() const { return m_originalScore; }
    inline bool OriginalScoreHasBeenSet() const { return m_originalScoreHasBeenSet; }
    inline void SetOriginalScore(double value) { m_originalScoreHasBeenSet = true; m_originalScore = value; }
    inline Document& WithOriginalScore(double value) { SetOriginalScore(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenizedTitle;
    bool m_tokenizedTitleHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenizedBody;
    bool m_tokenizedBodyHasBeenSet = false;

    double m_originalScore{0.0};
    bool m_originalScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
