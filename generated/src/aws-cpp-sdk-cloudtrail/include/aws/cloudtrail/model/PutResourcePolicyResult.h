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


    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p> The JSON-formatted string of the Amazon Web Services resource-based policy
     * attached to the CloudTrail channel. </p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_resourcePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
