/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/PackageVersionArtifact.h>
#include <aws/iot/model/PackageVersionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/Sbom.h>
#include <aws/iot/model/SbomValidationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class GetPackageVersionResult
  {
  public:
    AWS_IOT_API GetPackageVersionResult() = default;
    AWS_IOT_API GetPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the package version.</p>
     */
    inline const Aws::String& GetPackageVersionArn() const { return m_packageVersionArn; }
    template<typename PackageVersionArnT = Aws::String>
    void SetPackageVersionArn(PackageVersionArnT&& value) { m_packageVersionArnHasBeenSet = true; m_packageVersionArn = std::forward<PackageVersionArnT>(value); }
    template<typename PackageVersionArnT = Aws::String>
    GetPackageVersionResult& WithPackageVersionArn(PackageVersionArnT&& value) { SetPackageVersionArn(std::forward<PackageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    GetPackageVersionResult& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the package version.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    GetPackageVersionResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetPackageVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version���s configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetPackageVersionResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetPackageVersionResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The various components that make up a software package version.</p>
     */
    inline const PackageVersionArtifact& GetArtifact() const { return m_artifact; }
    template<typename ArtifactT = PackageVersionArtifact>
    void SetArtifact(ArtifactT&& value) { m_artifactHasBeenSet = true; m_artifact = std::forward<ArtifactT>(value); }
    template<typename ArtifactT = PackageVersionArtifact>
    GetPackageVersionResult& WithArtifact(ArtifactT&& value) { SetArtifact(std::forward<ArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status associated to the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline PackageVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(PackageVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetPackageVersionResult& WithStatus(PackageVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline const Aws::String& GetErrorReason() const { return m_errorReason; }
    template<typename ErrorReasonT = Aws::String>
    void SetErrorReason(ErrorReasonT&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::forward<ErrorReasonT>(value); }
    template<typename ErrorReasonT = Aws::String>
    GetPackageVersionResult& WithErrorReason(ErrorReasonT&& value) { SetErrorReason(std::forward<ErrorReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the package version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetPackageVersionResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the package version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    GetPackageVersionResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software bill of materials for a software package version.</p>
     */
    inline const Sbom& GetSbom() const { return m_sbom; }
    template<typename SbomT = Sbom>
    void SetSbom(SbomT&& value) { m_sbomHasBeenSet = true; m_sbom = std::forward<SbomT>(value); }
    template<typename SbomT = Sbom>
    GetPackageVersionResult& WithSbom(SbomT&& value) { SetSbom(std::forward<SbomT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation for a new software bill of materials added to a
     * software package version.</p>
     */
    inline SbomValidationStatus GetSbomValidationStatus() const { return m_sbomValidationStatus; }
    inline void SetSbomValidationStatus(SbomValidationStatus value) { m_sbomValidationStatusHasBeenSet = true; m_sbomValidationStatus = value; }
    inline GetPackageVersionResult& WithSbomValidationStatus(SbomValidationStatus value) { SetSbomValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline job document associated with a software package version used for a
     * quick job deployment.</p>
     */
    inline const Aws::String& GetRecipe() const { return m_recipe; }
    template<typename RecipeT = Aws::String>
    void SetRecipe(RecipeT&& value) { m_recipeHasBeenSet = true; m_recipe = std::forward<RecipeT>(value); }
    template<typename RecipeT = Aws::String>
    GetPackageVersionResult& WithRecipe(RecipeT&& value) { SetRecipe(std::forward<RecipeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPackageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageVersionArn;
    bool m_packageVersionArnHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    PackageVersionArtifact m_artifact;
    bool m_artifactHasBeenSet = false;

    PackageVersionStatus m_status{PackageVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Sbom m_sbom;
    bool m_sbomHasBeenSet = false;

    SbomValidationStatus m_sbomValidationStatus{SbomValidationStatus::NOT_SET};
    bool m_sbomValidationStatusHasBeenSet = false;

    Aws::String m_recipe;
    bool m_recipeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
