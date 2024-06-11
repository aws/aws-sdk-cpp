/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
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
   * <p>Represents the output of a <a>ListObjectAttributes</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectAttributes">AWS
   * API Reference</a></p>
   */
  class BatchListObjectAttributes
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributes();
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reference of the object whose attributes need to be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline BatchListObjectAttributes& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline BatchListObjectAttributes& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
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
    inline BatchListObjectAttributes& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchListObjectAttributes& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchListObjectAttributes& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchListObjectAttributes& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline const SchemaFacet& GetFacetFilter() const{ return m_facetFilter; }
    inline bool FacetFilterHasBeenSet() const { return m_facetFilterHasBeenSet; }
    inline void SetFacetFilter(const SchemaFacet& value) { m_facetFilterHasBeenSet = true; m_facetFilter = value; }
    inline void SetFacetFilter(SchemaFacet&& value) { m_facetFilterHasBeenSet = true; m_facetFilter = std::move(value); }
    inline BatchListObjectAttributes& WithFacetFilter(const SchemaFacet& value) { SetFacetFilter(value); return *this;}
    inline BatchListObjectAttributes& WithFacetFilter(SchemaFacet&& value) { SetFacetFilter(std::move(value)); return *this;}
    ///@}
  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SchemaFacet m_facetFilter;
    bool m_facetFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
