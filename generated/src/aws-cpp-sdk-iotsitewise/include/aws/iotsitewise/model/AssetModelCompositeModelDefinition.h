/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelPropertyDefinition.h>
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
   * <p>Contains a composite model definition in an asset model. This composite model
   * definition is applied to all assets created from the asset model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelCompositeModelDefinition">AWS
   * API Reference</a></p>
   */
  class AssetModelCompositeModelDefinition
  {
  public:
    AWS_IOTSITEWISE_API AssetModelCompositeModelDefinition();
    AWS_IOTSITEWISE_API AssetModelCompositeModelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelCompositeModelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the composite model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the composite model.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the composite model.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the composite model.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the composite model.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the composite model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the composite model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the composite model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the composite model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the composite model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetProperties() const{ return m_properties; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline void SetProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline void SetProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { SetProperties(value); return *this;}

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& WithProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& AddProperties(const AssetModelPropertyDefinition& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModelDefinition& AddProperties(AssetModelPropertyDefinition&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline AssetModelCompositeModelDefinition& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline AssetModelCompositeModelDefinition& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID to assign to the composite model, if desired. IoT SiteWise
     * automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p>
     */
    inline AssetModelCompositeModelDefinition& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>An external ID to assign to the composite model. The external ID must be
     * unique among composite models within this asset model. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssetModelCompositeModelDefinition& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AssetModelPropertyDefinition> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
