/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/RelevanceType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides feedback on how relevant a document is to a search. Your application
   * uses the <code>SubmitFeedback</code> API to provide relevance
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/RelevanceFeedback">AWS
   * API Reference</a></p>
   */
  class RelevanceFeedback
  {
  public:
    AWS_KENDRA_API RelevanceFeedback();
    AWS_KENDRA_API RelevanceFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API RelevanceFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline RelevanceFeedback& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline RelevanceFeedback& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline RelevanceFeedback& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline const RelevanceType& GetRelevanceValue() const{ return m_relevanceValue; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline bool RelevanceValueHasBeenSet() const { return m_relevanceValueHasBeenSet; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline void SetRelevanceValue(const RelevanceType& value) { m_relevanceValueHasBeenSet = true; m_relevanceValue = value; }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline void SetRelevanceValue(RelevanceType&& value) { m_relevanceValueHasBeenSet = true; m_relevanceValue = std::move(value); }

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline RelevanceFeedback& WithRelevanceValue(const RelevanceType& value) { SetRelevanceValue(value); return *this;}

    /**
     * <p>Whether to document was relevant or not relevant to the search.</p>
     */
    inline RelevanceFeedback& WithRelevanceValue(RelevanceType&& value) { SetRelevanceValue(std::move(value)); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    RelevanceType m_relevanceValue;
    bool m_relevanceValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
