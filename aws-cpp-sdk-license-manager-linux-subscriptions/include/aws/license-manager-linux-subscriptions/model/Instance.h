/**
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


    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline Instance& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline Instance& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}

    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline Instance& WithAccountID(const char* value) { SetAccountID(value); return *this;}


    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline Instance& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline Instance& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline Instance& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The instance ID of the resource.</p>
     */
    inline const Aws::String& GetInstanceID() const{ return m_instanceID; }

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline bool InstanceIDHasBeenSet() const { return m_instanceIDHasBeenSet; }

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline void SetInstanceID(const Aws::String& value) { m_instanceIDHasBeenSet = true; m_instanceID = value; }

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline void SetInstanceID(Aws::String&& value) { m_instanceIDHasBeenSet = true; m_instanceID = std::move(value); }

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline void SetInstanceID(const char* value) { m_instanceIDHasBeenSet = true; m_instanceID.assign(value); }

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline Instance& WithInstanceID(const Aws::String& value) { SetInstanceID(value); return *this;}

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline Instance& WithInstanceID(Aws::String&& value) { SetInstanceID(std::move(value)); return *this;}

    /**
     * <p>The instance ID of the resource.</p>
     */
    inline Instance& WithInstanceID(const char* value) { SetInstanceID(value); return *this;}


    /**
     * <p>The instance type of the resource.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the resource.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the resource.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the resource.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the resource.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the resource.</p>
     */
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the resource.</p>
     */
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the resource.</p>
     */
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline Instance& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline Instance& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline Instance& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline void SetProductCode(const Aws::Vector<Aws::String>& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline void SetProductCode(Aws::Vector<Aws::String>&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline Instance& WithProductCode(const Aws::Vector<Aws::String>& value) { SetProductCode(value); return *this;}

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline Instance& WithProductCode(Aws::Vector<Aws::String>&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline Instance& AddProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode.push_back(value); return *this; }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline Instance& AddProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode.push_back(std::move(value)); return *this; }

    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline Instance& AddProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.push_back(value); return *this; }


    /**
     * <p>The Region the instance is running in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline Instance& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline Instance& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region the instance is running in.</p>
     */
    inline Instance& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The status of the instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the instance.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the instance.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the instance.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the instance.</p>
     */
    inline Instance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the instance.</p>
     */
    inline Instance& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the instance.</p>
     */
    inline Instance& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline Instance& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline Instance& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription being used by the instance.</p>
     */
    inline Instance& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}

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
