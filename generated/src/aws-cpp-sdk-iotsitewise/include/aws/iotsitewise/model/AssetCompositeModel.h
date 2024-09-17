/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetProperty.h>
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
   * <p>Contains information about a composite model in an asset. This object
   * contains the asset's properties that you define in the composite
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetCompositeModel">AWS
   * API Reference</a></p>
   */
  class AssetCompositeModel
  {
  public:
    AWS_IOTSITEWISE_API AssetCompositeModel();
    AWS_IOTSITEWISE_API AssetCompositeModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetCompositeModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the composite model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetCompositeModel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetCompositeModel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetCompositeModel& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the composite model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssetCompositeModel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssetCompositeModel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssetCompositeModel& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AssetCompositeModel& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AssetCompositeModel& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AssetCompositeModel& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Vector<AssetProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Vector<AssetProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline AssetCompositeModel& WithProperties(const Aws::Vector<AssetProperty>& value) { SetProperties(value); return *this;}
    inline AssetCompositeModel& WithProperties(Aws::Vector<AssetProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline AssetCompositeModel& AddProperties(const AssetProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    inline AssetCompositeModel& AddProperties(AssetProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the asset composite model. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetCompositeModel& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetCompositeModel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetCompositeModel& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset composite model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssetCompositeModel& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssetCompositeModel& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssetCompositeModel& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AssetProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
