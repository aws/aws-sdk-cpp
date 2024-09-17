/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>A batch operation to remove a facet from an object.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRemoveFacetFromObject">AWS
   * API Reference</a></p>
   */
  class BatchRemoveFacetFromObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject();
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The facet to remove from the object.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }
    inline BatchRemoveFacetFromObject& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}
    inline BatchRemoveFacetFromObject& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline BatchRemoveFacetFromObject& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline BatchRemoveFacetFromObject& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
    ///@}
  private:

    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
