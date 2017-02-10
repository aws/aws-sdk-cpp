/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/AttributeKey.h>
#include <aws/clouddirectory/model/TypedAttributeValueRange.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A range of attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/ObjectAttributeRange">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectAttributeRange
  {
  public:
    ObjectAttributeRange();
    ObjectAttributeRange(const Aws::Utils::Json::JsonValue& jsonValue);
    ObjectAttributeRange& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key of the attribute the attribute range covers.</p>
     */
    inline const AttributeKey& GetAttributeKey() const{ return m_attributeKey; }

    /**
     * <p>The key of the attribute the attribute range covers.</p>
     */
    inline void SetAttributeKey(const AttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }

    /**
     * <p>The key of the attribute the attribute range covers.</p>
     */
    inline void SetAttributeKey(AttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }

    /**
     * <p>The key of the attribute the attribute range covers.</p>
     */
    inline ObjectAttributeRange& WithAttributeKey(const AttributeKey& value) { SetAttributeKey(value); return *this;}

    /**
     * <p>The key of the attribute the attribute range covers.</p>
     */
    inline ObjectAttributeRange& WithAttributeKey(AttributeKey&& value) { SetAttributeKey(value); return *this;}

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline const TypedAttributeValueRange& GetRange() const{ return m_range; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline void SetRange(const TypedAttributeValueRange& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline void SetRange(TypedAttributeValueRange&& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline ObjectAttributeRange& WithRange(const TypedAttributeValueRange& value) { SetRange(value); return *this;}

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline ObjectAttributeRange& WithRange(TypedAttributeValueRange&& value) { SetRange(value); return *this;}

  private:
    AttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet;
    TypedAttributeValueRange m_range;
    bool m_rangeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
