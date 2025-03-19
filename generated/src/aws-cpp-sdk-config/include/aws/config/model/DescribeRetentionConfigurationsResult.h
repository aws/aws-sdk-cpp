/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RetentionConfiguration.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeRetentionConfigurationsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult() = default;
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const Aws::Vector<RetentionConfiguration>& GetRetentionConfigurations() const { return m_retentionConfigurations; }
    template<typename RetentionConfigurationsT = Aws::Vector<RetentionConfiguration>>
    void SetRetentionConfigurations(RetentionConfigurationsT&& value) { m_retentionConfigurationsHasBeenSet = true; m_retentionConfigurations = std::forward<RetentionConfigurationsT>(value); }
    template<typename RetentionConfigurationsT = Aws::Vector<RetentionConfiguration>>
    DescribeRetentionConfigurationsResult& WithRetentionConfigurations(RetentionConfigurationsT&& value) { SetRetentionConfigurations(std::forward<RetentionConfigurationsT>(value)); return *this;}
    template<typename RetentionConfigurationsT = RetentionConfiguration>
    DescribeRetentionConfigurationsResult& AddRetentionConfigurations(RetentionConfigurationsT&& value) { m_retentionConfigurationsHasBeenSet = true; m_retentionConfigurations.emplace_back(std::forward<RetentionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRetentionConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRetentionConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RetentionConfiguration> m_retentionConfigurations;
    bool m_retentionConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
