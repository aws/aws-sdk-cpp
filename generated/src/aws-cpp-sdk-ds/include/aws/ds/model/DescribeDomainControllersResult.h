/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DomainController.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeDomainControllersResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline const Aws::Vector<DomainController>& GetDomainControllers() const { return m_domainControllers; }
    template<typename DomainControllersT = Aws::Vector<DomainController>>
    void SetDomainControllers(DomainControllersT&& value) { m_domainControllersHasBeenSet = true; m_domainControllers = std::forward<DomainControllersT>(value); }
    template<typename DomainControllersT = Aws::Vector<DomainController>>
    DescribeDomainControllersResult& WithDomainControllers(DomainControllersT&& value) { SetDomainControllers(std::forward<DomainControllersT>(value)); return *this;}
    template<typename DomainControllersT = DomainController>
    DescribeDomainControllersResult& AddDomainControllers(DomainControllersT&& value) { m_domainControllersHasBeenSet = true; m_domainControllers.emplace_back(std::forward<DomainControllersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDomainControllersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainControllersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainController> m_domainControllers;
    bool m_domainControllersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
