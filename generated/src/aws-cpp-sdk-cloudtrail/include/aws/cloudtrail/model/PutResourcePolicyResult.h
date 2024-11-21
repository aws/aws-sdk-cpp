/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_CLOUDTRAIL_API PutResourcePolicyResult();
    AWS_CLOUDTRAIL_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail event data store,
     * dashboard, or channel attached to the resource-based policy. </p> <p>Example
     * event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p> <p>Example dashboard ARN format:
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:dashboard/exampleDash</code>
     * </p> <p>Example channel ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/01234567890</code> </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline PutResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PutResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail event data store, dashboard, or channel. </p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }
    inline PutResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}
    inline PutResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default resource-based policy that is automatically generated for the
     * delegated administrator of an Organizations organization. This policy will be
     * evaluated in tandem with any policy you submit for the resource. For more
     * information about this policy, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-lake-organizations.html#cloudtrail-lake-organizations-eds-rbp">Default
     * resource policy for delegated administrators</a>. </p>
     */
    inline const Aws::String& GetDelegatedAdminResourcePolicy() const{ return m_delegatedAdminResourcePolicy; }
    inline void SetDelegatedAdminResourcePolicy(const Aws::String& value) { m_delegatedAdminResourcePolicy = value; }
    inline void SetDelegatedAdminResourcePolicy(Aws::String&& value) { m_delegatedAdminResourcePolicy = std::move(value); }
    inline void SetDelegatedAdminResourcePolicy(const char* value) { m_delegatedAdminResourcePolicy.assign(value); }
    inline PutResourcePolicyResult& WithDelegatedAdminResourcePolicy(const Aws::String& value) { SetDelegatedAdminResourcePolicy(value); return *this;}
    inline PutResourcePolicyResult& WithDelegatedAdminResourcePolicy(Aws::String&& value) { SetDelegatedAdminResourcePolicy(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithDelegatedAdminResourcePolicy(const char* value) { SetDelegatedAdminResourcePolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_resourcePolicy;

    Aws::String m_delegatedAdminResourcePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
