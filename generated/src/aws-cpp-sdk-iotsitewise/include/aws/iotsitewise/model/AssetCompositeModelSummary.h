/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetCompositeModelPathSegment.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of the composite model for a specific asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetCompositeModelSummary">AWS
   * API Reference</a></p>
   */
  class AssetCompositeModelSummary
  {
  public:
    AWS_IOTSITEWISE_API AssetCompositeModelSummary();
    AWS_IOTSITEWISE_API AssetCompositeModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetCompositeModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline AssetCompositeModelSummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline AssetCompositeModelSummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>An external ID to assign to the asset model.</p> <p>If the composite model is
     * a derived composite model, or one nested inside a component model, you can only
     * set the external ID using <code>UpdateAssetModelCompositeModel</code> and
     * specifying the derived ID of the model or property from the created model it's a
     * part of.</p>
     */
    inline AssetCompositeModelSummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetCompositeModelSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetCompositeModelSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetCompositeModelSummary& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the composite model that this summary describes.</p>
     */
    inline AssetCompositeModelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline const Aws::Vector<AssetCompositeModelPathSegment>& GetPath() const{ return m_path; }

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline void SetPath(const Aws::Vector<AssetCompositeModelPathSegment>& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline void SetPath(Aws::Vector<AssetCompositeModelPathSegment>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline AssetCompositeModelSummary& WithPath(const Aws::Vector<AssetCompositeModelPathSegment>& value) { SetPath(value); return *this;}

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline AssetCompositeModelSummary& WithPath(Aws::Vector<AssetCompositeModelPathSegment>&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline AssetCompositeModelSummary& AddPath(const AssetCompositeModelPathSegment& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }

    /**
     * <p>The path that includes all the components of the asset model for the
     * asset.</p>
     */
    inline AssetCompositeModelSummary& AddPath(AssetCompositeModelPathSegment&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AssetCompositeModelPathSegment> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
