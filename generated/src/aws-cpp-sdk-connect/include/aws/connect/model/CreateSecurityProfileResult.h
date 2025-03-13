/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateSecurityProfileResult
  {
  public:
    AWS_CONNECT_API CreateSecurityProfileResult() = default;
    AWS_CONNECT_API CreateSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the security profle.</p>
     */
    inline const Aws::String& GetSecurityProfileId() const { return m_securityProfileId; }
    template<typename SecurityProfileIdT = Aws::String>
    void SetSecurityProfileId(SecurityProfileIdT&& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = std::forward<SecurityProfileIdT>(value); }
    template<typename SecurityProfileIdT = Aws::String>
    CreateSecurityProfileResult& WithSecurityProfileId(SecurityProfileIdT&& value) { SetSecurityProfileId(std::forward<SecurityProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const { return m_securityProfileArn; }
    template<typename SecurityProfileArnT = Aws::String>
    void SetSecurityProfileArn(SecurityProfileArnT&& value) { m_securityProfileArnHasBeenSet = true; m_securityProfileArn = std::forward<SecurityProfileArnT>(value); }
    template<typename SecurityProfileArnT = Aws::String>
    CreateSecurityProfileResult& WithSecurityProfileArn(SecurityProfileArnT&& value) { SetSecurityProfileArn(std::forward<SecurityProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSecurityProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileId;
    bool m_securityProfileIdHasBeenSet = false;

    Aws::String m_securityProfileArn;
    bool m_securityProfileArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
