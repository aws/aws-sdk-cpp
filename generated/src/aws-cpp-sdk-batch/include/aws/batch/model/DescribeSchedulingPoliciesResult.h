/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/SchedulingPolicyDetail.h>
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
namespace Batch
{
namespace Model
{
  class DescribeSchedulingPoliciesResult
  {
  public:
    AWS_BATCH_API DescribeSchedulingPoliciesResult();
    AWS_BATCH_API DescribeSchedulingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeSchedulingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of scheduling policies.</p>
     */
    inline const Aws::Vector<SchedulingPolicyDetail>& GetSchedulingPolicies() const{ return m_schedulingPolicies; }

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline void SetSchedulingPolicies(const Aws::Vector<SchedulingPolicyDetail>& value) { m_schedulingPolicies = value; }

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline void SetSchedulingPolicies(Aws::Vector<SchedulingPolicyDetail>&& value) { m_schedulingPolicies = std::move(value); }

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline DescribeSchedulingPoliciesResult& WithSchedulingPolicies(const Aws::Vector<SchedulingPolicyDetail>& value) { SetSchedulingPolicies(value); return *this;}

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline DescribeSchedulingPoliciesResult& WithSchedulingPolicies(Aws::Vector<SchedulingPolicyDetail>&& value) { SetSchedulingPolicies(std::move(value)); return *this;}

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline DescribeSchedulingPoliciesResult& AddSchedulingPolicies(const SchedulingPolicyDetail& value) { m_schedulingPolicies.push_back(value); return *this; }

    /**
     * <p>The list of scheduling policies.</p>
     */
    inline DescribeSchedulingPoliciesResult& AddSchedulingPolicies(SchedulingPolicyDetail&& value) { m_schedulingPolicies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSchedulingPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSchedulingPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSchedulingPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SchedulingPolicyDetail> m_schedulingPolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
