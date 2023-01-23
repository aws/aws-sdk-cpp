/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/NetworkAnalyzerConfigurations.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListNetworkAnalyzerConfigurationsResult
  {
  public:
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult();
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline const Aws::Vector<NetworkAnalyzerConfigurations>& GetNetworkAnalyzerConfigurationList() const{ return m_networkAnalyzerConfigurationList; }

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline void SetNetworkAnalyzerConfigurationList(const Aws::Vector<NetworkAnalyzerConfigurations>& value) { m_networkAnalyzerConfigurationList = value; }

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline void SetNetworkAnalyzerConfigurationList(Aws::Vector<NetworkAnalyzerConfigurations>&& value) { m_networkAnalyzerConfigurationList = std::move(value); }

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& WithNetworkAnalyzerConfigurationList(const Aws::Vector<NetworkAnalyzerConfigurations>& value) { SetNetworkAnalyzerConfigurationList(value); return *this;}

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& WithNetworkAnalyzerConfigurationList(Aws::Vector<NetworkAnalyzerConfigurations>&& value) { SetNetworkAnalyzerConfigurationList(std::move(value)); return *this;}

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& AddNetworkAnalyzerConfigurationList(const NetworkAnalyzerConfigurations& value) { m_networkAnalyzerConfigurationList.push_back(value); return *this; }

    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline ListNetworkAnalyzerConfigurationsResult& AddNetworkAnalyzerConfigurationList(NetworkAnalyzerConfigurations&& value) { m_networkAnalyzerConfigurationList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<NetworkAnalyzerConfigurations> m_networkAnalyzerConfigurationList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
