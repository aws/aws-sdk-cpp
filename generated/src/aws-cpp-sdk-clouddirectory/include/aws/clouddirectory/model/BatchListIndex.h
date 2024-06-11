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
    AWS_CLOUDDIRECTORY_API BatchListIndex();
    AWS_CLOUDDIRECTORY_API BatchListIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline const Aws::Vector<ObjectAttributeRange>& GetRangesOnIndexedValues() const{ return m_rangesOnIndexedValues; }
    inline bool RangesOnIndexedValuesHasBeenSet() const { return m_rangesOnIndexedValuesHasBeenSet; }
    inline void SetRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = value; }
    inline void SetRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = std::move(value); }
    inline BatchListIndex& WithRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { SetRangesOnIndexedValues(value); return *this;}
    inline BatchListIndex& WithRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { SetRangesOnIndexedValues(std::move(value)); return *this;}
    inline BatchListIndex& AddRangesOnIndexedValues(const ObjectAttributeRange& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(value); return *this; }
    inline BatchListIndex& AddRangesOnIndexedValues(ObjectAttributeRange&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reference to the index to list.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }
    inline BatchListIndex& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}
    inline BatchListIndex& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchListIndex& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline BatchListIndex& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchListIndex& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchListIndex& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectAttributeRange> m_rangesOnIndexedValues;
    bool m_rangesOnIndexedValuesHasBeenSet = false;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
