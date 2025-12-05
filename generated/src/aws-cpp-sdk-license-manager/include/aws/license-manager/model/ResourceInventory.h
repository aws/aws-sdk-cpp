/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>Details about a resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ResourceInventory">AWS
 * API Reference</a></p>
 */
class ResourceInventory {
 public:
  AWS_LICENSEMANAGER_API ResourceInventory() = default;
  AWS_LICENSEMANAGER_API ResourceInventory(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API ResourceInventory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ID of the resource.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ResourceInventory& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of resource.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ResourceInventory& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ResourceInventory& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Platform of the resource.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  ResourceInventory& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Platform version of the resource in the inventory.</p>
   */
  inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
  inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
  template <typename PlatformVersionT = Aws::String>
  void SetPlatformVersion(PlatformVersionT&& value) {
    m_platformVersionHasBeenSet = true;
    m_platformVersion = std::forward<PlatformVersionT>(value);
  }
  template <typename PlatformVersionT = Aws::String>
  ResourceInventory& WithPlatformVersion(PlatformVersionT&& value) {
    SetPlatformVersion(std::forward<PlatformVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the account that owns the resource.</p>
   */
  inline const Aws::String& GetResourceOwningAccountId() const { return m_resourceOwningAccountId; }
  inline bool ResourceOwningAccountIdHasBeenSet() const { return m_resourceOwningAccountIdHasBeenSet; }
  template <typename ResourceOwningAccountIdT = Aws::String>
  void SetResourceOwningAccountId(ResourceOwningAccountIdT&& value) {
    m_resourceOwningAccountIdHasBeenSet = true;
    m_resourceOwningAccountId = std::forward<ResourceOwningAccountIdT>(value);
  }
  template <typename ResourceOwningAccountIdT = Aws::String>
  ResourceInventory& WithResourceOwningAccountId(ResourceOwningAccountIdT&& value) {
    SetResourceOwningAccountId(std::forward<ResourceOwningAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of Marketplace product codes associated with the resource.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMarketplaceProductCodes() const { return m_marketplaceProductCodes; }
  inline bool MarketplaceProductCodesHasBeenSet() const { return m_marketplaceProductCodesHasBeenSet; }
  template <typename MarketplaceProductCodesT = Aws::Vector<Aws::String>>
  void SetMarketplaceProductCodes(MarketplaceProductCodesT&& value) {
    m_marketplaceProductCodesHasBeenSet = true;
    m_marketplaceProductCodes = std::forward<MarketplaceProductCodesT>(value);
  }
  template <typename MarketplaceProductCodesT = Aws::Vector<Aws::String>>
  ResourceInventory& WithMarketplaceProductCodes(MarketplaceProductCodesT&& value) {
    SetMarketplaceProductCodes(std::forward<MarketplaceProductCodesT>(value));
    return *this;
  }
  template <typename MarketplaceProductCodesT = Aws::String>
  ResourceInventory& AddMarketplaceProductCodes(MarketplaceProductCodesT&& value) {
    m_marketplaceProductCodesHasBeenSet = true;
    m_marketplaceProductCodes.emplace_back(std::forward<MarketplaceProductCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Usage operation value that corresponds to the license type for billing
   * purposes.</p>
   */
  inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
  inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
  template <typename UsageOperationT = Aws::String>
  void SetUsageOperation(UsageOperationT&& value) {
    m_usageOperationHasBeenSet = true;
    m_usageOperation = std::forward<UsageOperationT>(value);
  }
  template <typename UsageOperationT = Aws::String>
  ResourceInventory& WithUsageOperation(UsageOperationT&& value) {
    SetUsageOperation(std::forward<UsageOperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Machine Image (AMI) ID associated with the resource.</p>
   */
  inline const Aws::String& GetAmiId() const { return m_amiId; }
  inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
  template <typename AmiIdT = Aws::String>
  void SetAmiId(AmiIdT&& value) {
    m_amiIdHasBeenSet = true;
    m_amiId = std::forward<AmiIdT>(value);
  }
  template <typename AmiIdT = Aws::String>
  ResourceInventory& WithAmiId(AmiIdT&& value) {
    SetAmiId(std::forward<AmiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Dedicated Host ID where the resource is running.</p>
   */
  inline const Aws::String& GetHostId() const { return m_hostId; }
  inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
  template <typename HostIdT = Aws::String>
  void SetHostId(HostIdT&& value) {
    m_hostIdHasBeenSet = true;
    m_hostId = std::forward<HostIdT>(value);
  }
  template <typename HostIdT = Aws::String>
  ResourceInventory& WithHostId(HostIdT&& value) {
    SetHostId(std::forward<HostIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Region where the resource is located.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ResourceInventory& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>EC2 instance type of the resource.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  ResourceInventory& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  ResourceType m_resourceType{ResourceType::NOT_SET};

  Aws::String m_resourceArn;

  Aws::String m_platform;

  Aws::String m_platformVersion;

  Aws::String m_resourceOwningAccountId;

  Aws::Vector<Aws::String> m_marketplaceProductCodes;

  Aws::String m_usageOperation;

  Aws::String m_amiId;

  Aws::String m_hostId;

  Aws::String m_region;

  Aws::String m_instanceType;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_platformVersionHasBeenSet = false;
  bool m_resourceOwningAccountIdHasBeenSet = false;
  bool m_marketplaceProductCodesHasBeenSet = false;
  bool m_usageOperationHasBeenSet = false;
  bool m_amiIdHasBeenSet = false;
  bool m_hostIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
