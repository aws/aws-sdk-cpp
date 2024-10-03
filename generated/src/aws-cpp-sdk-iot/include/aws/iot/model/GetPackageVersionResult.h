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
    AWS_IOT_API GetPackageVersionResult();
    AWS_IOT_API GetPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the package version.</p>
     */
    inline const Aws::String& GetPackageVersionArn() const{ return m_packageVersionArn; }
    inline void SetPackageVersionArn(const Aws::String& value) { m_packageVersionArn = value; }
    inline void SetPackageVersionArn(Aws::String&& value) { m_packageVersionArn = std::move(value); }
    inline void SetPackageVersionArn(const char* value) { m_packageVersionArn.assign(value); }
    inline GetPackageVersionResult& WithPackageVersionArn(const Aws::String& value) { SetPackageVersionArn(value); return *this;}
    inline GetPackageVersionResult& WithPackageVersionArn(Aws::String&& value) { SetPackageVersionArn(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithPackageVersionArn(const char* value) { SetPackageVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }
    inline GetPackageVersionResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline GetPackageVersionResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }
    inline GetPackageVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline GetPackageVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetPackageVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetPackageVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that were added to the package version that can be used to define a
     * package version’s configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }
    inline GetPackageVersionResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline GetPackageVersionResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline GetPackageVersionResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }
    inline GetPackageVersionResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline GetPackageVersionResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline GetPackageVersionResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline GetPackageVersionResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline GetPackageVersionResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline GetPackageVersionResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The various components that make up a software package version.</p>
     */
    inline const PackageVersionArtifact& GetArtifact() const{ return m_artifact; }
    inline void SetArtifact(const PackageVersionArtifact& value) { m_artifact = value; }
    inline void SetArtifact(PackageVersionArtifact&& value) { m_artifact = std::move(value); }
    inline GetPackageVersionResult& WithArtifact(const PackageVersionArtifact& value) { SetArtifact(value); return *this;}
    inline GetPackageVersionResult& WithArtifact(PackageVersionArtifact&& value) { SetArtifact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status associated to the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PackageVersionStatus& value) { m_status = value; }
    inline void SetStatus(PackageVersionStatus&& value) { m_status = std::move(value); }
    inline GetPackageVersionResult& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}
    inline GetPackageVersionResult& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error reason for a package version failure during creation or update.</p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }
    inline void SetErrorReason(const Aws::String& value) { m_errorReason = value; }
    inline void SetErrorReason(Aws::String&& value) { m_errorReason = std::move(value); }
    inline void SetErrorReason(const char* value) { m_errorReason.assign(value); }
    inline GetPackageVersionResult& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}
    inline GetPackageVersionResult& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the package version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetPackageVersionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetPackageVersionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the package version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline GetPackageVersionResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline GetPackageVersionResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software bill of materials for a software package version.</p>
     */
    inline const Sbom& GetSbom() const{ return m_sbom; }
    inline void SetSbom(const Sbom& value) { m_sbom = value; }
    inline void SetSbom(Sbom&& value) { m_sbom = std::move(value); }
    inline GetPackageVersionResult& WithSbom(const Sbom& value) { SetSbom(value); return *this;}
    inline GetPackageVersionResult& WithSbom(Sbom&& value) { SetSbom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation for a new software bill of materials added to a
     * software package version.</p>
     */
    inline const SbomValidationStatus& GetSbomValidationStatus() const{ return m_sbomValidationStatus; }
    inline void SetSbomValidationStatus(const SbomValidationStatus& value) { m_sbomValidationStatus = value; }
    inline void SetSbomValidationStatus(SbomValidationStatus&& value) { m_sbomValidationStatus = std::move(value); }
    inline GetPackageVersionResult& WithSbomValidationStatus(const SbomValidationStatus& value) { SetSbomValidationStatus(value); return *this;}
    inline GetPackageVersionResult& WithSbomValidationStatus(SbomValidationStatus&& value) { SetSbomValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline job document associated with a software package version used for a
     * quick job deployment.</p>
     */
    inline const Aws::String& GetRecipe() const{ return m_recipe; }
    inline void SetRecipe(const Aws::String& value) { m_recipe = value; }
    inline void SetRecipe(Aws::String&& value) { m_recipe = std::move(value); }
    inline void SetRecipe(const char* value) { m_recipe.assign(value); }
    inline GetPackageVersionResult& WithRecipe(const Aws::String& value) { SetRecipe(value); return *this;}
    inline GetPackageVersionResult& WithRecipe(Aws::String&& value) { SetRecipe(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithRecipe(const char* value) { SetRecipe(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_packageVersionArn;

    Aws::String m_packageName;

    Aws::String m_versionName;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_attributes;

    PackageVersionArtifact m_artifact;

    PackageVersionStatus m_status;

    Aws::String m_errorReason;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Sbom m_sbom;

    SbomValidationStatus m_sbomValidationStatus;

    Aws::String m_recipe;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
