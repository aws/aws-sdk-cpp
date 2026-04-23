/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API BatchListIndex
  {
  public:
    BatchListIndex();
    BatchListIndex(Aws::Utils::Json::JsonView jsonValue);
    BatchListIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline const Aws::Vector<ObjectAttributeRange>& GetRangesOnIndexedValues() const{ return m_rangesOnIndexedValues; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline bool RangesOnIndexedValuesHasBeenSet() const { return m_rangesOnIndexedValuesHasBeenSet; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline void SetRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = value; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline void SetRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = std::move(value); }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline BatchListIndex& WithRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { SetRangesOnIndexedValues(value); return *this;}

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline BatchListIndex& WithRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { SetRangesOnIndexedValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline BatchListIndex& AddRangesOnIndexedValues(const ObjectAttributeRange& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(value); return *this; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline BatchListIndex& AddRangesOnIndexedValues(ObjectAttributeRange&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The reference to the index to list.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline BatchListIndex& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>The reference to the index to list.</p>
     */
    inline BatchListIndex& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline BatchListIndex& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIndex& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIndex& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListIndex& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ObjectAttributeRange> m_rangesOnIndexedValues;
    bool m_rangesOnIndexedValuesHasBeenSet;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
