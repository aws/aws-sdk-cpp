/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginSummary.h>
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
namespace KafkaConnect
{
namespace Model
{
  class ListCustomPluginsResult
  {
  public:
    AWS_KAFKACONNECT_API ListCustomPluginsResult() = default;
    AWS_KAFKACONNECT_API ListCustomPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListCustomPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline const Aws::Vector<CustomPluginSummary>& GetCustomPlugins() const { return m_customPlugins; }
    template<typename CustomPluginsT = Aws::Vector<CustomPluginSummary>>
    void SetCustomPlugins(CustomPluginsT&& value) { m_customPluginsHasBeenSet = true; m_customPlugins = std::forward<CustomPluginsT>(value); }
    template<typename CustomPluginsT = Aws::Vector<CustomPluginSummary>>
    ListCustomPluginsResult& WithCustomPlugins(CustomPluginsT&& value) { SetCustomPlugins(std::forward<CustomPluginsT>(value)); return *this;}
    template<typename CustomPluginsT = CustomPluginSummary>
    ListCustomPluginsResult& AddCustomPlugins(CustomPluginsT&& value) { m_customPluginsHasBeenSet = true; m_customPlugins.emplace_back(std::forward<CustomPluginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomPluginsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomPluginsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomPluginSummary> m_customPlugins;
    bool m_customPluginsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
