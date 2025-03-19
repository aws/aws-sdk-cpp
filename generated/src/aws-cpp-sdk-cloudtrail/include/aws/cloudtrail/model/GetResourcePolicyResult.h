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
  class GetResourcePolicyResult
  {
  public:
    AWS_CLOUDTRAIL_API GetResourcePolicyResult() = default;
    AWS_CLOUDTRAIL_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail event data store,
     * dashboard, or channel attached to resource-based policy. </p> <p>Example event
     * data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p> <p>Example dashboard ARN format:
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:dashboard/exampleDash</code>
     * </p> <p>Example channel ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/01234567890</code> </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetResourcePolicyResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A JSON-formatted string that contains the resource-based policy attached to
     * the CloudTrail event data store, dashboard, or channel. </p>
     */
    inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
    template<typename ResourcePolicyT = Aws::String>
    void SetResourcePolicy(ResourcePolicyT&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::forward<ResourcePolicyT>(value); }
    template<typename ResourcePolicyT = Aws::String>
    GetResourcePolicyResult& WithResourcePolicy(ResourcePolicyT&& value) { SetResourcePolicy(std::forward<ResourcePolicyT>(value)); return *this;}
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
    inline const Aws::String& GetDelegatedAdminResourcePolicy() const { return m_delegatedAdminResourcePolicy; }
    template<typename DelegatedAdminResourcePolicyT = Aws::String>
    void SetDelegatedAdminResourcePolicy(DelegatedAdminResourcePolicyT&& value) { m_delegatedAdminResourcePolicyHasBeenSet = true; m_delegatedAdminResourcePolicy = std::forward<DelegatedAdminResourcePolicyT>(value); }
    template<typename DelegatedAdminResourcePolicyT = Aws::String>
    GetResourcePolicyResult& WithDelegatedAdminResourcePolicy(DelegatedAdminResourcePolicyT&& value) { SetDelegatedAdminResourcePolicy(std::forward<DelegatedAdminResourcePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    Aws::String m_delegatedAdminResourcePolicy;
    bool m_delegatedAdminResourcePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
