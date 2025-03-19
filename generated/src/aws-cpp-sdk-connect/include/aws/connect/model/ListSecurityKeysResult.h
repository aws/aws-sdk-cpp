/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityKey.h>
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
  class ListSecurityKeysResult
  {
  public:
    AWS_CONNECT_API ListSecurityKeysResult() = default;
    AWS_CONNECT_API ListSecurityKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The security keys.</p>
     */
    inline const Aws::Vector<SecurityKey>& GetSecurityKeys() const { return m_securityKeys; }
    template<typename SecurityKeysT = Aws::Vector<SecurityKey>>
    void SetSecurityKeys(SecurityKeysT&& value) { m_securityKeysHasBeenSet = true; m_securityKeys = std::forward<SecurityKeysT>(value); }
    template<typename SecurityKeysT = Aws::Vector<SecurityKey>>
    ListSecurityKeysResult& WithSecurityKeys(SecurityKeysT&& value) { SetSecurityKeys(std::forward<SecurityKeysT>(value)); return *this;}
    template<typename SecurityKeysT = SecurityKey>
    ListSecurityKeysResult& AddSecurityKeys(SecurityKeysT&& value) { m_securityKeysHasBeenSet = true; m_securityKeys.emplace_back(std::forward<SecurityKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityKey> m_securityKeys;
    bool m_securityKeysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
