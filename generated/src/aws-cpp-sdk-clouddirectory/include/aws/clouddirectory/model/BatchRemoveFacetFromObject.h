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
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject() = default;
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The facet to remove from the object.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const { return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    template<typename SchemaFacetT = SchemaFacet>
    void SetSchemaFacet(SchemaFacetT&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::forward<SchemaFacetT>(value); }
    template<typename SchemaFacetT = SchemaFacet>
    BatchRemoveFacetFromObject& WithSchemaFacet(SchemaFacetT&& value) { SetSchemaFacet(std::forward<SchemaFacetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    BatchRemoveFacetFromObject& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
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
