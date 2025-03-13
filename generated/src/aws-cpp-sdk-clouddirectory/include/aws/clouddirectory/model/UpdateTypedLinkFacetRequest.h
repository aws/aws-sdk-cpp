/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/TypedLinkFacetAttributeUpdate.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class UpdateTypedLinkFacetRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateTypedLinkFacetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTypedLinkFacet"; }

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
    UpdateTypedLinkFacetRequest& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTypedLinkFacetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes update structure.</p>
     */
    inline const Aws::Vector<TypedLinkFacetAttributeUpdate>& GetAttributeUpdates() const { return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    template<typename AttributeUpdatesT = Aws::Vector<TypedLinkFacetAttributeUpdate>>
    void SetAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::forward<AttributeUpdatesT>(value); }
    template<typename AttributeUpdatesT = Aws::Vector<TypedLinkFacetAttributeUpdate>>
    UpdateTypedLinkFacetRequest& WithAttributeUpdates(AttributeUpdatesT&& value) { SetAttributeUpdates(std::forward<AttributeUpdatesT>(value)); return *this;}
    template<typename AttributeUpdatesT = TypedLinkFacetAttributeUpdate>
    UpdateTypedLinkFacetRequest& AddAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace_back(std::forward<AttributeUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order of identity attributes for the facet, from most significant to
     * least significant. The ability to filter typed links considers the order that
     * the attributes are defined on the typed link facet. When providing ranges to a
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range. Filters are interpreted in the order of the attributes on the typed link
     * facet, not the order in which they are supplied to any API calls. For more
     * information about identity attributes, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const { return m_identityAttributeOrder; }
    inline bool IdentityAttributeOrderHasBeenSet() const { return m_identityAttributeOrderHasBeenSet; }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    void SetIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::forward<IdentityAttributeOrderT>(value); }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    UpdateTypedLinkFacetRequest& WithIdentityAttributeOrder(IdentityAttributeOrderT&& value) { SetIdentityAttributeOrder(std::forward<IdentityAttributeOrderT>(value)); return *this;}
    template<typename IdentityAttributeOrderT = Aws::String>
    UpdateTypedLinkFacetRequest& AddIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.emplace_back(std::forward<IdentityAttributeOrderT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TypedLinkFacetAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;

    Aws::Vector<Aws::String> m_identityAttributeOrder;
    bool m_identityAttributeOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
