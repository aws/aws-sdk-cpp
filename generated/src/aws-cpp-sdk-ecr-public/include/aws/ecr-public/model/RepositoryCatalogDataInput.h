/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
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
   * <p>An object that contains the catalog data for a repository. This data is
   * publicly visible in the Amazon ECR Public Gallery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/RepositoryCatalogDataInput">AWS
   * API Reference</a></p>
   */
  class RepositoryCatalogDataInput
  {
  public:
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput() = default;
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RepositoryCatalogDataInput& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * appear as badges on the repository and are used as search filters.</p> 
     * <p>If an unsupported tag is added to your repository catalog data, it's
     * associated with the repository and can be retrieved using the API but isn't
     * discoverable in the Amazon ECR Public Gallery.</p>  <ul> <li> <p>
     * <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const { return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    template<typename ArchitecturesT = Aws::Vector<Aws::String>>
    void SetArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures = std::forward<ArchitecturesT>(value); }
    template<typename ArchitecturesT = Aws::Vector<Aws::String>>
    RepositoryCatalogDataInput& WithArchitectures(ArchitecturesT&& value) { SetArchitectures(std::forward<ArchitecturesT>(value)); return *this;}
    template<typename ArchitecturesT = Aws::String>
    RepositoryCatalogDataInput& AddArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures.emplace_back(std::forward<ArchitecturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems
     * appear as badges on the repository and are used as search filters.</p> 
     * <p>If an unsupported tag is added to your repository catalog data, it's
     * associated with the repository and can be retrieved using the API but isn't
     * discoverable in the Amazon ECR Public Gallery.</p>  <ul> <li> <p>
     * <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingSystems() const { return m_operatingSystems; }
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
    template<typename OperatingSystemsT = Aws::Vector<Aws::String>>
    void SetOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::forward<OperatingSystemsT>(value); }
    template<typename OperatingSystemsT = Aws::Vector<Aws::String>>
    RepositoryCatalogDataInput& WithOperatingSystems(OperatingSystemsT&& value) { SetOperatingSystems(std::forward<OperatingSystemsT>(value)); return *this;}
    template<typename OperatingSystemsT = Aws::String>
    RepositoryCatalogDataInput& AddOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline const Aws::Utils::ByteBuffer& GetLogoImageBlob() const { return m_logoImageBlob; }
    inline bool LogoImageBlobHasBeenSet() const { return m_logoImageBlobHasBeenSet; }
    template<typename LogoImageBlobT = Aws::Utils::ByteBuffer>
    void SetLogoImageBlob(LogoImageBlobT&& value) { m_logoImageBlobHasBeenSet = true; m_logoImageBlob = std::forward<LogoImageBlobT>(value); }
    template<typename LogoImageBlobT = Aws::Utils::ByteBuffer>
    RepositoryCatalogDataInput& WithLogoImageBlob(LogoImageBlobT&& value) { SetLogoImageBlob(std::forward<LogoImageBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the contents of the repository. It's publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline const Aws::String& GetAboutText() const { return m_aboutText; }
    inline bool AboutTextHasBeenSet() const { return m_aboutTextHasBeenSet; }
    template<typename AboutTextT = Aws::String>
    void SetAboutText(AboutTextT&& value) { m_aboutTextHasBeenSet = true; m_aboutText = std::forward<AboutTextT>(value); }
    template<typename AboutTextT = Aws::String>
    RepositoryCatalogDataInput& WithAboutText(AboutTextT&& value) { SetAboutText(std::forward<AboutTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about how to use the contents of the repository. It's
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline const Aws::String& GetUsageText() const { return m_usageText; }
    inline bool UsageTextHasBeenSet() const { return m_usageTextHasBeenSet; }
    template<typename UsageTextT = Aws::String>
    void SetUsageText(UsageTextT&& value) { m_usageTextHasBeenSet = true; m_usageText = std::forward<UsageTextT>(value); }
    template<typename UsageTextT = Aws::String>
    RepositoryCatalogDataInput& WithUsageText(UsageTextT&& value) { SetUsageText(std::forward<UsageTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logoImageBlob{};
    bool m_logoImageBlobHasBeenSet = false;

    Aws::String m_aboutText;
    bool m_aboutTextHasBeenSet = false;

    Aws::String m_usageText;
    bool m_usageTextHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
