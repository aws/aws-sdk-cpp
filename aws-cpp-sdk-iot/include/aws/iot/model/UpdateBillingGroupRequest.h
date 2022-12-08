/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BillingGroupProperties.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateBillingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBillingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = value; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::move(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName.assign(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline UpdateBillingGroupRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline UpdateBillingGroupRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline UpdateBillingGroupRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}


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
    inline UpdateBillingGroupRequest& WithBillingGroupProperties(const BillingGroupProperties& value) { SetBillingGroupProperties(value); return *this;}

    /**
     * <p>The properties of the billing group.</p>
     */
    inline UpdateBillingGroupRequest& WithBillingGroupProperties(BillingGroupProperties&& value) { SetBillingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>The expected version of the billing group. If the version of the billing
     * group does not match the expected version specified in the request, the
     * <code>UpdateBillingGroup</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the billing group. If the version of the billing
     * group does not match the expected version specified in the request, the
     * <code>UpdateBillingGroup</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the billing group. If the version of the billing
     * group does not match the expected version specified in the request, the
     * <code>UpdateBillingGroup</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the billing group. If the version of the billing
     * group does not match the expected version specified in the request, the
     * <code>UpdateBillingGroup</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline UpdateBillingGroupRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    BillingGroupProperties m_billingGroupProperties;
    bool m_billingGroupPropertiesHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
