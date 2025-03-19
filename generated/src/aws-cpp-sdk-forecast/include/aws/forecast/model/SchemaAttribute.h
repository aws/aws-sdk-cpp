/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/AttributeType.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>An attribute of a schema, which defines a dataset field. A schema attribute
   * is required for every field in a dataset. The <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_Schema.html">Schema</a>
   * object contains an array of <code>SchemaAttribute</code> objects.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/SchemaAttribute">AWS
   * API Reference</a></p>
   */
  class SchemaAttribute
  {
  public:
    AWS_FORECASTSERVICE_API SchemaAttribute() = default;
    AWS_FORECASTSERVICE_API SchemaAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API SchemaAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset field.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    SchemaAttribute& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the field.</p> <p>For a related time series dataset, other
     * than date, item_id, and forecast dimensions attributes, all attributes should be
     * of numerical type (integer/float).</p>
     */
    inline AttributeType GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(AttributeType value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline SchemaAttribute& WithAttributeType(AttributeType value) { SetAttributeType(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    AttributeType m_attributeType{AttributeType::NOT_SET};
    bool m_attributeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
