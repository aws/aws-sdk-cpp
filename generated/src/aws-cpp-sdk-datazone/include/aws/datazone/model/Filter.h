/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A search filter in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_DATAZONE_API Filter();
    AWS_DATAZONE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline Filter& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline Filter& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>A search filter attribute in Amazon DataZone.</p>
     */
    inline Filter& WithAttribute(const char* value) { SetAttribute(value); return *this;}


    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A search filter value in Amazon DataZone.</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
