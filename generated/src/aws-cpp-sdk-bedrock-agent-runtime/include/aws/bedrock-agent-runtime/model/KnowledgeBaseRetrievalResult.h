/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContent.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultLocation.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Details about a result from querying the knowledge base.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseRetrievalResult">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrievalResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalResult();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrievalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline const RetrievalResultContent& GetContent() const{ return m_content; }

    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline void SetContent(const RetrievalResultContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline void SetContent(RetrievalResultContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline KnowledgeBaseRetrievalResult& WithContent(const RetrievalResultContent& value) { SetContent(value); return *this;}

    /**
     * <p>Contains a chunk of text from a data source in the knowledge base.</p>
     */
    inline KnowledgeBaseRetrievalResult& WithContent(RetrievalResultContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline const RetrievalResultLocation& GetLocation() const{ return m_location; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline void SetLocation(const RetrievalResultLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline void SetLocation(RetrievalResultLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline KnowledgeBaseRetrievalResult& WithLocation(const RetrievalResultLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline KnowledgeBaseRetrievalResult& WithLocation(RetrievalResultLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The level of relevance of the result to the query.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of relevance of the result to the query.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of relevance of the result to the query.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of relevance of the result to the query.</p>
     */
    inline KnowledgeBaseRetrievalResult& WithScore(double value) { SetScore(value); return *this;}

  private:

    RetrievalResultContent m_content;
    bool m_contentHasBeenSet = false;

    RetrievalResultLocation m_location;
    bool m_locationHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
