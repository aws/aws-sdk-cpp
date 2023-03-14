/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/EffectivePolicy.h>
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
namespace IoT
{
namespace Model
{
  class GetEffectivePoliciesResult
  {
  public:
    AWS_IOT_API GetEffectivePoliciesResult();
    AWS_IOT_API GetEffectivePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetEffectivePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The effective policies.</p>
     */
    inline const Aws::Vector<EffectivePolicy>& GetEffectivePolicies() const{ return m_effectivePolicies; }

    /**
     * <p>The effective policies.</p>
     */
    inline void SetEffectivePolicies(const Aws::Vector<EffectivePolicy>& value) { m_effectivePolicies = value; }

    /**
     * <p>The effective policies.</p>
     */
    inline void SetEffectivePolicies(Aws::Vector<EffectivePolicy>&& value) { m_effectivePolicies = std::move(value); }

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& WithEffectivePolicies(const Aws::Vector<EffectivePolicy>& value) { SetEffectivePolicies(value); return *this;}

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& WithEffectivePolicies(Aws::Vector<EffectivePolicy>&& value) { SetEffectivePolicies(std::move(value)); return *this;}

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& AddEffectivePolicies(const EffectivePolicy& value) { m_effectivePolicies.push_back(value); return *this; }

    /**
     * <p>The effective policies.</p>
     */
    inline GetEffectivePoliciesResult& AddEffectivePolicies(EffectivePolicy&& value) { m_effectivePolicies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEffectivePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEffectivePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEffectivePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EffectivePolicy> m_effectivePolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
