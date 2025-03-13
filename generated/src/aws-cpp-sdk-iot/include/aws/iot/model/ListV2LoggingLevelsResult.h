/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LogTargetConfiguration.h>
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
  class ListV2LoggingLevelsResult
  {
  public:
    AWS_IOT_API ListV2LoggingLevelsResult() = default;
    AWS_IOT_API ListV2LoggingLevelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListV2LoggingLevelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The logging configuration for a target.</p>
     */
    inline const Aws::Vector<LogTargetConfiguration>& GetLogTargetConfigurations() const { return m_logTargetConfigurations; }
    template<typename LogTargetConfigurationsT = Aws::Vector<LogTargetConfiguration>>
    void SetLogTargetConfigurations(LogTargetConfigurationsT&& value) { m_logTargetConfigurationsHasBeenSet = true; m_logTargetConfigurations = std::forward<LogTargetConfigurationsT>(value); }
    template<typename LogTargetConfigurationsT = Aws::Vector<LogTargetConfiguration>>
    ListV2LoggingLevelsResult& WithLogTargetConfigurations(LogTargetConfigurationsT&& value) { SetLogTargetConfigurations(std::forward<LogTargetConfigurationsT>(value)); return *this;}
    template<typename LogTargetConfigurationsT = LogTargetConfiguration>
    ListV2LoggingLevelsResult& AddLogTargetConfigurations(LogTargetConfigurationsT&& value) { m_logTargetConfigurationsHasBeenSet = true; m_logTargetConfigurations.emplace_back(std::forward<LogTargetConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListV2LoggingLevelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListV2LoggingLevelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogTargetConfiguration> m_logTargetConfigurations;
    bool m_logTargetConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
