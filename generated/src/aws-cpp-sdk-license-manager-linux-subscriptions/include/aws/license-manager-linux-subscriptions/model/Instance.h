﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>Details discovered information about a running instance using Linux
   * subscriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline Instance& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline Instance& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline Instance& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }
    inline Instance& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline Instance& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline Instance& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID of the resource.</p>
     */
    inline const Aws::String& GetInstanceID() const{ return m_instanceID; }
    inline bool InstanceIDHasBeenSet() const { return m_instanceIDHasBeenSet; }
    inline void SetInstanceID(const Aws::String& value) { m_instanceIDHasBeenSet = true; m_instanceID = value; }
    inline void SetInstanceID(Aws::String&& value) { m_instanceIDHasBeenSet = true; m_instanceID = std::move(value); }
    inline void SetInstanceID(const char* value) { m_instanceIDHasBeenSet = true; m_instanceID.assign(value); }
    inline Instance& WithInstanceID(const Aws::String& value) { SetInstanceID(value); return *this;}
    inline Instance& WithInstanceID(Aws::String&& value) { SetInstanceID(std::move(value)); return *this;}
    inline Instance& WithInstanceID(const char* value) { SetInstanceID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the resource.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }
    inline Instance& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}
    inline Instance& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    inline Instance& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCode() const{ return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    inline void SetProductCode(const Aws::Vector<Aws::String>& value) { m_productCodeHasBeenSet = true; m_productCode = value; }
    inline void SetProductCode(Aws::Vector<Aws::String>&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }
    inline Instance& WithProductCode(const Aws::Vector<Aws::String>& value) { SetProductCode(value); return *this;}
    inline Instance& WithProductCode(Aws::Vector<Aws::String>&& value) { SetProductCode(std::move(value)); return *this;}
    inline Instance& AddProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode.push_back(value); return *this; }
    inline Instance& AddProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode.push_back(std::move(value)); return *this; }
    inline Instance& AddProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region the instance is running in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Instance& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Instance& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Instance& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Instance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Instance& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Instance& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }
    inline Instance& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}
    inline Instance& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}
    inline Instance& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }
    inline Instance& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}
    inline Instance& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}
    inline Instance& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_instanceID;
    bool m_instanceIDHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
