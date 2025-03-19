/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/StorageConnectorType.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a connector that enables persistent storage for
   * users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StorageConnector">AWS
   * API Reference</a></p>
   */
  class StorageConnector
  {
  public:
    AWS_APPSTREAM_API StorageConnector() = default;
    AWS_APPSTREAM_API StorageConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API StorageConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of storage connector.</p>
     */
    inline StorageConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(StorageConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline StorageConnector& WithConnectorType(StorageConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    StorageConnector& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the domains for the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    StorageConnector& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = Aws::String>
    StorageConnector& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OneDrive for Business domains where you require admin consent when users
     * try to link their OneDrive account to AppStream 2.0. The attribute can only be
     * specified when ConnectorType=ONE_DRIVE.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainsRequireAdminConsent() const { return m_domainsRequireAdminConsent; }
    inline bool DomainsRequireAdminConsentHasBeenSet() const { return m_domainsRequireAdminConsentHasBeenSet; }
    template<typename DomainsRequireAdminConsentT = Aws::Vector<Aws::String>>
    void SetDomainsRequireAdminConsent(DomainsRequireAdminConsentT&& value) { m_domainsRequireAdminConsentHasBeenSet = true; m_domainsRequireAdminConsent = std::forward<DomainsRequireAdminConsentT>(value); }
    template<typename DomainsRequireAdminConsentT = Aws::Vector<Aws::String>>
    StorageConnector& WithDomainsRequireAdminConsent(DomainsRequireAdminConsentT&& value) { SetDomainsRequireAdminConsent(std::forward<DomainsRequireAdminConsentT>(value)); return *this;}
    template<typename DomainsRequireAdminConsentT = Aws::String>
    StorageConnector& AddDomainsRequireAdminConsent(DomainsRequireAdminConsentT&& value) { m_domainsRequireAdminConsentHasBeenSet = true; m_domainsRequireAdminConsent.emplace_back(std::forward<DomainsRequireAdminConsentT>(value)); return *this; }
    ///@}
  private:

    StorageConnectorType m_connectorType{StorageConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainsRequireAdminConsent;
    bool m_domainsRequireAdminConsentHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
