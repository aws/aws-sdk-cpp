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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Identifies the attribute name and value for a typed link.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttributeNameAndValue">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API AttributeNameAndValue
  {
  public:
    AttributeNameAndValue();
    AttributeNameAndValue(Aws::Utils::Json::JsonView jsonValue);
    AttributeNameAndValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline AttributeNameAndValue& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline AttributeNameAndValue& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute name of the typed link.</p>
     */
    inline AttributeNameAndValue& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value for the typed link.</p>
     */
    inline const TypedAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value for the typed link.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the typed link.</p>
     */
    inline void SetValue(const TypedAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the typed link.</p>
     */
    inline void SetValue(TypedAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the typed link.</p>
     */
    inline AttributeNameAndValue& WithValue(const TypedAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the typed link.</p>
     */
    inline AttributeNameAndValue& WithValue(TypedAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    TypedAttributeValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
