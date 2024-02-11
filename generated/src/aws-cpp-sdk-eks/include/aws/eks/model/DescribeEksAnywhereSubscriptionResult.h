/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/EksAnywhereSubscription.h>
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
namespace EKS
{
namespace Model
{
  class DescribeEksAnywhereSubscriptionResult
  {
  public:
    AWS_EKS_API DescribeEksAnywhereSubscriptionResult();
    AWS_EKS_API DescribeEksAnywhereSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeEksAnywhereSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the subscription.</p>
     */
    inline const EksAnywhereSubscription& GetSubscription() const{ return m_subscription; }

    /**
     * <p>The full description of the subscription.</p>
     */
    inline void SetSubscription(const EksAnywhereSubscription& value) { m_subscription = value; }

    /**
     * <p>The full description of the subscription.</p>
     */
    inline void SetSubscription(EksAnywhereSubscription&& value) { m_subscription = std::move(value); }

    /**
     * <p>The full description of the subscription.</p>
     */
    inline DescribeEksAnywhereSubscriptionResult& WithSubscription(const EksAnywhereSubscription& value) { SetSubscription(value); return *this;}

    /**
     * <p>The full description of the subscription.</p>
     */
    inline DescribeEksAnywhereSubscriptionResult& WithSubscription(EksAnywhereSubscription&& value) { SetSubscription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEksAnywhereSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEksAnywhereSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEksAnywhereSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EksAnywhereSubscription m_subscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
