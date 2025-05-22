/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/QueryLoggingConfigurationMetadata.h>
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
namespace PrometheusService
{
namespace Model
{
  class DescribeQueryLoggingConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeQueryLoggingConfigurationResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeQueryLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeQueryLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed information about the query logging configuration for the
     * specified workspace.</p>
     */
    inline const QueryLoggingConfigurationMetadata& GetQueryLoggingConfiguration() const { return m_queryLoggingConfiguration; }
    template<typename QueryLoggingConfigurationT = QueryLoggingConfigurationMetadata>
    void SetQueryLoggingConfiguration(QueryLoggingConfigurationT&& value) { m_queryLoggingConfigurationHasBeenSet = true; m_queryLoggingConfiguration = std::forward<QueryLoggingConfigurationT>(value); }
    template<typename QueryLoggingConfigurationT = QueryLoggingConfigurationMetadata>
    DescribeQueryLoggingConfigurationResult& WithQueryLoggingConfiguration(QueryLoggingConfigurationT&& value) { SetQueryLoggingConfiguration(std::forward<QueryLoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQueryLoggingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryLoggingConfigurationMetadata m_queryLoggingConfiguration;
    bool m_queryLoggingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
