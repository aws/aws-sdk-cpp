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
    AWS_CUSTOMERPROFILES_API EventTriggerDimension();
    AWS_CUSTOMERPROFILES_API EventTriggerDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of object attributes to be evaluated.</p>
     */
    inline const Aws::Vector<ObjectAttribute>& GetObjectAttributes() const{ return m_objectAttributes; }
    inline bool ObjectAttributesHasBeenSet() const { return m_objectAttributesHasBeenSet; }
    inline void SetObjectAttributes(const Aws::Vector<ObjectAttribute>& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes = value; }
    inline void SetObjectAttributes(Aws::Vector<ObjectAttribute>&& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes = std::move(value); }
    inline EventTriggerDimension& WithObjectAttributes(const Aws::Vector<ObjectAttribute>& value) { SetObjectAttributes(value); return *this;}
    inline EventTriggerDimension& WithObjectAttributes(Aws::Vector<ObjectAttribute>&& value) { SetObjectAttributes(std::move(value)); return *this;}
    inline EventTriggerDimension& AddObjectAttributes(const ObjectAttribute& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes.push_back(value); return *this; }
    inline EventTriggerDimension& AddObjectAttributes(ObjectAttribute&& value) { m_objectAttributesHasBeenSet = true; m_objectAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ObjectAttribute> m_objectAttributes;
    bool m_objectAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
