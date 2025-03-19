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
    AWS_CLOUDDIRECTORY_API CreateTypedLinkFacetRequest() = default;

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
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    CreateTypedLinkFacetRequest& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a>Facet</a> structure that is associated with the typed link facet.</p>
     */
    inline const TypedLinkFacet& GetFacet() const { return m_facet; }
    inline bool FacetHasBeenSet() const { return m_facetHasBeenSet; }
    template<typename FacetT = TypedLinkFacet>
    void SetFacet(FacetT&& value) { m_facetHasBeenSet = true; m_facet = std::forward<FacetT>(value); }
    template<typename FacetT = TypedLinkFacet>
    CreateTypedLinkFacetRequest& WithFacet(FacetT&& value) { SetFacet(std::forward<FacetT>(value)); return *this;}
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
