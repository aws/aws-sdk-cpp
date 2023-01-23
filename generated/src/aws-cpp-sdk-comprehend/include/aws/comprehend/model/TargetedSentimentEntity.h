/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/TargetedSentimentMention.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Information about one of the entities found by targeted sentiment
   * analysis.</p> <p>For more information about targeted sentiment, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html">Targeted
   * sentiment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TargetedSentimentEntity">AWS
   * API Reference</a></p>
   */
  class TargetedSentimentEntity
  {
  public:
    AWS_COMPREHEND_API TargetedSentimentEntity();
    AWS_COMPREHEND_API TargetedSentimentEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TargetedSentimentEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline const Aws::Vector<int>& GetDescriptiveMentionIndex() const{ return m_descriptiveMentionIndex; }

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline bool DescriptiveMentionIndexHasBeenSet() const { return m_descriptiveMentionIndexHasBeenSet; }

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline void SetDescriptiveMentionIndex(const Aws::Vector<int>& value) { m_descriptiveMentionIndexHasBeenSet = true; m_descriptiveMentionIndex = value; }

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline void SetDescriptiveMentionIndex(Aws::Vector<int>&& value) { m_descriptiveMentionIndexHasBeenSet = true; m_descriptiveMentionIndex = std::move(value); }

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline TargetedSentimentEntity& WithDescriptiveMentionIndex(const Aws::Vector<int>& value) { SetDescriptiveMentionIndex(value); return *this;}

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline TargetedSentimentEntity& WithDescriptiveMentionIndex(Aws::Vector<int>&& value) { SetDescriptiveMentionIndex(std::move(value)); return *this;}

    /**
     * <p>One or more index into the Mentions array that provides the best name for the
     * entity group.</p>
     */
    inline TargetedSentimentEntity& AddDescriptiveMentionIndex(int value) { m_descriptiveMentionIndexHasBeenSet = true; m_descriptiveMentionIndex.push_back(value); return *this; }


    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline const Aws::Vector<TargetedSentimentMention>& GetMentions() const{ return m_mentions; }

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline bool MentionsHasBeenSet() const { return m_mentionsHasBeenSet; }

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline void SetMentions(const Aws::Vector<TargetedSentimentMention>& value) { m_mentionsHasBeenSet = true; m_mentions = value; }

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline void SetMentions(Aws::Vector<TargetedSentimentMention>&& value) { m_mentionsHasBeenSet = true; m_mentions = std::move(value); }

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline TargetedSentimentEntity& WithMentions(const Aws::Vector<TargetedSentimentMention>& value) { SetMentions(value); return *this;}

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline TargetedSentimentEntity& WithMentions(Aws::Vector<TargetedSentimentMention>&& value) { SetMentions(std::move(value)); return *this;}

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline TargetedSentimentEntity& AddMentions(const TargetedSentimentMention& value) { m_mentionsHasBeenSet = true; m_mentions.push_back(value); return *this; }

    /**
     * <p>An array of mentions of the entity in the document. The array represents a
     * co-reference group. See <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-targeted-sentiment.html#how-targeted-sentiment-values">
     * Co-reference group</a> for an example. </p>
     */
    inline TargetedSentimentEntity& AddMentions(TargetedSentimentMention&& value) { m_mentionsHasBeenSet = true; m_mentions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<int> m_descriptiveMentionIndex;
    bool m_descriptiveMentionIndexHasBeenSet = false;

    Aws::Vector<TargetedSentimentMention> m_mentions;
    bool m_mentionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
