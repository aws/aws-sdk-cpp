/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class DeleteResourcePolicyResult
  {
  public:
    AWS_CLOUDHSMV2_API DeleteResourcePolicyResult();
    AWS_CLOUDHSMV2_API DeleteResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API DeleteResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource from which the policy was deleted.
     * </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DeleteResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DeleteResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DeleteResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy previously attached to the resource.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline DeleteResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DeleteResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DeleteResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
