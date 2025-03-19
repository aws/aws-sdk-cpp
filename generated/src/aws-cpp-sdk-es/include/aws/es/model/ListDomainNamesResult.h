/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/DomainInfo.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>ListDomainNames</code> operation. Contains the names of
   * all domains owned by this account and their respective engine
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of domain names and respective engine types.</p>
     */
    inline const Aws::Vector<DomainInfo>& GetDomainNames() const { return m_domainNames; }
    template<typename DomainNamesT = Aws::Vector<DomainInfo>>
    void SetDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::forward<DomainNamesT>(value); }
    template<typename DomainNamesT = Aws::Vector<DomainInfo>>
    ListDomainNamesResult& WithDomainNames(DomainNamesT&& value) { SetDomainNames(std::forward<DomainNamesT>(value)); return *this;}
    template<typename DomainNamesT = DomainInfo>
    ListDomainNamesResult& AddDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames.emplace_back(std::forward<DomainNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainNamesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainInfo> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
