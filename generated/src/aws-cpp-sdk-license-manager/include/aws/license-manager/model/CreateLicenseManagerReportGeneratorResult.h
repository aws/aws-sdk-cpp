/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LicenseManager
{
namespace Model
{
  class CreateLicenseManagerReportGeneratorResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult() = default;
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const { return m_licenseManagerReportGeneratorArn; }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    void SetLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::forward<LicenseManagerReportGeneratorArnT>(value); }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    CreateLicenseManagerReportGeneratorResult& WithLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { SetLicenseManagerReportGeneratorArn(std::forward<LicenseManagerReportGeneratorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLicenseManagerReportGeneratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseManagerReportGeneratorArn;
    bool m_licenseManagerReportGeneratorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
