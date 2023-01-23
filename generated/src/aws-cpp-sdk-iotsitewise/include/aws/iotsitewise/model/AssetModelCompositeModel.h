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
    inline AssetModelCompositeModel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetModelCompositeModel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetModelCompositeModel& WithName(const char* value) { SetName(value); return *this;}


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
    inline AssetModelCompositeModel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetModelCompositeModel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetModelCompositeModel& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline AssetModelCompositeModel& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetModelCompositeModel& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetModelCompositeModel& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline void SetProperties(const Aws::Vector<AssetModelProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline void SetProperties(Aws::Vector<AssetModelProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModel& WithProperties(const Aws::Vector<AssetModelProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModel& WithProperties(Aws::Vector<AssetModelProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModel& AddProperties(const AssetModelProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The asset property definitions for this composite model.</p>
     */
    inline AssetModelCompositeModel& AddProperties(AssetModelProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline AssetModelCompositeModel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline AssetModelCompositeModel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the asset model composite model. </p>
     */
    inline AssetModelCompositeModel& WithId(const char* value) { SetId(value); return *this;}

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
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
