﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/sts/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace STS
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>AssumeRole</a> request, including
   * temporary AWS credentials that can be used to make AWS requests. </p>
   */
  class AWS_STS_API AssumeRoleResult
  {
  public:
    AssumeRoleResult();
    AssumeRoleResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AssumeRoleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = value; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline AssumeRoleResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline AssumeRoleResult& WithCredentials(Credentials&& value) { SetCredentials(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline const AssumedRoleUser& GetAssumedRoleUser() const{ return m_assumedRoleUser; }

    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline void SetAssumedRoleUser(const AssumedRoleUser& value) { m_assumedRoleUser = value; }

    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline void SetAssumedRoleUser(AssumedRoleUser&& value) { m_assumedRoleUser = value; }

    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline AssumeRoleResult& WithAssumedRoleUser(const AssumedRoleUser& value) { SetAssumedRoleUser(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) and the assumed role ID, which are identifiers
     * that you can use to refer to the resulting temporary security credentials. For
     * example, you can reference these credentials as a principal in a resource-based
     * policy by using the ARN or assumed role ID. The ARN and ID include the
     * <code>RoleSessionName</code> that you specified when you called
     * <code>AssumeRole</code>. </p>
     */
    inline AssumeRoleResult& WithAssumedRoleUser(AssumedRoleUser&& value) { SetAssumedRoleUser(value); return *this;}

    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline int GetPackedPolicySize() const{ return m_packedPolicySize; }

    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline void SetPackedPolicySize(int value) { m_packedPolicySize = value; }

    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline AssumeRoleResult& WithPackedPolicySize(int value) { SetPackedPolicySize(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline AssumeRoleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssumeRoleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Credentials m_credentials;
    AssumedRoleUser m_assumedRoleUser;
    int m_packedPolicySize;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws