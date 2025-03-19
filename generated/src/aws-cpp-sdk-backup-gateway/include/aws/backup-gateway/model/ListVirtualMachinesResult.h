/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/VirtualMachine.h>
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
namespace BackupGateway
{
namespace Model
{
  class ListVirtualMachinesResult
  {
  public:
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult() = default;
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API ListVirtualMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualMachinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of your <code>VirtualMachine</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<VirtualMachine>& GetVirtualMachines() const { return m_virtualMachines; }
    template<typename VirtualMachinesT = Aws::Vector<VirtualMachine>>
    void SetVirtualMachines(VirtualMachinesT&& value) { m_virtualMachinesHasBeenSet = true; m_virtualMachines = std::forward<VirtualMachinesT>(value); }
    template<typename VirtualMachinesT = Aws::Vector<VirtualMachine>>
    ListVirtualMachinesResult& WithVirtualMachines(VirtualMachinesT&& value) { SetVirtualMachines(std::forward<VirtualMachinesT>(value)); return *this;}
    template<typename VirtualMachinesT = VirtualMachine>
    ListVirtualMachinesResult& AddVirtualMachines(VirtualMachinesT&& value) { m_virtualMachinesHasBeenSet = true; m_virtualMachines.emplace_back(std::forward<VirtualMachinesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualMachinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VirtualMachine> m_virtualMachines;
    bool m_virtualMachinesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
