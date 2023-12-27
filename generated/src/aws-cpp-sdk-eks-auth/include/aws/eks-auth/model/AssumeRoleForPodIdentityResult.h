/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
#include <aws/eks-auth/model/Subject.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks-auth/model/PodIdentityAssociation.h>
#include <aws/eks-auth/model/AssumedRoleUser.h>
#include <aws/eks-auth/model/Credentials.h>
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
namespace EKSAuth
{
namespace Model
{
  class AssumeRoleForPodIdentityResult
  {
  public:
    AWS_EKSAUTH_API AssumeRoleForPodIdentityResult();
    AWS_EKSAUTH_API AssumeRoleForPodIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKSAUTH_API AssumeRoleForPodIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline const Subject& GetSubject() const{ return m_subject; }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline void SetSubject(const Subject& value) { m_subject = value; }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline void SetSubject(Subject&& value) { m_subject = std::move(value); }

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithSubject(const Subject& value) { SetSubject(value); return *this;}

    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithSubject(Subject&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetAudience() const{ return m_audience; }

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline void SetAudience(const Aws::String& value) { m_audience = value; }

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline void SetAudience(Aws::String&& value) { m_audience = std::move(value); }

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline void SetAudience(const char* value) { m_audience.assign(value); }

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithAudience(const Aws::String& value) { SetAudience(value); return *this;}

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithAudience(Aws::String&& value) { SetAudience(std::move(value)); return *this;}

    /**
     * <p>The identity that is allowed to use the credentials. This value is always
     * <code>pods.eks.amazonaws.com</code>.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithAudience(const char* value) { SetAudience(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) and ID of the EKS Pod Identity
     * association.</p>
     */
    inline const PodIdentityAssociation& GetPodIdentityAssociation() const{ return m_podIdentityAssociation; }

    /**
     * <p>The Amazon Resource Name (ARN) and ID of the EKS Pod Identity
     * association.</p>
     */
    inline void SetPodIdentityAssociation(const PodIdentityAssociation& value) { m_podIdentityAssociation = value; }

    /**
     * <p>The Amazon Resource Name (ARN) and ID of the EKS Pod Identity
     * association.</p>
     */
    inline void SetPodIdentityAssociation(PodIdentityAssociation&& value) { m_podIdentityAssociation = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) and ID of the EKS Pod Identity
     * association.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithPodIdentityAssociation(const PodIdentityAssociation& value) { SetPodIdentityAssociation(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and ID of the EKS Pod Identity
     * association.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithPodIdentityAssociation(PodIdentityAssociation&& value) { SetPodIdentityAssociation(std::move(value)); return *this;}


    /**
     * <p>An object with the permanent IAM role identity and the temporary session
     * name.</p> <p>The ARN of the IAM role that the temporary credentials authenticate
     * to.</p> <p>The session name of the temporary session requested to STS. The value
     * is a unique identifier that contains the role ID, a colon (<code>:</code>), and
     * the role session name of the role that is being assumed. The role ID is
     * generated by IAM when the role is created. The role session name part of the
     * value follows this format: <code>eks-<i>clustername</i>-<i>podname</i>-<i>random
     * UUID</i> </code> </p>
     */
    inline const AssumedRoleUser& GetAssumedRoleUser() const{ return m_assumedRoleUser; }

    /**
     * <p>An object with the permanent IAM role identity and the temporary session
     * name.</p> <p>The ARN of the IAM role that the temporary credentials authenticate
     * to.</p> <p>The session name of the temporary session requested to STS. The value
     * is a unique identifier that contains the role ID, a colon (<code>:</code>), and
     * the role session name of the role that is being assumed. The role ID is
     * generated by IAM when the role is created. The role session name part of the
     * value follows this format: <code>eks-<i>clustername</i>-<i>podname</i>-<i>random
     * UUID</i> </code> </p>
     */
    inline void SetAssumedRoleUser(const AssumedRoleUser& value) { m_assumedRoleUser = value; }

    /**
     * <p>An object with the permanent IAM role identity and the temporary session
     * name.</p> <p>The ARN of the IAM role that the temporary credentials authenticate
     * to.</p> <p>The session name of the temporary session requested to STS. The value
     * is a unique identifier that contains the role ID, a colon (<code>:</code>), and
     * the role session name of the role that is being assumed. The role ID is
     * generated by IAM when the role is created. The role session name part of the
     * value follows this format: <code>eks-<i>clustername</i>-<i>podname</i>-<i>random
     * UUID</i> </code> </p>
     */
    inline void SetAssumedRoleUser(AssumedRoleUser&& value) { m_assumedRoleUser = std::move(value); }

    /**
     * <p>An object with the permanent IAM role identity and the temporary session
     * name.</p> <p>The ARN of the IAM role that the temporary credentials authenticate
     * to.</p> <p>The session name of the temporary session requested to STS. The value
     * is a unique identifier that contains the role ID, a colon (<code>:</code>), and
     * the role session name of the role that is being assumed. The role ID is
     * generated by IAM when the role is created. The role session name part of the
     * value follows this format: <code>eks-<i>clustername</i>-<i>podname</i>-<i>random
     * UUID</i> </code> </p>
     */
    inline AssumeRoleForPodIdentityResult& WithAssumedRoleUser(const AssumedRoleUser& value) { SetAssumedRoleUser(value); return *this;}

    /**
     * <p>An object with the permanent IAM role identity and the temporary session
     * name.</p> <p>The ARN of the IAM role that the temporary credentials authenticate
     * to.</p> <p>The session name of the temporary session requested to STS. The value
     * is a unique identifier that contains the role ID, a colon (<code>:</code>), and
     * the role session name of the role that is being assumed. The role ID is
     * generated by IAM when the role is created. The role session name part of the
     * value follows this format: <code>eks-<i>clustername</i>-<i>podname</i>-<i>random
     * UUID</i> </code> </p>
     */
    inline AssumeRoleForPodIdentityResult& WithAssumedRoleUser(AssumedRoleUser&& value) { SetAssumedRoleUser(std::move(value)); return *this;}


    /**
     * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
     * credentials.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
     * credentials.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
     * credentials.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
     * credentials.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The <i>Amazon Web Services Signature Version 4</i> type of temporary
     * credentials.</p>
     */
    inline AssumeRoleForPodIdentityResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssumeRoleForPodIdentityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssumeRoleForPodIdentityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssumeRoleForPodIdentityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Subject m_subject;

    Aws::String m_audience;

    PodIdentityAssociation m_podIdentityAssociation;

    AssumedRoleUser m_assumedRoleUser;

    Credentials m_credentials;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
