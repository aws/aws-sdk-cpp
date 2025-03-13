/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ObjectAttribute.h>
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
   * <p>A specific event dimension to be assessed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventTriggerDimension">AWS
   * API Reference</a></p>
   */
  class EventTriggerDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API EventTriggerDimension() = default;
    AWS_CUSTOMERPROFILES_API EventTriggerDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of object attributes to be evaluated.</p>
     */
    inline const Aws::Vector<ObjectAttribute>& GetObjectAttributes() const { return m_objectAttributes; }
    inline bool ObjectAttributesHasBeenSet() const { return m_objectAttributesHasBeenSet; }
    template<typename ObjectAttributesT = Aws::Vector<ObjectAttribute>>
    void SetObjectAttributes(ObjectAttributesT&& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes = std::forward<ObjectAttributesT>(value); }
    template<typename ObjectAttributesT = Aws::Vector<ObjectAttribute>>
    EventTriggerDimension& WithObjectAttributes(ObjectAttributesT&& value) { SetObjectAttributes(std::forward<ObjectAttributesT>(value)); return *this;}
    template<typename ObjectAttributesT = ObjectAttribute>
    EventTriggerDimension& AddObjectAttributes(ObjectAttributesT&& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes.emplace_back(std::forward<ObjectAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ObjectAttribute> m_objectAttributes;
    bool m_objectAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
