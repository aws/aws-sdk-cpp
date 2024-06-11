/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkFacet.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class CreateTypedLinkFacetRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateTypedLinkFacetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTypedLinkFacet"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }
    inline CreateTypedLinkFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline CreateTypedLinkFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline CreateTypedLinkFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline const TypedLinkFacet& GetFacet() const{ return m_facet; }
    inline bool FacetHasBeenSet() const { return m_facetHasBeenSet; }
    inline void SetFacet(const TypedLinkFacet& value) { m_facetHasBeenSet = true; m_facet = value; }
    inline void SetFacet(TypedLinkFacet&& value) { m_facetHasBeenSet = true; m_facet = std::move(value); }
    inline CreateTypedLinkFacetRequest& WithFacet(const TypedLinkFacet& value) { SetFacet(value); return *this;}
    inline CreateTypedLinkFacetRequest& WithFacet(TypedLinkFacet&& value) { SetFacet(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    TypedLinkFacet m_facet;
    bool m_facetHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
