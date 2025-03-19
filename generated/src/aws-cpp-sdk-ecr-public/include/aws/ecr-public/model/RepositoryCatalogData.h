/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>The catalog data for a repository. This data is publicly visible in the
   * Amazon ECR Public Gallery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/RepositoryCatalogData">AWS
   * API Reference</a></p>
   */
  class RepositoryCatalogData
  {
  public:
    AWS_ECRPUBLIC_API RepositoryCatalogData() = default;
    AWS_ECRPUBLIC_API RepositoryCatalogData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RepositoryCatalogData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The short description of the repository.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RepositoryCatalogData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture tags that are associated with the repository.</p> 
     * <p>Only supported operating system tags appear publicly in the Amazon ECR Public
     * Gallery. For more information, see <a>RepositoryCatalogDataInput</a>.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const { return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    template<typename ArchitecturesT = Aws::Vector<Aws::String>>
    void SetArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures = std::forward<ArchitecturesT>(value); }
    template<typename ArchitecturesT = Aws::Vector<Aws::String>>
    RepositoryCatalogData& WithArchitectures(ArchitecturesT&& value) { SetArchitectures(std::forward<ArchitecturesT>(value)); return *this;}
    template<typename ArchitecturesT = Aws::String>
    RepositoryCatalogData& AddArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures.emplace_back(std::forward<ArchitecturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating system tags that are associated with the repository.</p> 
     * <p>Only supported operating system tags appear publicly in the Amazon ECR Public
     * Gallery. For more information, see <a>RepositoryCatalogDataInput</a>.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetOperatingSystems() const { return m_operatingSystems; }
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
    template<typename OperatingSystemsT = Aws::Vector<Aws::String>>
    void SetOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::forward<OperatingSystemsT>(value); }
    template<typename OperatingSystemsT = Aws::Vector<Aws::String>>
    RepositoryCatalogData& WithOperatingSystems(OperatingSystemsT&& value) { SetOperatingSystems(std::forward<OperatingSystemsT>(value)); return *this;}
    template<typename OperatingSystemsT = Aws::String>
    RepositoryCatalogData& AddOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL that contains the logo that's associated with the repository.</p>
     */
    inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    template<typename LogoUrlT = Aws::String>
    void SetLogoUrl(LogoUrlT&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::forward<LogoUrlT>(value); }
    template<typename LogoUrlT = Aws::String>
    RepositoryCatalogData& WithLogoUrl(LogoUrlT&& value) { SetLogoUrl(std::forward<LogoUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longform description of the contents of the repository. This text appears
     * in the repository details on the Amazon ECR Public Gallery.</p>
     */
    inline const Aws::String& GetAboutText() const { return m_aboutText; }
    inline bool AboutTextHasBeenSet() const { return m_aboutTextHasBeenSet; }
    template<typename AboutTextT = Aws::String>
    void SetAboutText(AboutTextT&& value) { m_aboutTextHasBeenSet = true; m_aboutText = std::forward<AboutTextT>(value); }
    template<typename AboutTextT = Aws::String>
    RepositoryCatalogData& WithAboutText(AboutTextT&& value) { SetAboutText(std::forward<AboutTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longform usage details of the contents of the repository. The usage text
     * provides context for users of the repository.</p>
     */
    inline const Aws::String& GetUsageText() const { return m_usageText; }
    inline bool UsageTextHasBeenSet() const { return m_usageTextHasBeenSet; }
    template<typename UsageTextT = Aws::String>
    void SetUsageText(UsageTextT&& value) { m_usageTextHasBeenSet = true; m_usageText = std::forward<UsageTextT>(value); }
    template<typename UsageTextT = Aws::String>
    RepositoryCatalogData& WithUsageText(UsageTextT&& value) { SetUsageText(std::forward<UsageTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the repository is certified by Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetMarketplaceCertified() const { return m_marketplaceCertified; }
    inline bool MarketplaceCertifiedHasBeenSet() const { return m_marketplaceCertifiedHasBeenSet; }
    inline void SetMarketplaceCertified(bool value) { m_marketplaceCertifiedHasBeenSet = true; m_marketplaceCertified = value; }
    inline RepositoryCatalogData& WithMarketplaceCertified(bool value) { SetMarketplaceCertified(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Aws::String m_logoUrl;
    bool m_logoUrlHasBeenSet = false;

    Aws::String m_aboutText;
    bool m_aboutTextHasBeenSet = false;

    Aws::String m_usageText;
    bool m_usageTextHasBeenSet = false;

    bool m_marketplaceCertified{false};
    bool m_marketplaceCertifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
