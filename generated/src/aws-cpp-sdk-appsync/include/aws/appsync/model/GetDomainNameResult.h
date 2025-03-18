/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/DomainNameConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetDomainNameResult
  {
  public:
    AWS_APPSYNC_API GetDomainNameResult() = default;
    AWS_APPSYNC_API GetDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration for the <code>DomainName</code>.</p>
     */
    inline const DomainNameConfig& GetDomainNameConfig() const { return m_domainNameConfig; }
    template<typename DomainNameConfigT = DomainNameConfig>
    void SetDomainNameConfig(DomainNameConfigT&& value) { m_domainNameConfigHasBeenSet = true; m_domainNameConfig = std::forward<DomainNameConfigT>(value); }
    template<typename DomainNameConfigT = DomainNameConfig>
    GetDomainNameResult& WithDomainNameConfig(DomainNameConfigT&& value) { SetDomainNameConfig(std::forward<DomainNameConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainNameConfig m_domainNameConfig;
    bool m_domainNameConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
