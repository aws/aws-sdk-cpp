/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/clouddirectory/model/ObjectReference.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Batch operation to remove a facet from an object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchRemoveFacetFromObject">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchRemoveFacetFromObject
  {
  public:
    BatchRemoveFacetFromObject();
    BatchRemoveFacetFromObject(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchRemoveFacetFromObject& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The facet to remove from the object.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }

    /**
     * <p>The facet to remove from the object.</p>
     */
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }

    /**
     * <p>The facet to remove from the object.</p>
     */
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }

    /**
     * <p>The facet to remove from the object.</p>
     */
    inline BatchRemoveFacetFromObject& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}

    /**
     * <p>The facet to remove from the object.</p>
     */
    inline BatchRemoveFacetFromObject& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(value); return *this;}

    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline BatchRemoveFacetFromObject& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>A reference to the object whose facet will be removed.</p>
     */
    inline BatchRemoveFacetFromObject& WithObjectReference(ObjectReference&& value) { SetObjectReference(value); return *this;}

  private:
    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet;
    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
