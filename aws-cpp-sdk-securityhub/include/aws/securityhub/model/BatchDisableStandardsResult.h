/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StandardsSubscription.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchDisableStandardsResult
  {
  public:
    AWS_SECURITYHUB_API BatchDisableStandardsResult();
    AWS_SECURITYHUB_API BatchDisableStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchDisableStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline const Aws::Vector<StandardsSubscription>& GetStandardsSubscriptions() const{ return m_standardsSubscriptions; }

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline void SetStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { m_standardsSubscriptions = value; }

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline void SetStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { m_standardsSubscriptions = std::move(value); }

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline BatchDisableStandardsResult& WithStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { SetStandardsSubscriptions(value); return *this;}

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline BatchDisableStandardsResult& WithStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { SetStandardsSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline BatchDisableStandardsResult& AddStandardsSubscriptions(const StandardsSubscription& value) { m_standardsSubscriptions.push_back(value); return *this; }

    /**
     * <p>The details of the standards subscriptions that were disabled.</p>
     */
    inline BatchDisableStandardsResult& AddStandardsSubscriptions(StandardsSubscription&& value) { m_standardsSubscriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StandardsSubscription> m_standardsSubscriptions;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
