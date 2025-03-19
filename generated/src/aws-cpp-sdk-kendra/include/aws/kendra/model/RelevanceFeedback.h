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
    AWS_KENDRA_API RelevanceFeedback() = default;
    AWS_KENDRA_API RelevanceFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API RelevanceFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the search result that the user provided relevance feedback
     * for.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    RelevanceFeedback& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the document was relevant or not relevant to the search.</p>
     */
    inline RelevanceType GetRelevanceValue() const { return m_relevanceValue; }
    inline bool RelevanceValueHasBeenSet() const { return m_relevanceValueHasBeenSet; }
    inline void SetRelevanceValue(RelevanceType value) { m_relevanceValueHasBeenSet = true; m_relevanceValue = value; }
    inline RelevanceFeedback& WithRelevanceValue(RelevanceType value) { SetRelevanceValue(value); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    RelevanceType m_relevanceValue{RelevanceType::NOT_SET};
    bool m_relevanceValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
