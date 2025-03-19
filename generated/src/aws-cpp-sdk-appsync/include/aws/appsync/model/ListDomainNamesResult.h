/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DomainNameConfig.h>
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
namespace AppSync
{
namespace Model
{
  class ListDomainNamesResult
  {
  public:
    AWS_APPSYNC_API ListDomainNamesResult() = default;
    AWS_APPSYNC_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists configurations for multiple domain names.</p>
     */
    inline const Aws::Vector<DomainNameConfig>& GetDomainNameConfigs() const { return m_domainNameConfigs; }
    template<typename DomainNameConfigsT = Aws::Vector<DomainNameConfig>>
    void SetDomainNameConfigs(DomainNameConfigsT&& value) { m_domainNameConfigsHasBeenSet = true; m_domainNameConfigs = std::forward<DomainNameConfigsT>(value); }
    template<typename DomainNameConfigsT = Aws::Vector<DomainNameConfig>>
    ListDomainNamesResult& WithDomainNameConfigs(DomainNameConfigsT&& value) { SetDomainNameConfigs(std::forward<DomainNameConfigsT>(value)); return *this;}
    template<typename DomainNameConfigsT = DomainNameConfig>
    ListDomainNamesResult& AddDomainNameConfigs(DomainNameConfigsT&& value) { m_domainNameConfigsHasBeenSet = true; m_domainNameConfigs.emplace_back(std::forward<DomainNameConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainNamesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainNamesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainNameConfig> m_domainNameConfigs;
    bool m_domainNameConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
