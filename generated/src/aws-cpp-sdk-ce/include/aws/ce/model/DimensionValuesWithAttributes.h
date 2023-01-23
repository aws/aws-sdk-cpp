/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The metadata of a specific type that you can use to filter and group your
   * results. You can use <code>GetDimensionValues</code> to find specific
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DimensionValuesWithAttributes">AWS
   * API Reference</a></p>
   */
  class DimensionValuesWithAttributes
  {
  public:
    AWS_COSTEXPLORER_API DimensionValuesWithAttributes();
    AWS_COSTEXPLORER_API DimensionValuesWithAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DimensionValuesWithAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline DimensionValuesWithAttributes& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline DimensionValuesWithAttributes& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a dimension with a specific attribute.</p>
     */
    inline DimensionValuesWithAttributes& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline DimensionValuesWithAttributes& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
