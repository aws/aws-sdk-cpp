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
    AWS_IOT_API CreateBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = value; }

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::move(value); }

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName.assign(value); }

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name you wish to give to the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}


    /**
     * <p>The properties of the billing group.</p>
     */
    inline const BillingGroupProperties& GetBillingGroupProperties() const{ return m_billingGroupProperties; }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline bool BillingGroupPropertiesHasBeenSet() const { return m_billingGroupPropertiesHasBeenSet; }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline void SetBillingGroupProperties(const BillingGroupProperties& value) { m_billingGroupPropertiesHasBeenSet = true; m_billingGroupProperties = value; }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline void SetBillingGroupProperties(BillingGroupProperties&& value) { m_billingGroupPropertiesHasBeenSet = true; m_billingGroupProperties = std::move(value); }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithBillingGroupProperties(const BillingGroupProperties& value) { SetBillingGroupProperties(value); return *this;}

    /**
     * <p>The properties of the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithBillingGroupProperties(BillingGroupProperties&& value) { SetBillingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline CreateBillingGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline CreateBillingGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the billing group.</p>
     */
    inline CreateBillingGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
