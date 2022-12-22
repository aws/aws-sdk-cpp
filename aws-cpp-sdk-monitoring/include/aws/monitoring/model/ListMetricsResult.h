/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/Metric.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class ListMetricsResult
  {
  public:
    AWS_CLOUDWATCH_API ListMetricsResult();
    AWS_CLOUDWATCH_API ListMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The metrics that match your request. </p>
     */
    inline const Aws::Vector<Metric>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics that match your request. </p>
     */
    inline void SetMetrics(const Aws::Vector<Metric>& value) { m_metrics = value; }

    /**
     * <p>The metrics that match your request. </p>
     */
    inline void SetMetrics(Aws::Vector<Metric>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The metrics that match your request. </p>
     */
    inline ListMetricsResult& WithMetrics(const Aws::Vector<Metric>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics that match your request. </p>
     */
    inline ListMetricsResult& WithMetrics(Aws::Vector<Metric>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics that match your request. </p>
     */
    inline ListMetricsResult& AddMetrics(const Metric& value) { m_metrics.push_back(value); return *this; }

    /**
     * <p>The metrics that match your request. </p>
     */
    inline ListMetricsResult& AddMetrics(Metric&& value) { m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline ListMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline ListMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results. </p>
     */
    inline ListMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwningAccounts() const{ return m_owningAccounts; }

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline void SetOwningAccounts(const Aws::Vector<Aws::String>& value) { m_owningAccounts = value; }

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline void SetOwningAccounts(Aws::Vector<Aws::String>&& value) { m_owningAccounts = std::move(value); }

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline ListMetricsResult& WithOwningAccounts(const Aws::Vector<Aws::String>& value) { SetOwningAccounts(value); return *this;}

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline ListMetricsResult& WithOwningAccounts(Aws::Vector<Aws::String>&& value) { SetOwningAccounts(std::move(value)); return *this;}

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline ListMetricsResult& AddOwningAccounts(const Aws::String& value) { m_owningAccounts.push_back(value); return *this; }

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline ListMetricsResult& AddOwningAccounts(Aws::String&& value) { m_owningAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>If you are using this operation in a monitoring account, this array contains
     * the account IDs of the source accounts where the metrics in the returned data
     * are from.</p> <p>This field is a 1:1 mapping between each metric that is
     * returned and the ID of the owning account.</p>
     */
    inline ListMetricsResult& AddOwningAccounts(const char* value) { m_owningAccounts.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListMetricsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListMetricsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Metric> m_metrics;

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_owningAccounts;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
