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
#include <aws/clouddirectory/model/TypedAttributeValueRange.h>
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
   * <p>Identifies the range of attributes that are used by a specified
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkAttributeRange">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API TypedLinkAttributeRange
  {
  public:
    TypedLinkAttributeRange();
    TypedLinkAttributeRange(Aws::Utils::Json::JsonView jsonValue);
    TypedLinkAttributeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeRange& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeRange& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeRange& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline const TypedAttributeValueRange& GetRange() const{ return m_range; }

    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline void SetRange(const TypedAttributeValueRange& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline void SetRange(TypedAttributeValueRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline TypedLinkAttributeRange& WithRange(const TypedAttributeValueRange& value) { SetRange(value); return *this;}

    /**
     * <p>The range of attribute values that are being selected.</p>
     */
    inline TypedLinkAttributeRange& WithRange(TypedAttributeValueRange&& value) { SetRange(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    TypedAttributeValueRange m_range;
    bool m_rangeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
