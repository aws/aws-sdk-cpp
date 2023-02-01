/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
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
namespace KendraRanking
{
namespace Model
{

  /**
   * <p>A result item for a document with a new relevancy score.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/RescoreResultItem">AWS
   * API Reference</a></p>
   */
  class RescoreResultItem
  {
  public:
    AWS_KENDRARANKING_API RescoreResultItem();
    AWS_KENDRARANKING_API RescoreResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API RescoreResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline RescoreResultItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline RescoreResultItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document from the search service.</p>
     */
    inline RescoreResultItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The relevancy score or rank that Amazon Kendra Intelligent Ranking gives to
     * the result.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The relevancy score or rank that Amazon Kendra Intelligent Ranking gives to
     * the result.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The relevancy score or rank that Amazon Kendra Intelligent Ranking gives to
     * the result.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The relevancy score or rank that Amazon Kendra Intelligent Ranking gives to
     * the result.</p>
     */
    inline RescoreResultItem& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
