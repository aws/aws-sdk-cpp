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
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult() = default;
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWirelessGatewayTaskDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of task definitions.</p>
     */
    inline const Aws::Vector<UpdateWirelessGatewayTaskEntry>& GetTaskDefinitions() const { return m_taskDefinitions; }
    template<typename TaskDefinitionsT = Aws::Vector<UpdateWirelessGatewayTaskEntry>>
    void SetTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions = std::forward<TaskDefinitionsT>(value); }
    template<typename TaskDefinitionsT = Aws::Vector<UpdateWirelessGatewayTaskEntry>>
    ListWirelessGatewayTaskDefinitionsResult& WithTaskDefinitions(TaskDefinitionsT&& value) { SetTaskDefinitions(std::forward<TaskDefinitionsT>(value)); return *this;}
    template<typename TaskDefinitionsT = UpdateWirelessGatewayTaskEntry>
    ListWirelessGatewayTaskDefinitionsResult& AddTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions.emplace_back(std::forward<TaskDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWirelessGatewayTaskDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<UpdateWirelessGatewayTaskEntry> m_taskDefinitions;
    bool m_taskDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
