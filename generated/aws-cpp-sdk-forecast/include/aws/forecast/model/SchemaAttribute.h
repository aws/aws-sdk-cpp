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
   * is required for every field in a dataset. The <a>Schema</a> object contains an
   * array of <code>SchemaAttribute</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/SchemaAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API SchemaAttribute
  {
  public:
    SchemaAttribute();
    SchemaAttribute(Aws::Utils::Json::JsonView jsonValue);
    SchemaAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset field.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the dataset field.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the dataset field.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the dataset field.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the dataset field.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the dataset field.</p>
     */
    inline SchemaAttribute& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the dataset field.</p>
     */
    inline SchemaAttribute& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset field.</p>
     */
    inline SchemaAttribute& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The data type of the field.</p>
     */
    inline const AttributeType& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The data type of the field.</p>
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The data type of the field.</p>
     */
    inline void SetAttributeType(const AttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The data type of the field.</p>
     */
    inline void SetAttributeType(AttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The data type of the field.</p>
     */
    inline SchemaAttribute& WithAttributeType(const AttributeType& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The data type of the field.</p>
     */
    inline SchemaAttribute& WithAttributeType(AttributeType&& value) { SetAttributeType(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    AttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
