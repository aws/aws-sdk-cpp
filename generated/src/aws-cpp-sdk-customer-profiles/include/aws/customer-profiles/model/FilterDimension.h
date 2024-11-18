/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/FilterAttributeDimension.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Contains the map of attribute names to attribute dimensions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/FilterDimension">AWS
   * API Reference</a></p>
   */
  class FilterDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API FilterDimension();
    AWS_CUSTOMERPROFILES_API FilterDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FilterDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Is the attribute within the FilterDimension map</p>
     */
    inline const Aws::Map<Aws::String, FilterAttributeDimension>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, FilterAttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, FilterAttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline FilterDimension& WithAttributes(const Aws::Map<Aws::String, FilterAttributeDimension>& value) { SetAttributes(value); return *this;}
    inline FilterDimension& WithAttributes(Aws::Map<Aws::String, FilterAttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}
    inline FilterDimension& AddAttributes(const Aws::String& key, const FilterAttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline FilterDimension& AddAttributes(Aws::String&& key, const FilterAttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline FilterDimension& AddAttributes(const Aws::String& key, FilterAttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline FilterDimension& AddAttributes(Aws::String&& key, FilterAttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline FilterDimension& AddAttributes(const char* key, FilterAttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline FilterDimension& AddAttributes(const char* key, const FilterAttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, FilterAttributeDimension> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
