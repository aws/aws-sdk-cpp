/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SecurityConfiguration.h>
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
namespace Glue
{
namespace Model
{
  class GetSecurityConfigurationsResult
  {
  public:
    AWS_GLUE_API GetSecurityConfigurationsResult() = default;
    AWS_GLUE_API GetSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of security configurations.</p>
     */
    inline const Aws::Vector<SecurityConfiguration>& GetSecurityConfigurations() const { return m_securityConfigurations; }
    template<typename SecurityConfigurationsT = Aws::Vector<SecurityConfiguration>>
    void SetSecurityConfigurations(SecurityConfigurationsT&& value) { m_securityConfigurationsHasBeenSet = true; m_securityConfigurations = std::forward<SecurityConfigurationsT>(value); }
    template<typename SecurityConfigurationsT = Aws::Vector<SecurityConfiguration>>
    GetSecurityConfigurationsResult& WithSecurityConfigurations(SecurityConfigurationsT&& value) { SetSecurityConfigurations(std::forward<SecurityConfigurationsT>(value)); return *this;}
    template<typename SecurityConfigurationsT = SecurityConfiguration>
    GetSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfigurationsT&& value) { m_securityConfigurationsHasBeenSet = true; m_securityConfigurations.emplace_back(std::forward<SecurityConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSecurityConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSecurityConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityConfiguration> m_securityConfigurations;
    bool m_securityConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
