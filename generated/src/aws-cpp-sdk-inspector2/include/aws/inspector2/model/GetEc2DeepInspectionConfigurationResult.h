/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Ec2DeepInspectionStatus.h>
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
namespace Inspector2
{
namespace Model
{
  class GetEc2DeepInspectionConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult() = default;
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackagePaths() const { return m_packagePaths; }
    template<typename PackagePathsT = Aws::Vector<Aws::String>>
    void SetPackagePaths(PackagePathsT&& value) { m_packagePathsHasBeenSet = true; m_packagePaths = std::forward<PackagePathsT>(value); }
    template<typename PackagePathsT = Aws::Vector<Aws::String>>
    GetEc2DeepInspectionConfigurationResult& WithPackagePaths(PackagePathsT&& value) { SetPackagePaths(std::forward<PackagePathsT>(value)); return *this;}
    template<typename PackagePathsT = Aws::String>
    GetEc2DeepInspectionConfigurationResult& AddPackagePaths(PackagePathsT&& value) { m_packagePathsHasBeenSet = true; m_packagePaths.emplace_back(std::forward<PackagePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrgPackagePaths() const { return m_orgPackagePaths; }
    template<typename OrgPackagePathsT = Aws::Vector<Aws::String>>
    void SetOrgPackagePaths(OrgPackagePathsT&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths = std::forward<OrgPackagePathsT>(value); }
    template<typename OrgPackagePathsT = Aws::Vector<Aws::String>>
    GetEc2DeepInspectionConfigurationResult& WithOrgPackagePaths(OrgPackagePathsT&& value) { SetOrgPackagePaths(std::forward<OrgPackagePathsT>(value)); return *this;}
    template<typename OrgPackagePathsT = Aws::String>
    GetEc2DeepInspectionConfigurationResult& AddOrgPackagePaths(OrgPackagePathsT&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths.emplace_back(std::forward<OrgPackagePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline Ec2DeepInspectionStatus GetStatus() const { return m_status; }
    inline void SetStatus(Ec2DeepInspectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEc2DeepInspectionConfigurationResult& WithStatus(Ec2DeepInspectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetEc2DeepInspectionConfigurationResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEc2DeepInspectionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_packagePaths;
    bool m_packagePathsHasBeenSet = false;

    Aws::Vector<Aws::String> m_orgPackagePaths;
    bool m_orgPackagePathsHasBeenSet = false;

    Ec2DeepInspectionStatus m_status{Ec2DeepInspectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
