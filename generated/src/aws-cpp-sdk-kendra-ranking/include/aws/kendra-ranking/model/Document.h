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
    AWS_KENDRARANKING_API Document();
    AWS_KENDRARANKING_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Document& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Document& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Document& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional group identifier of the document from the search service.
     * Documents with the same group identifier are grouped together and processed as
     * one document within the service.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline Document& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline Document& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline Document& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the search service's document.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Document& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Document& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Document& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body text of the search service's document.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline Document& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline Document& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline Document& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the search service's document represented as a list of tokens or
     * words. You must choose to provide <code>Title</code> or
     * <code>TokenizedTitle</code>. You cannot provide both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenizedTitle() const{ return m_tokenizedTitle; }
    inline bool TokenizedTitleHasBeenSet() const { return m_tokenizedTitleHasBeenSet; }
    inline void SetTokenizedTitle(const Aws::Vector<Aws::String>& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle = value; }
    inline void SetTokenizedTitle(Aws::Vector<Aws::String>&& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle = std::move(value); }
    inline Document& WithTokenizedTitle(const Aws::Vector<Aws::String>& value) { SetTokenizedTitle(value); return *this;}
    inline Document& WithTokenizedTitle(Aws::Vector<Aws::String>&& value) { SetTokenizedTitle(std::move(value)); return *this;}
    inline Document& AddTokenizedTitle(const Aws::String& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle.push_back(value); return *this; }
    inline Document& AddTokenizedTitle(Aws::String&& value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle.push_back(std::move(value)); return *this; }
    inline Document& AddTokenizedTitle(const char* value) { m_tokenizedTitleHasBeenSet = true; m_tokenizedTitle.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body text of the search service's document represented as a list of
     * tokens or words. You must choose to provide <code>Body</code> or
     * <code>TokenizedBody</code>. You cannot provide both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenizedBody() const{ return m_tokenizedBody; }
    inline bool TokenizedBodyHasBeenSet() const { return m_tokenizedBodyHasBeenSet; }
    inline void SetTokenizedBody(const Aws::Vector<Aws::String>& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody = value; }
    inline void SetTokenizedBody(Aws::Vector<Aws::String>&& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody = std::move(value); }
    inline Document& WithTokenizedBody(const Aws::Vector<Aws::String>& value) { SetTokenizedBody(value); return *this;}
    inline Document& WithTokenizedBody(Aws::Vector<Aws::String>&& value) { SetTokenizedBody(std::move(value)); return *this;}
    inline Document& AddTokenizedBody(const Aws::String& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody.push_back(value); return *this; }
    inline Document& AddTokenizedBody(Aws::String&& value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody.push_back(std::move(value)); return *this; }
    inline Document& AddTokenizedBody(const char* value) { m_tokenizedBodyHasBeenSet = true; m_tokenizedBody.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The original document score or rank from the search service. Amazon Kendra
     * Intelligent Ranking gives the document a new score or rank based on its
     * intelligent search algorithms.</p>
     */
    inline double GetOriginalScore() const{ return m_originalScore; }
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

    double m_originalScore;
    bool m_originalScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
