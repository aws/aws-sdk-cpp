/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelProperty.h>
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
   * <p>Contains information about a composite model in an asset model. This object
   * contains the asset property definitions that you define in the composite
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelCompositeModel">AWS
   * API Reference</a></p>
   */
  class AssetModelCompositeModel
  {
  public:
    AWS_IOTSITEWISE_API AssetModelCompositeModel();
    AWS_IOTSITEWISE_API AssetModelCompositeModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelCompositeModel& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AssetModelCompositeModel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetModelCompositeModel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetModelCompositeModel& WithName(const char* value) { SetName(value); return *this;}
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
    inline AssetModelCompositeModel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssetModelCompositeModel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssetModelCompositeModel& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline AssetModelCompositeModel& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AssetModelCompositeModel& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AssetModelCompositeModel& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Vector<AssetModelProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Vector<AssetModelProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline AssetModelCompositeModel& WithProperties(const Aws::Vector<AssetModelProperty>& value) { SetProperties(value); return *this;}
    inline AssetModelCompositeModel& WithProperties(Aws::Vector<AssetModelProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline AssetModelCompositeModel& AddProperties(const AssetModelProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    inline AssetModelCompositeModel& AddProperties(AssetModelProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetModelCompositeModel& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetModelCompositeModel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetModelCompositeModel& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset model composite model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssetModelCompositeModel& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssetModelCompositeModel& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssetModelCompositeModel& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AssetModelProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
