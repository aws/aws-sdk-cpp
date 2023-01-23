/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/AttributeKey.h>
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
   * <p>A range of attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectAttributeRange">AWS
   * API Reference</a></p>
   */
  class ObjectAttributeRange
  {
  public:
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange();
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline const AttributeKey& GetAttributeKey() const{ return m_attributeKey; }

    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }

    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline void SetAttributeKey(const AttributeKey& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = value; }

    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline void SetAttributeKey(AttributeKey&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::move(value); }

    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline ObjectAttributeRange& WithAttributeKey(const AttributeKey& value) { SetAttributeKey(value); return *this;}

    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline ObjectAttributeRange& WithAttributeKey(AttributeKey&& value) { SetAttributeKey(std::move(value)); return *this;}


    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline const TypedAttributeValueRange& GetRange() const{ return m_range; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline void SetRange(const TypedAttributeValueRange& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline void SetRange(TypedAttributeValueRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline ObjectAttributeRange& WithRange(const TypedAttributeValueRange& value) { SetRange(value); return *this;}

    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline ObjectAttributeRange& WithRange(TypedAttributeValueRange&& value) { SetRange(std::move(value)); return *this;}

  private:

    AttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet = false;

    TypedAttributeValueRange m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
