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
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange() = default;
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectAttributeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the attribute that the attribute range covers.</p>
     */
    inline const AttributeKey& GetAttributeKey() const { return m_attributeKey; }
    inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }
    template<typename AttributeKeyT = AttributeKey>
    void SetAttributeKey(AttributeKeyT&& value) { m_attributeKeyHasBeenSet = true; m_attributeKey = std::forward<AttributeKeyT>(value); }
    template<typename AttributeKeyT = AttributeKey>
    ObjectAttributeRange& WithAttributeKey(AttributeKeyT&& value) { SetAttributeKey(std::forward<AttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of attribute values being selected.</p>
     */
    inline const TypedAttributeValueRange& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = TypedAttributeValueRange>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = TypedAttributeValueRange>
    ObjectAttributeRange& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}
  private:

    AttributeKey m_attributeKey;
    bool m_attributeKeyHasBeenSet = false;

    TypedAttributeValueRange m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
