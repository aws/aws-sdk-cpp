﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace KMS
{
namespace Model
{
  class ListKeyPoliciesResult
  {
  public:
    AWS_KMS_API ListKeyPoliciesResult();
    AWS_KMS_API ListKeyPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ListKeyPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of key policy names. The only valid value is <code>default</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNames = value; }
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNames = std::move(value); }
    inline ListKeyPoliciesResult& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}
    inline ListKeyPoliciesResult& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}
    inline ListKeyPoliciesResult& AddPolicyNames(const Aws::String& value) { m_policyNames.push_back(value); return *this; }
    inline ListKeyPoliciesResult& AddPolicyNames(Aws::String&& value) { m_policyNames.push_back(std::move(value)); return *this; }
    inline ListKeyPoliciesResult& AddPolicyNames(const char* value) { m_policyNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListKeyPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListKeyPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListKeyPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }
    inline void SetTruncated(bool value) { m_truncated = value; }
    inline ListKeyPoliciesResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListKeyPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListKeyPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListKeyPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_policyNames;

    Aws::String m_nextMarker;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
