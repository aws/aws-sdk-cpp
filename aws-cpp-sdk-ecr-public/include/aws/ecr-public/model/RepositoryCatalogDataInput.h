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
   * <p>An object containing the catalog data for a repository. This data is publicly
   * visible in the Amazon ECR Public Gallery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/RepositoryCatalogDataInput">AWS
   * API Reference</a></p>
   */
  class RepositoryCatalogDataInput
  {
  public:
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput();
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RepositoryCatalogDataInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline RepositoryCatalogDataInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline RepositoryCatalogDataInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short description of the contents of the repository. This text appears in
     * both the image details and also when searching for repositories on the Amazon
     * ECR Public Gallery.</p>
     */
    inline RepositoryCatalogDataInput& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const{ return m_architectures; }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline void SetArchitectures(const Aws::Vector<Aws::String>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline void SetArchitectures(Aws::Vector<Aws::String>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& WithArchitectures(const Aws::Vector<Aws::String>& value) { SetArchitectures(value); return *this;}

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& WithArchitectures(Aws::Vector<Aws::String>&& value) { SetArchitectures(std::move(value)); return *this;}

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddArchitectures(const Aws::String& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddArchitectures(Aws::String&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }

    /**
     * <p>The system architecture that the images in the repository are compatible
     * with. On the Amazon ECR Public Gallery, the following supported architectures
     * will appear as badges on the repository and are used as search filters.</p> <ul>
     * <li> <p> <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li>
     * </ul>  <p>If an unsupported tag is added to your repository catalog data,
     * it will be associated with the repository and can be retrieved using the API but
     * will not be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddArchitectures(const char* value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }


    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetOperatingSystems() const{ return m_operatingSystems; }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline void SetOperatingSystems(const Aws::Vector<Aws::String>& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = value; }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline void SetOperatingSystems(Aws::Vector<Aws::String>&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::move(value); }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& WithOperatingSystems(const Aws::Vector<Aws::String>& value) { SetOperatingSystems(value); return *this;}

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& WithOperatingSystems(Aws::Vector<Aws::String>&& value) { SetOperatingSystems(std::move(value)); return *this;}

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddOperatingSystems(const Aws::String& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(value); return *this; }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddOperatingSystems(Aws::String&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(std::move(value)); return *this; }

    /**
     * <p>The operating systems that the images in the repository are compatible with.
     * On the Amazon ECR Public Gallery, the following supported operating systems will
     * appear as badges on the repository and are used as search filters.</p> <ul> <li>
     * <p> <code>ARM</code> </p> </li> <li> <p> <code>ARM 64</code> </p> </li> <li> <p>
     * <code>x86</code> </p> </li> <li> <p> <code>x86-64</code> </p> </li> </ul> 
     * <p>If an unsupported tag is added to your repository catalog data, it will be
     * associated with the repository and can be retrieved using the API but will not
     * be discoverable in the Amazon ECR Public Gallery.</p> 
     */
    inline RepositoryCatalogDataInput& AddOperatingSystems(const char* value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.push_back(value); return *this; }


    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline const Aws::Utils::ByteBuffer& GetLogoImageBlob() const{ return m_logoImageBlob; }

    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline bool LogoImageBlobHasBeenSet() const { return m_logoImageBlobHasBeenSet; }

    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline void SetLogoImageBlob(const Aws::Utils::ByteBuffer& value) { m_logoImageBlobHasBeenSet = true; m_logoImageBlob = value; }

    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline void SetLogoImageBlob(Aws::Utils::ByteBuffer&& value) { m_logoImageBlobHasBeenSet = true; m_logoImageBlob = std::move(value); }

    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline RepositoryCatalogDataInput& WithLogoImageBlob(const Aws::Utils::ByteBuffer& value) { SetLogoImageBlob(value); return *this;}

    /**
     * <p>The base64-encoded repository logo payload.</p>  <p>The repository logo
     * is only publicly visible in the Amazon ECR Public Gallery for verified
     * accounts.</p> 
     */
    inline RepositoryCatalogDataInput& WithLogoImageBlob(Aws::Utils::ByteBuffer&& value) { SetLogoImageBlob(std::move(value)); return *this;}


    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline const Aws::String& GetAboutText() const{ return m_aboutText; }

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline bool AboutTextHasBeenSet() const { return m_aboutTextHasBeenSet; }

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline void SetAboutText(const Aws::String& value) { m_aboutTextHasBeenSet = true; m_aboutText = value; }

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline void SetAboutText(Aws::String&& value) { m_aboutTextHasBeenSet = true; m_aboutText = std::move(value); }

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline void SetAboutText(const char* value) { m_aboutTextHasBeenSet = true; m_aboutText.assign(value); }

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline RepositoryCatalogDataInput& WithAboutText(const Aws::String& value) { SetAboutText(value); return *this;}

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline RepositoryCatalogDataInput& WithAboutText(Aws::String&& value) { SetAboutText(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the contents of the repository. It is publicly
     * visible in the Amazon ECR Public Gallery. The text must be in markdown
     * format.</p>
     */
    inline RepositoryCatalogDataInput& WithAboutText(const char* value) { SetAboutText(value); return *this;}


    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline const Aws::String& GetUsageText() const{ return m_usageText; }

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline bool UsageTextHasBeenSet() const { return m_usageTextHasBeenSet; }

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline void SetUsageText(const Aws::String& value) { m_usageTextHasBeenSet = true; m_usageText = value; }

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline void SetUsageText(Aws::String&& value) { m_usageTextHasBeenSet = true; m_usageText = std::move(value); }

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline void SetUsageText(const char* value) { m_usageTextHasBeenSet = true; m_usageText.assign(value); }

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline RepositoryCatalogDataInput& WithUsageText(const Aws::String& value) { SetUsageText(value); return *this;}

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline RepositoryCatalogDataInput& WithUsageText(Aws::String&& value) { SetUsageText(std::move(value)); return *this;}

    /**
     * <p>Detailed information on how to use the contents of the repository. It is
     * publicly visible in the Amazon ECR Public Gallery. The usage text provides
     * context, support information, and additional usage details for users of the
     * repository. The text must be in markdown format.</p>
     */
    inline RepositoryCatalogDataInput& WithUsageText(const char* value) { SetUsageText(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Aws::Utils::ByteBuffer m_logoImageBlob;
    bool m_logoImageBlobHasBeenSet = false;

    Aws::String m_aboutText;
    bool m_aboutTextHasBeenSet = false;

    Aws::String m_usageText;
    bool m_usageTextHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
