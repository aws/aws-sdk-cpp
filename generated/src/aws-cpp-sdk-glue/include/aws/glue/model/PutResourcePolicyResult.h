﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_GLUE_API PutResourcePolicyResult();
    AWS_GLUE_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }
    inline PutResourcePolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}
    inline PutResourcePolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}
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

    Aws::String m_policyHash;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
