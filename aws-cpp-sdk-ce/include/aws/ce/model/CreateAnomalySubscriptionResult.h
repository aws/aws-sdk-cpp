/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{
  class CreateAnomalySubscriptionResult
  {
  public:
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult();
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArn = std::move(value); }

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline CreateAnomalySubscriptionResult& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline CreateAnomalySubscriptionResult& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline CreateAnomalySubscriptionResult& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
