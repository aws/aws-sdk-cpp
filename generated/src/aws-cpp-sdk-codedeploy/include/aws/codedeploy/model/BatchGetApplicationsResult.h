/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/ApplicationInfo.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>BatchGetApplications</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetApplicationsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetApplicationsResult() = default;
    AWS_CODEDEPLOY_API BatchGetApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the applications.</p>
     */
    inline const Aws::Vector<ApplicationInfo>& GetApplicationsInfo() const { return m_applicationsInfo; }
    template<typename ApplicationsInfoT = Aws::Vector<ApplicationInfo>>
    void SetApplicationsInfo(ApplicationsInfoT&& value) { m_applicationsInfoHasBeenSet = true; m_applicationsInfo = std::forward<ApplicationsInfoT>(value); }
    template<typename ApplicationsInfoT = Aws::Vector<ApplicationInfo>>
    BatchGetApplicationsResult& WithApplicationsInfo(ApplicationsInfoT&& value) { SetApplicationsInfo(std::forward<ApplicationsInfoT>(value)); return *this;}
    template<typename ApplicationsInfoT = ApplicationInfo>
    BatchGetApplicationsResult& AddApplicationsInfo(ApplicationsInfoT&& value) { m_applicationsInfoHasBeenSet = true; m_applicationsInfo.emplace_back(std::forward<ApplicationsInfoT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationInfo> m_applicationsInfo;
    bool m_applicationsInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
