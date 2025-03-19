/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AssociatedAccessPolicy.h>
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
namespace EKS
{
namespace Model
{
  class AssociateAccessPolicyResult
  {
  public:
    AWS_EKS_API AssociateAccessPolicyResult() = default;
    AWS_EKS_API AssociateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API AssociateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    AssociateAccessPolicyResult& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    AssociateAccessPolicyResult& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline const AssociatedAccessPolicy& GetAssociatedAccessPolicy() const { return m_associatedAccessPolicy; }
    template<typename AssociatedAccessPolicyT = AssociatedAccessPolicy>
    void SetAssociatedAccessPolicy(AssociatedAccessPolicyT&& value) { m_associatedAccessPolicyHasBeenSet = true; m_associatedAccessPolicy = std::forward<AssociatedAccessPolicyT>(value); }
    template<typename AssociatedAccessPolicyT = AssociatedAccessPolicy>
    AssociateAccessPolicyResult& WithAssociatedAccessPolicy(AssociatedAccessPolicyT&& value) { SetAssociatedAccessPolicy(std::forward<AssociatedAccessPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAccessPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    AssociatedAccessPolicy m_associatedAccessPolicy;
    bool m_associatedAccessPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
