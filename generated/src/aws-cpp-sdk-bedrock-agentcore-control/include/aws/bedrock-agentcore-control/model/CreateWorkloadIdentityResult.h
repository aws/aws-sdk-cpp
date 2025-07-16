/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class CreateWorkloadIdentityResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateWorkloadIdentityResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateWorkloadIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateWorkloadIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the workload identity.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkloadIdentityResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workload identity.</p>
     */
    inline const Aws::String& GetWorkloadIdentityArn() const { return m_workloadIdentityArn; }
    template<typename WorkloadIdentityArnT = Aws::String>
    void SetWorkloadIdentityArn(WorkloadIdentityArnT&& value) { m_workloadIdentityArnHasBeenSet = true; m_workloadIdentityArn = std::forward<WorkloadIdentityArnT>(value); }
    template<typename WorkloadIdentityArnT = Aws::String>
    CreateWorkloadIdentityResult& WithWorkloadIdentityArn(WorkloadIdentityArnT&& value) { SetWorkloadIdentityArn(std::forward<WorkloadIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of allowed OAuth2 return URLs for resources associated with this
     * workload identity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResourceOauth2ReturnUrls() const { return m_allowedResourceOauth2ReturnUrls; }
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
    void SetAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { m_allowedResourceOauth2ReturnUrlsHasBeenSet = true; m_allowedResourceOauth2ReturnUrls = std::forward<AllowedResourceOauth2ReturnUrlsT>(value); }
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
    CreateWorkloadIdentityResult& WithAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { SetAllowedResourceOauth2ReturnUrls(std::forward<AllowedResourceOauth2ReturnUrlsT>(value)); return *this;}
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::String>
    CreateWorkloadIdentityResult& AddAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { m_allowedResourceOauth2ReturnUrlsHasBeenSet = true; m_allowedResourceOauth2ReturnUrls.emplace_back(std::forward<AllowedResourceOauth2ReturnUrlsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkloadIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workloadIdentityArn;
    bool m_workloadIdentityArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedResourceOauth2ReturnUrls;
    bool m_allowedResourceOauth2ReturnUrlsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
