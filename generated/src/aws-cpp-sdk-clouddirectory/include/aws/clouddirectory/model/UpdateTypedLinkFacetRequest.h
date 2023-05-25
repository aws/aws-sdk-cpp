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
    AWS_CLOUDDIRECTORY_API UpdateTypedLinkFacetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTypedLinkFacet"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Attributes update structure.</p>
     */
    inline const Aws::Vector<TypedLinkFacetAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline void SetAttributeUpdates(const Aws::Vector<TypedLinkFacetAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline void SetAttributeUpdates(Aws::Vector<TypedLinkFacetAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }

    /**
     * <p>Attributes update structure.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithAttributeUpdates(const Aws::Vector<TypedLinkFacetAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>Attributes update structure.</p>
     */
    inline UpdateTypedLinkFacetRequest& WithAttributeUpdates(Aws::Vector<TypedLinkFacetAttributeUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}

    /**
     * <p>Attributes update structure.</p>
     */
    inline UpdateTypedLinkFacetRequest& AddAttributeUpdates(const TypedLinkFacetAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline UpdateTypedLinkFacetRequest& AddAttributeUpdates(TypedLinkFacetAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(std::move(value)); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const{ return m_identityAttributeOrder; }

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
    inline bool IdentityAttributeOrderHasBeenSet() const { return m_identityAttributeOrderHasBeenSet; }

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
    inline void SetIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = value; }

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
    inline void SetIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::move(value); }

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
    inline UpdateTypedLinkFacetRequest& WithIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { SetIdentityAttributeOrder(value); return *this;}

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
    inline UpdateTypedLinkFacetRequest& WithIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { SetIdentityAttributeOrder(std::move(value)); return *this;}

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
    inline UpdateTypedLinkFacetRequest& AddIdentityAttributeOrder(const Aws::String& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

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
    inline UpdateTypedLinkFacetRequest& AddIdentityAttributeOrder(Aws::String&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(std::move(value)); return *this; }

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
    inline UpdateTypedLinkFacetRequest& AddIdentityAttributeOrder(const char* value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

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
