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
    AWS_KAFKACONNECT_API ListCustomPluginsResult();
    AWS_KAFKACONNECT_API ListCustomPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListCustomPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline const Aws::Vector<CustomPluginSummary>& GetCustomPlugins() const{ return m_customPlugins; }

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline void SetCustomPlugins(const Aws::Vector<CustomPluginSummary>& value) { m_customPlugins = value; }

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline void SetCustomPlugins(Aws::Vector<CustomPluginSummary>&& value) { m_customPlugins = std::move(value); }

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline ListCustomPluginsResult& WithCustomPlugins(const Aws::Vector<CustomPluginSummary>& value) { SetCustomPlugins(value); return *this;}

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline ListCustomPluginsResult& WithCustomPlugins(Aws::Vector<CustomPluginSummary>&& value) { SetCustomPlugins(std::move(value)); return *this;}

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline ListCustomPluginsResult& AddCustomPlugins(const CustomPluginSummary& value) { m_customPlugins.push_back(value); return *this; }

    /**
     * <p>An array of custom plugin descriptions.</p>
     */
    inline ListCustomPluginsResult& AddCustomPlugins(CustomPluginSummary&& value) { m_customPlugins.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListCustomPluginsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListCustomPluginsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a ListCustomPlugins operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListCustomPluginsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomPluginSummary> m_customPlugins;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
