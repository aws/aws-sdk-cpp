/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/MarketplaceInformation.h>
#include <aws/eks/model/AddonVersionInfo.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Information about an add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonInfo">AWS API
   * Reference</a></p>
   */
  class AddonInfo
  {
  public:
    AWS_EKS_API AddonInfo();
    AWS_EKS_API AddonInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline AddonInfo& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline AddonInfo& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline AddonInfo& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the add-on.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AddonInfo& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AddonInfo& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AddonInfo& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline const Aws::Vector<AddonVersionInfo>& GetAddonVersions() const{ return m_addonVersions; }
    inline bool AddonVersionsHasBeenSet() const { return m_addonVersionsHasBeenSet; }
    inline void SetAddonVersions(const Aws::Vector<AddonVersionInfo>& value) { m_addonVersionsHasBeenSet = true; m_addonVersions = value; }
    inline void SetAddonVersions(Aws::Vector<AddonVersionInfo>&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions = std::move(value); }
    inline AddonInfo& WithAddonVersions(const Aws::Vector<AddonVersionInfo>& value) { SetAddonVersions(value); return *this;}
    inline AddonInfo& WithAddonVersions(Aws::Vector<AddonVersionInfo>&& value) { SetAddonVersions(std::move(value)); return *this;}
    inline AddonInfo& AddAddonVersions(const AddonVersionInfo& value) { m_addonVersionsHasBeenSet = true; m_addonVersions.push_back(value); return *this; }
    inline AddonInfo& AddAddonVersions(AddonVersionInfo&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The publisher of the add-on.</p>
     */
    inline const Aws::String& GetPublisher() const{ return m_publisher; }
    inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
    inline void SetPublisher(const Aws::String& value) { m_publisherHasBeenSet = true; m_publisher = value; }
    inline void SetPublisher(Aws::String&& value) { m_publisherHasBeenSet = true; m_publisher = std::move(value); }
    inline void SetPublisher(const char* value) { m_publisherHasBeenSet = true; m_publisher.assign(value); }
    inline AddonInfo& WithPublisher(const Aws::String& value) { SetPublisher(value); return *this;}
    inline AddonInfo& WithPublisher(Aws::String&& value) { SetPublisher(std::move(value)); return *this;}
    inline AddonInfo& WithPublisher(const char* value) { SetPublisher(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the add-on.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline AddonInfo& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline AddonInfo& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline AddonInfo& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the add-on from the Amazon Web Services Marketplace.</p>
     */
    inline const MarketplaceInformation& GetMarketplaceInformation() const{ return m_marketplaceInformation; }
    inline bool MarketplaceInformationHasBeenSet() const { return m_marketplaceInformationHasBeenSet; }
    inline void SetMarketplaceInformation(const MarketplaceInformation& value) { m_marketplaceInformationHasBeenSet = true; m_marketplaceInformation = value; }
    inline void SetMarketplaceInformation(MarketplaceInformation&& value) { m_marketplaceInformationHasBeenSet = true; m_marketplaceInformation = std::move(value); }
    inline AddonInfo& WithMarketplaceInformation(const MarketplaceInformation& value) { SetMarketplaceInformation(value); return *this;}
    inline AddonInfo& WithMarketplaceInformation(MarketplaceInformation&& value) { SetMarketplaceInformation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AddonVersionInfo> m_addonVersions;
    bool m_addonVersionsHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    MarketplaceInformation m_marketplaceInformation;
    bool m_marketplaceInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
