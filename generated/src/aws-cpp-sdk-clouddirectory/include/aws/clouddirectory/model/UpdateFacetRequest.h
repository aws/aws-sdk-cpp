/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/clouddirectory/model/FacetAttributeUpdate.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class UpdateFacetRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateFacetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFacet"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Facet</a>. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    UpdateFacetRequest& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the facet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFacetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by <code>AttributeAction</code>, which specifies the
     * type of update operation to perform. </p>
     */
    inline const Aws::Vector<FacetAttributeUpdate>& GetAttributeUpdates() const { return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    template<typename AttributeUpdatesT = Aws::Vector<FacetAttributeUpdate>>
    void SetAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::forward<AttributeUpdatesT>(value); }
    template<typename AttributeUpdatesT = Aws::Vector<FacetAttributeUpdate>>
    UpdateFacetRequest& WithAttributeUpdates(AttributeUpdatesT&& value) { SetAttributeUpdates(std::forward<AttributeUpdatesT>(value)); return *this;}
    template<typename AttributeUpdatesT = FacetAttributeUpdate>
    UpdateFacetRequest& AddAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace_back(std::forward<AttributeUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline ObjectType GetObjectType() const { return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(ObjectType value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline UpdateFacetRequest& WithObjectType(ObjectType value) { SetObjectType(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FacetAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;

    ObjectType m_objectType{ObjectType::NOT_SET};
    bool m_objectTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
