/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelPathSegment.h>
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
   * <p>Contains a summary of the composite model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelCompositeModelSummary">AWS
   * API Reference</a></p>
   */
  class AssetModelCompositeModelSummary
  {
  public:
    AWS_IOTSITEWISE_API AssetModelCompositeModelSummary();
    AWS_IOTSITEWISE_API AssetModelCompositeModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelCompositeModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelSummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelSummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID of a composite model on this asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelSummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline AssetModelCompositeModelSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelCompositeModelSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelCompositeModelSummary& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the the composite model that this summary describes..</p>
     */
    inline AssetModelCompositeModelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelPathSegment>& GetPath() const{ return m_path; }

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline void SetPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline void SetPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline AssetModelCompositeModelSummary& WithPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { SetPath(value); return *this;}

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline AssetModelCompositeModelSummary& WithPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline AssetModelCompositeModelSummary& AddPath(const AssetModelCompositeModelPathSegment& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }

    /**
     * <p>The path that includes all the pieces that make up the composite model.</p>
     */
    inline AssetModelCompositeModelSummary& AddPath(AssetModelCompositeModelPathSegment&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }

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

    Aws::Vector<AssetModelCompositeModelPathSegment> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
