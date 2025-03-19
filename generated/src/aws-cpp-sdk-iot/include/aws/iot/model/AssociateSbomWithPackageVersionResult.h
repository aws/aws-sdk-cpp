/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AssociateSbomWithPackageVersionResult
  {
  public:
    AWS_IOT_API AssociateSbomWithPackageVersionResult() = default;
    AWS_IOT_API AssociateSbomWithPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API AssociateSbomWithPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the new software package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    AssociateSbomWithPackageVersionResult& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new package version.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    AssociateSbomWithPackageVersionResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Sbom& GetSbom() const { return m_sbom; }
    template<typename SbomT = Sbom>
    void SetSbom(SbomT&& value) { m_sbomHasBeenSet = true; m_sbom = std::forward<SbomT>(value); }
    template<typename SbomT = Sbom>
    AssociateSbomWithPackageVersionResult& WithSbom(SbomT&& value) { SetSbom(std::forward<SbomT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the initial validation for the software bill of materials
     * against the Software Package Data Exchange (SPDX) and CycloneDX industry
     * standard formats.</p>
     */
    inline SbomValidationStatus GetSbomValidationStatus() const { return m_sbomValidationStatus; }
    inline void SetSbomValidationStatus(SbomValidationStatus value) { m_sbomValidationStatusHasBeenSet = true; m_sbomValidationStatus = value; }
    inline AssociateSbomWithPackageVersionResult& WithSbomValidationStatus(SbomValidationStatus value) { SetSbomValidationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateSbomWithPackageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Sbom m_sbom;
    bool m_sbomHasBeenSet = false;

    SbomValidationStatus m_sbomValidationStatus{SbomValidationStatus::NOT_SET};
    bool m_sbomValidationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
