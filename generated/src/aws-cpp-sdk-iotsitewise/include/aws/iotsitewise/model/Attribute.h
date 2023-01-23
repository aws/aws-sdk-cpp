/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains an asset attribute property. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html#attributes">Attributes</a>
   * in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Attribute">AWS
   * API Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_IOTSITEWISE_API Attribute();
    AWS_IOTSITEWISE_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Attribute& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Attribute& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the asset model property attribute. All assets that you
     * create from the asset model contain this attribute value. You can update an
     * attribute's value after you create an asset. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-attribute-values.html">Updating
     * attribute values</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Attribute& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
