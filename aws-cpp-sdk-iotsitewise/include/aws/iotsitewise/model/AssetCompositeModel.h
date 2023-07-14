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
  class AWS_IOTSITEWISE_API AssetCompositeModel
  {
  public:
    AssetCompositeModel();
    AssetCompositeModel(Aws::Utils::Json::JsonView jsonValue);
    AssetCompositeModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AssetCompositeModel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetCompositeModel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the composite model.</p>
     */
    inline AssetCompositeModel& WithName(const char* value) { SetName(value); return *this;}


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
    inline AssetCompositeModel& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetCompositeModel& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the composite model.</p>
     */
    inline AssetCompositeModel& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline AssetCompositeModel& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetCompositeModel& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the composite model. For alarm composite models, this type is
     * <code>AWS/ALARM</code>.</p>
     */
    inline AssetCompositeModel& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline const Aws::Vector<AssetProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline void SetProperties(const Aws::Vector<AssetProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline void SetProperties(Aws::Vector<AssetProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline AssetCompositeModel& WithProperties(const Aws::Vector<AssetProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline AssetCompositeModel& WithProperties(Aws::Vector<AssetProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline AssetCompositeModel& AddProperties(const AssetProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The asset properties that this composite model defines.</p>
     */
    inline AssetCompositeModel& AddProperties(AssetProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<AssetProperty> m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
