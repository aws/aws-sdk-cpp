/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API PutResourcePolicyResult();
    AWS_LOOKOUTEQUIPMENT_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline PutResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy was
     * created.</p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionId = value; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionId = std::move(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionId.assign(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_policyRevisionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
