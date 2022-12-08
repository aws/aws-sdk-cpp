/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayTaskEntry.h>
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
  class ListWirelessGatewayTaskDefinitionsResult
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult();
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListWirelessGatewayTaskDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of task definitions.</p>
     */
    inline const Aws::Vector<UpdateWirelessGatewayTaskEntry>& GetTaskDefinitions() const{ return m_taskDefinitions; }

    /**
     * <p>The list of task definitions.</p>
     */
    inline void SetTaskDefinitions(const Aws::Vector<UpdateWirelessGatewayTaskEntry>& value) { m_taskDefinitions = value; }

    /**
     * <p>The list of task definitions.</p>
     */
    inline void SetTaskDefinitions(Aws::Vector<UpdateWirelessGatewayTaskEntry>&& value) { m_taskDefinitions = std::move(value); }

    /**
     * <p>The list of task definitions.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& WithTaskDefinitions(const Aws::Vector<UpdateWirelessGatewayTaskEntry>& value) { SetTaskDefinitions(value); return *this;}

    /**
     * <p>The list of task definitions.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& WithTaskDefinitions(Aws::Vector<UpdateWirelessGatewayTaskEntry>&& value) { SetTaskDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of task definitions.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& AddTaskDefinitions(const UpdateWirelessGatewayTaskEntry& value) { m_taskDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of task definitions.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsResult& AddTaskDefinitions(UpdateWirelessGatewayTaskEntry&& value) { m_taskDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<UpdateWirelessGatewayTaskEntry> m_taskDefinitions;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
