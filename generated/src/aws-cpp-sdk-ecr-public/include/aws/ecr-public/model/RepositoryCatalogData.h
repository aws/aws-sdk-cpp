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
    AWS_ECRPUBLIC_API RepositoryCatalogData();
    AWS_ECRPUBLIC_API RepositoryCatalogData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RepositoryCatalogData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The short description of the repository.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RepositoryCatalogData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RepositoryCatalogData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RepositoryCatalogData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture tags that are associated with the repository.</p> 
     * <p>Only supported operating system tags appear publicly in the Amazon ECR Public
     * Gallery. For more information, see <a>RepositoryCatalogDataInput</a>.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const{ return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    inline void SetArchitectures(const Aws::Vector<Aws::String>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }
    inline void SetArchitectures(Aws::Vector<Aws::String>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }
    inline RepositoryCatalogData& WithArchitectures(const Aws::Vector<Aws::String>& value) { SetArchitectures(value); return *this;}
    inline RepositoryCatalogData& WithArchitectures(Aws::Vector<Aws::String>&& value) { SetArchitectures(std::move(value)); return *this;}
    inline RepositoryCatalogData& AddArchitectures(const Aws::String& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    inline RepositoryCatalogData& AddArchitectures(Aws::String&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }
    inline RepositoryCatalogData& AddArchitectures(const char* value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating system tags that are associated with the repository.</p> 
     * <p>Only supported operating system tags appear publicly in the Amazon ECR Public
     * Gallery. For more information, see <a>RepositoryCatalogDataInput</a>.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetOperatingSystems() const{ return m_operatingSystems; }
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
    inline void SetOperatingSystems(const Aws::Vector<Aws::String>& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = value; }
    inline void SetOperatingSystems(Aws::Vector<Aws::String>&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::move(value); }
    inline RepositoryCatalogData& WithOperatingSystems(const Aws::Vector<Aws::String>& value) { SetOperatingSystems(value); return *this;}
    inline RepositoryCatalogData& WithOperatingSystems(Aws::Vector<Aws::String>&& value) { SetOperatingSystems(std::move(value)); return *this;}
    inline RepositoryCatalogData& AddOperatingSystems(const Aws::String& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(value); return *this; }
    inline RepositoryCatalogData& AddOperatingSystems(Aws::String&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(std::move(value)); return *this; }
    inline RepositoryCatalogData& AddOperatingSystems(const char* value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL that contains the logo that's associated with the repository.</p>
     */
    inline const Aws::String& GetLogoUrl() const{ return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    inline void SetLogoUrl(const Aws::String& value) { m_logoUrlHasBeenSet = true; m_logoUrl = value; }
    inline void SetLogoUrl(Aws::String&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::move(value); }
    inline void SetLogoUrl(const char* value) { m_logoUrlHasBeenSet = true; m_logoUrl.assign(value); }
    inline RepositoryCatalogData& WithLogoUrl(const Aws::String& value) { SetLogoUrl(value); return *this;}
    inline RepositoryCatalogData& WithLogoUrl(Aws::String&& value) { SetLogoUrl(std::move(value)); return *this;}
    inline RepositoryCatalogData& WithLogoUrl(const char* value) { SetLogoUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longform description of the contents of the repository. This text appears
     * in the repository details on the Amazon ECR Public Gallery.</p>
     */
    inline const Aws::String& GetAboutText() const{ return m_aboutText; }
    inline bool AboutTextHasBeenSet() const { return m_aboutTextHasBeenSet; }
    inline void SetAboutText(const Aws::String& value) { m_aboutTextHasBeenSet = true; m_aboutText = value; }
    inline void SetAboutText(Aws::String&& value) { m_aboutTextHasBeenSet = true; m_aboutText = std::move(value); }
    inline void SetAboutText(const char* value) { m_aboutTextHasBeenSet = true; m_aboutText.assign(value); }
    inline RepositoryCatalogData& WithAboutText(const Aws::String& value) { SetAboutText(value); return *this;}
    inline RepositoryCatalogData& WithAboutText(Aws::String&& value) { SetAboutText(std::move(value)); return *this;}
    inline RepositoryCatalogData& WithAboutText(const char* value) { SetAboutText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longform usage details of the contents of the repository. The usage text
     * provides context for users of the repository.</p>
     */
    inline const Aws::String& GetUsageText() const{ return m_usageText; }
    inline bool UsageTextHasBeenSet() const { return m_usageTextHasBeenSet; }
    inline void SetUsageText(const Aws::String& value) { m_usageTextHasBeenSet = true; m_usageText = value; }
    inline void SetUsageText(Aws::String&& value) { m_usageTextHasBeenSet = true; m_usageText = std::move(value); }
    inline void SetUsageText(const char* value) { m_usageTextHasBeenSet = true; m_usageText.assign(value); }
    inline RepositoryCatalogData& WithUsageText(const Aws::String& value) { SetUsageText(value); return *this;}
    inline RepositoryCatalogData& WithUsageText(Aws::String&& value) { SetUsageText(std::move(value)); return *this;}
    inline RepositoryCatalogData& WithUsageText(const char* value) { SetUsageText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the repository is certified by Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetMarketplaceCertified() const{ return m_marketplaceCertified; }
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

    bool m_marketplaceCertified;
    bool m_marketplaceCertifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
