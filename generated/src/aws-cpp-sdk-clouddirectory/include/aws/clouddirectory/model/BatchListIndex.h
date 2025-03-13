/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectAttributeRange.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Lists objects attached to the specified index inside a <a>BatchRead</a>
   * operation. For more information, see <a>ListIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListIndex">AWS
   * API Reference</a></p>
   */
  class BatchListIndex
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListIndex() = default;
    AWS_CLOUDDIRECTORY_API BatchListIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline const Aws::Vector<ObjectAttributeRange>& GetRangesOnIndexedValues() const { return m_rangesOnIndexedValues; }
    inline bool RangesOnIndexedValuesHasBeenSet() const { return m_rangesOnIndexedValuesHasBeenSet; }
    template<typename RangesOnIndexedValuesT = Aws::Vector<ObjectAttributeRange>>
    void SetRangesOnIndexedValues(RangesOnIndexedValuesT&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = std::forward<RangesOnIndexedValuesT>(value); }
    template<typename RangesOnIndexedValuesT = Aws::Vector<ObjectAttributeRange>>
    BatchListIndex& WithRangesOnIndexedValues(RangesOnIndexedValuesT&& value) { SetRangesOnIndexedValues(std::forward<RangesOnIndexedValuesT>(value)); return *this;}
    template<typename RangesOnIndexedValuesT = ObjectAttributeRange>
    BatchListIndex& AddRangesOnIndexedValues(RangesOnIndexedValuesT&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.emplace_back(std::forward<RangesOnIndexedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reference to the index to list.</p>
     */
    inline const ObjectReference& GetIndexReference() const { return m_indexReference; }
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }
    template<typename IndexReferenceT = ObjectReference>
    void SetIndexReference(IndexReferenceT&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::forward<IndexReferenceT>(value); }
    template<typename IndexReferenceT = ObjectReference>
    BatchListIndex& WithIndexReference(IndexReferenceT&& value) { SetIndexReference(std::forward<IndexReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchListIndex& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchListIndex& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectAttributeRange> m_rangesOnIndexedValues;
    bool m_rangesOnIndexedValuesHasBeenSet = false;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
