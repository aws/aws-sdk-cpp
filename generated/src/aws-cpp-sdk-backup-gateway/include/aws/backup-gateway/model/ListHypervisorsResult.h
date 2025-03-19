/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/Hypervisor.h>
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
  class ListHypervisorsResult
  {
  public:
    AWS_BACKUPGATEWAY_API ListHypervisorsResult() = default;
    AWS_BACKUPGATEWAY_API ListHypervisorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API ListHypervisorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of your <code>Hypervisor</code> objects, ordered by their Amazon
     * Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Hypervisor>& GetHypervisors() const { return m_hypervisors; }
    template<typename HypervisorsT = Aws::Vector<Hypervisor>>
    void SetHypervisors(HypervisorsT&& value) { m_hypervisorsHasBeenSet = true; m_hypervisors = std::forward<HypervisorsT>(value); }
    template<typename HypervisorsT = Aws::Vector<Hypervisor>>
    ListHypervisorsResult& WithHypervisors(HypervisorsT&& value) { SetHypervisors(std::forward<HypervisorsT>(value)); return *this;}
    template<typename HypervisorsT = Hypervisor>
    ListHypervisorsResult& AddHypervisors(HypervisorsT&& value) { m_hypervisorsHasBeenSet = true; m_hypervisors.emplace_back(std::forward<HypervisorsT>(value)); return *this; }
    ///@}

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
    ListHypervisorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHypervisorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Hypervisor> m_hypervisors;
    bool m_hypervisorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
