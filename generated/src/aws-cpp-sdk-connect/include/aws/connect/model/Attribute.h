/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/InstanceAttributeType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A toggle for an individual feature at the instance level.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Attribute">AWS
   * API Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_CONNECT_API Attribute();
    AWS_CONNECT_API Attribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of attribute.</p>
     */
    inline const InstanceAttributeType& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const InstanceAttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(InstanceAttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline Attribute& WithAttributeType(const InstanceAttributeType& value) { SetAttributeType(value); return *this;}
    inline Attribute& WithAttributeType(InstanceAttributeType&& value) { SetAttributeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Attribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    InstanceAttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
