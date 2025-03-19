/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConversionTask.h>
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
  class ListLicenseConversionTasksResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult() = default;
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseConversionTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the license configuration tasks for your account.</p>
     */
    inline const Aws::Vector<LicenseConversionTask>& GetLicenseConversionTasks() const { return m_licenseConversionTasks; }
    template<typename LicenseConversionTasksT = Aws::Vector<LicenseConversionTask>>
    void SetLicenseConversionTasks(LicenseConversionTasksT&& value) { m_licenseConversionTasksHasBeenSet = true; m_licenseConversionTasks = std::forward<LicenseConversionTasksT>(value); }
    template<typename LicenseConversionTasksT = Aws::Vector<LicenseConversionTask>>
    ListLicenseConversionTasksResult& WithLicenseConversionTasks(LicenseConversionTasksT&& value) { SetLicenseConversionTasks(std::forward<LicenseConversionTasksT>(value)); return *this;}
    template<typename LicenseConversionTasksT = LicenseConversionTask>
    ListLicenseConversionTasksResult& AddLicenseConversionTasks(LicenseConversionTasksT&& value) { m_licenseConversionTasksHasBeenSet = true; m_licenseConversionTasks.emplace_back(std::forward<LicenseConversionTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLicenseConversionTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLicenseConversionTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConversionTask> m_licenseConversionTasks;
    bool m_licenseConversionTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
