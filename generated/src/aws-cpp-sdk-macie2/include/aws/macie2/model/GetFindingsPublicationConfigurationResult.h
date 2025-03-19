/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SecurityHubConfiguration.h>
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
namespace Macie2
{
namespace Model
{
  class GetFindingsPublicationConfigurationResult
  {
  public:
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult() = default;
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingsPublicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration settings that determine which findings are published to
     * Security Hub.</p>
     */
    inline const SecurityHubConfiguration& GetSecurityHubConfiguration() const { return m_securityHubConfiguration; }
    template<typename SecurityHubConfigurationT = SecurityHubConfiguration>
    void SetSecurityHubConfiguration(SecurityHubConfigurationT&& value) { m_securityHubConfigurationHasBeenSet = true; m_securityHubConfiguration = std::forward<SecurityHubConfigurationT>(value); }
    template<typename SecurityHubConfigurationT = SecurityHubConfiguration>
    GetFindingsPublicationConfigurationResult& WithSecurityHubConfiguration(SecurityHubConfigurationT&& value) { SetSecurityHubConfiguration(std::forward<SecurityHubConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsPublicationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SecurityHubConfiguration m_securityHubConfiguration;
    bool m_securityHubConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
