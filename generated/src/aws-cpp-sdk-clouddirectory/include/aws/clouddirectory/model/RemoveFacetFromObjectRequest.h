/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class RemoveFacetFromObjectRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API RemoveFacetFromObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFacetFromObject"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline RemoveFacetFromObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline RemoveFacetFromObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the directory in which the object resides.</p>
     */
    inline RemoveFacetFromObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }

    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }

    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }

    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }

    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline RemoveFacetFromObjectRequest& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}

    /**
     * <p>The facet to remove. See <a>SchemaFacet</a> for details.</p>
     */
    inline RemoveFacetFromObjectRequest& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(std::move(value)); return *this;}


    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline RemoveFacetFromObjectRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>A reference to the object to remove the facet from.</p>
     */
    inline RemoveFacetFromObjectRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
