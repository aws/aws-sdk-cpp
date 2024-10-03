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
    AWS_IOT_API AssociateSbomWithPackageVersionResult();
    AWS_IOT_API AssociateSbomWithPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API AssociateSbomWithPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the new software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }
    inline AssociateSbomWithPackageVersionResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }
    inline AssociateSbomWithPackageVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    
    inline const Sbom& GetSbom() const{ return m_sbom; }
    inline void SetSbom(const Sbom& value) { m_sbom = value; }
    inline void SetSbom(Sbom&& value) { m_sbom = std::move(value); }
    inline AssociateSbomWithPackageVersionResult& WithSbom(const Sbom& value) { SetSbom(value); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithSbom(Sbom&& value) { SetSbom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the initial validation for the software bill of materials
     * against the Software Package Data Exchange (SPDX) and CycloneDX industry
     * standard formats.</p>
     */
    inline const SbomValidationStatus& GetSbomValidationStatus() const{ return m_sbomValidationStatus; }
    inline void SetSbomValidationStatus(const SbomValidationStatus& value) { m_sbomValidationStatus = value; }
    inline void SetSbomValidationStatus(SbomValidationStatus&& value) { m_sbomValidationStatus = std::move(value); }
    inline AssociateSbomWithPackageVersionResult& WithSbomValidationStatus(const SbomValidationStatus& value) { SetSbomValidationStatus(value); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithSbomValidationStatus(SbomValidationStatus&& value) { SetSbomValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateSbomWithPackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateSbomWithPackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_packageName;

    Aws::String m_versionName;

    Sbom m_sbom;

    SbomValidationStatus m_sbomValidationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
