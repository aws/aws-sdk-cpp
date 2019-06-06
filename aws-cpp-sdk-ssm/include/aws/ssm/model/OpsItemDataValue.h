/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsItemDataType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An object that defines the value of the key and its type in the
   * OperationalData map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemDataValue">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API OpsItemDataValue
  {
  public:
    OpsItemDataValue();
    OpsItemDataValue(Aws::Utils::Json::JsonView jsonValue);
    OpsItemDataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline const OpsItemDataType& GetType() const{ return m_type; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline void SetType(const OpsItemDataType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline void SetType(OpsItemDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline OpsItemDataValue& WithType(const OpsItemDataType& value) { SetType(value); return *this;}

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline OpsItemDataValue& WithType(OpsItemDataType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    OpsItemDataType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
