/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/Relevance.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The feedback to submit to Wisdom.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/FeedbackData">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECTWISDOMSERVICE_API FeedbackData
  {
  public:
    FeedbackData();
    FeedbackData(Aws::Utils::Json::JsonView jsonValue);
    FeedbackData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline const Relevance& GetRelevance() const{ return m_relevance; }

    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }

    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline void SetRelevance(const Relevance& value) { m_relevanceHasBeenSet = true; m_relevance = value; }

    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline void SetRelevance(Relevance&& value) { m_relevanceHasBeenSet = true; m_relevance = std::move(value); }

    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline FeedbackData& WithRelevance(const Relevance& value) { SetRelevance(value); return *this;}

    /**
     * <p>The relevance of the target this feedback is for.</p>
     */
    inline FeedbackData& WithRelevance(Relevance&& value) { SetRelevance(std::move(value)); return *this;}

  private:

    Relevance m_relevance;
    bool m_relevanceHasBeenSet;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
