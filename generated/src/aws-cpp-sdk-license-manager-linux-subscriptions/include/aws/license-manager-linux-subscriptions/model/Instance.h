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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID which owns the instance.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    Instance& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI ID used to launch the instance.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    Instance& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that you have two different license subscriptions for the same
     * software on your instance.</p>
     */
    inline const Aws::String& GetDualSubscription() const { return m_dualSubscription; }
    inline bool DualSubscriptionHasBeenSet() const { return m_dualSubscriptionHasBeenSet; }
    template<typename DualSubscriptionT = Aws::String>
    void SetDualSubscription(DualSubscriptionT&& value) { m_dualSubscriptionHasBeenSet = true; m_dualSubscription = std::forward<DualSubscriptionT>(value); }
    template<typename DualSubscriptionT = Aws::String>
    Instance& WithDualSubscription(DualSubscriptionT&& value) { SetDualSubscription(std::forward<DualSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID of the resource.</p>
     */
    inline const Aws::String& GetInstanceID() const { return m_instanceID; }
    inline bool InstanceIDHasBeenSet() const { return m_instanceIDHasBeenSet; }
    template<typename InstanceIDT = Aws::String>
    void SetInstanceID(InstanceIDT&& value) { m_instanceIDHasBeenSet = true; m_instanceID = std::forward<InstanceIDT>(value); }
    template<typename InstanceIDT = Aws::String>
    Instance& WithInstanceID(InstanceIDT&& value) { SetInstanceID(std::forward<InstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the resource.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Instance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in which the last discovery updated the instance details.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    Instance& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system software version that runs on your instance.</p>
     */
    inline const Aws::String& GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    template<typename OsVersionT = Aws::String>
    void SetOsVersion(OsVersionT&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::forward<OsVersionT>(value); }
    template<typename OsVersionT = Aws::String>
    Instance& WithOsVersion(OsVersionT&& value) { SetOsVersion(std::forward<OsVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i> .</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::Vector<Aws::String>>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::Vector<Aws::String>>
    Instance& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    template<typename ProductCodeT = Aws::String>
    Instance& AddProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode.emplace_back(std::forward<ProductCodeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region the instance is running in.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Instance& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that your instance uses a BYOL license subscription from a
     * third-party Linux subscription provider that you've registered with License
     * Manager.</p>
     */
    inline const Aws::String& GetRegisteredWithSubscriptionProvider() const { return m_registeredWithSubscriptionProvider; }
    inline bool RegisteredWithSubscriptionProviderHasBeenSet() const { return m_registeredWithSubscriptionProviderHasBeenSet; }
    template<typename RegisteredWithSubscriptionProviderT = Aws::String>
    void SetRegisteredWithSubscriptionProvider(RegisteredWithSubscriptionProviderT&& value) { m_registeredWithSubscriptionProviderHasBeenSet = true; m_registeredWithSubscriptionProvider = std::forward<RegisteredWithSubscriptionProviderT>(value); }
    template<typename RegisteredWithSubscriptionProviderT = Aws::String>
    Instance& WithRegisteredWithSubscriptionProvider(RegisteredWithSubscriptionProviderT&& value) { SetRegisteredWithSubscriptionProvider(std::forward<RegisteredWithSubscriptionProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Instance& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the license subscription that the instance uses.</p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    Instance& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you registered the third-party Linux subscription provider
     * for the subscription that the instance uses.</p>
     */
    inline const Aws::String& GetSubscriptionProviderCreateTime() const { return m_subscriptionProviderCreateTime; }
    inline bool SubscriptionProviderCreateTimeHasBeenSet() const { return m_subscriptionProviderCreateTimeHasBeenSet; }
    template<typename SubscriptionProviderCreateTimeT = Aws::String>
    void SetSubscriptionProviderCreateTime(SubscriptionProviderCreateTimeT&& value) { m_subscriptionProviderCreateTimeHasBeenSet = true; m_subscriptionProviderCreateTime = std::forward<SubscriptionProviderCreateTimeT>(value); }
    template<typename SubscriptionProviderCreateTimeT = Aws::String>
    Instance& WithSubscriptionProviderCreateTime(SubscriptionProviderCreateTimeT&& value) { SetSubscriptionProviderCreateTime(std::forward<SubscriptionProviderCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp from the last time that the instance synced with the registered
     * third-party Linux subscription provider.</p>
     */
    inline const Aws::String& GetSubscriptionProviderUpdateTime() const { return m_subscriptionProviderUpdateTime; }
    inline bool SubscriptionProviderUpdateTimeHasBeenSet() const { return m_subscriptionProviderUpdateTimeHasBeenSet; }
    template<typename SubscriptionProviderUpdateTimeT = Aws::String>
    void SetSubscriptionProviderUpdateTime(SubscriptionProviderUpdateTimeT&& value) { m_subscriptionProviderUpdateTimeHasBeenSet = true; m_subscriptionProviderUpdateTime = std::forward<SubscriptionProviderUpdateTimeT>(value); }
    template<typename SubscriptionProviderUpdateTimeT = Aws::String>
    Instance& WithSubscriptionProviderUpdateTime(SubscriptionProviderUpdateTimeT&& value) { SetSubscriptionProviderUpdateTime(std::forward<SubscriptionProviderUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage operation of the instance. For more information, see For more
     * information, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/linux-subscriptions-usage-operation.html">Usage
     * operation values</a> in the <i>License Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    Instance& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_dualSubscription;
    bool m_dualSubscriptionHasBeenSet = false;

    Aws::String m_instanceID;
    bool m_instanceIDHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_registeredWithSubscriptionProvider;
    bool m_registeredWithSubscriptionProviderHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_subscriptionProviderCreateTime;
    bool m_subscriptionProviderCreateTimeHasBeenSet = false;

    Aws::String m_subscriptionProviderUpdateTime;
    bool m_subscriptionProviderUpdateTimeHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
