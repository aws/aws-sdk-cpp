/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileIdentifier.h>
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
namespace IoT
{
namespace Model
{
  class ListSecurityProfilesResult
  {
  public:
    AWS_IOT_API ListSecurityProfilesResult() = default;
    AWS_IOT_API ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline const Aws::Vector<SecurityProfileIdentifier>& GetSecurityProfileIdentifiers() const { return m_securityProfileIdentifiers; }
    template<typename SecurityProfileIdentifiersT = Aws::Vector<SecurityProfileIdentifier>>
    void SetSecurityProfileIdentifiers(SecurityProfileIdentifiersT&& value) { m_securityProfileIdentifiersHasBeenSet = true; m_securityProfileIdentifiers = std::forward<SecurityProfileIdentifiersT>(value); }
    template<typename SecurityProfileIdentifiersT = Aws::Vector<SecurityProfileIdentifier>>
    ListSecurityProfilesResult& WithSecurityProfileIdentifiers(SecurityProfileIdentifiersT&& value) { SetSecurityProfileIdentifiers(std::forward<SecurityProfileIdentifiersT>(value)); return *this;}
    template<typename SecurityProfileIdentifiersT = SecurityProfileIdentifier>
    ListSecurityProfilesResult& AddSecurityProfileIdentifiers(SecurityProfileIdentifiersT&& value) { m_securityProfileIdentifiersHasBeenSet = true; m_securityProfileIdentifiers.emplace_back(std::forward<SecurityProfileIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileIdentifier> m_securityProfileIdentifiers;
    bool m_securityProfileIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
