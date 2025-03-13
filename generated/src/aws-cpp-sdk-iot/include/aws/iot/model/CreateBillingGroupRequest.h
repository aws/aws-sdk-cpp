/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BillingGroupProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateBillingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateBillingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    CreateBillingGroupRequest& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the billing group.</p>
     */
    inline const BillingGroupProperties& GetBillingGroupProperties() const { return m_billingGroupProperties; }
    inline bool BillingGroupPropertiesHasBeenSet() const { return m_billingGroupPropertiesHasBeenSet; }
    template<typename BillingGroupPropertiesT = BillingGroupProperties>
    void SetBillingGroupProperties(BillingGroupPropertiesT&& value) { m_billingGroupPropertiesHasBeenSet = true; m_billingGroupProperties = std::forward<BillingGroupPropertiesT>(value); }
    template<typename BillingGroupPropertiesT = BillingGroupProperties>
    CreateBillingGroupRequest& WithBillingGroupProperties(BillingGroupPropertiesT&& value) { SetBillingGroupProperties(std::forward<BillingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateBillingGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateBillingGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    BillingGroupProperties m_billingGroupProperties;
    bool m_billingGroupPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
