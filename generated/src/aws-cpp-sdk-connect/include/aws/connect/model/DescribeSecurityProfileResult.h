/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SecurityProfile.h>
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
namespace Connect
{
namespace Model
{
  class DescribeSecurityProfileResult
  {
  public:
    AWS_CONNECT_API DescribeSecurityProfileResult() = default;
    AWS_CONNECT_API DescribeSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The security profile.</p>
     */
    inline const SecurityProfile& GetSecurityProfile() const { return m_securityProfile; }
    template<typename SecurityProfileT = SecurityProfile>
    void SetSecurityProfile(SecurityProfileT&& value) { m_securityProfileHasBeenSet = true; m_securityProfile = std::forward<SecurityProfileT>(value); }
    template<typename SecurityProfileT = SecurityProfile>
    DescribeSecurityProfileResult& WithSecurityProfile(SecurityProfileT&& value) { SetSecurityProfile(std::forward<SecurityProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSecurityProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SecurityProfile m_securityProfile;
    bool m_securityProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
