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
    AWS_EKS_API AssociateAccessPolicyResult();
    AWS_EKS_API AssociateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API AssociateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline AssociateAccessPolicyResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline AssociateAccessPolicyResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline AssociateAccessPolicyResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArn = value; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline AssociateAccessPolicyResult& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline AssociateAccessPolicyResult& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline AssociateAccessPolicyResult& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline const AssociatedAccessPolicy& GetAssociatedAccessPolicy() const{ return m_associatedAccessPolicy; }

    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline void SetAssociatedAccessPolicy(const AssociatedAccessPolicy& value) { m_associatedAccessPolicy = value; }

    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline void SetAssociatedAccessPolicy(AssociatedAccessPolicy&& value) { m_associatedAccessPolicy = std::move(value); }

    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline AssociateAccessPolicyResult& WithAssociatedAccessPolicy(const AssociatedAccessPolicy& value) { SetAssociatedAccessPolicy(value); return *this;}

    /**
     * <p>The <code>AccessPolicy</code> and scope associated to the
     * <code>AccessEntry</code>.</p>
     */
    inline AssociateAccessPolicyResult& WithAssociatedAccessPolicy(AssociatedAccessPolicy&& value) { SetAssociatedAccessPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateAccessPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateAccessPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateAccessPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clusterName;

    Aws::String m_principalArn;

    AssociatedAccessPolicy m_associatedAccessPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
