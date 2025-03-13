/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
   * <p>Provides statistical information about the FAQ questions and answers for an
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FaqStatistics">AWS
   * API Reference</a></p>
   */
  class FaqStatistics
  {
  public:
    AWS_KENDRA_API FaqStatistics() = default;
    AWS_KENDRA_API FaqStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FaqStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of FAQ questions and answers for an index.</p>
     */
    inline int GetIndexedQuestionAnswersCount() const { return m_indexedQuestionAnswersCount; }
    inline bool IndexedQuestionAnswersCountHasBeenSet() const { return m_indexedQuestionAnswersCountHasBeenSet; }
    inline void SetIndexedQuestionAnswersCount(int value) { m_indexedQuestionAnswersCountHasBeenSet = true; m_indexedQuestionAnswersCount = value; }
    inline FaqStatistics& WithIndexedQuestionAnswersCount(int value) { SetIndexedQuestionAnswersCount(value); return *this;}
    ///@}
  private:

    int m_indexedQuestionAnswersCount{0};
    bool m_indexedQuestionAnswersCountHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
