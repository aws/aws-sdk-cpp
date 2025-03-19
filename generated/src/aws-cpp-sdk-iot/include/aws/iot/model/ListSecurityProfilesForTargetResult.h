/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileTargetMapping.h>
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
  class ListSecurityProfilesForTargetResult
  {
  public:
    AWS_IOT_API ListSecurityProfilesForTargetResult() = default;
    AWS_IOT_API ListSecurityProfilesForTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListSecurityProfilesForTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline const Aws::Vector<SecurityProfileTargetMapping>& GetSecurityProfileTargetMappings() const { return m_securityProfileTargetMappings; }
    template<typename SecurityProfileTargetMappingsT = Aws::Vector<SecurityProfileTargetMapping>>
    void SetSecurityProfileTargetMappings(SecurityProfileTargetMappingsT&& value) { m_securityProfileTargetMappingsHasBeenSet = true; m_securityProfileTargetMappings = std::forward<SecurityProfileTargetMappingsT>(value); }
    template<typename SecurityProfileTargetMappingsT = Aws::Vector<SecurityProfileTargetMapping>>
    ListSecurityProfilesForTargetResult& WithSecurityProfileTargetMappings(SecurityProfileTargetMappingsT&& value) { SetSecurityProfileTargetMappings(std::forward<SecurityProfileTargetMappingsT>(value)); return *this;}
    template<typename SecurityProfileTargetMappingsT = SecurityProfileTargetMapping>
    ListSecurityProfilesForTargetResult& AddSecurityProfileTargetMappings(SecurityProfileTargetMappingsT&& value) { m_securityProfileTargetMappingsHasBeenSet = true; m_securityProfileTargetMappings.emplace_back(std::forward<SecurityProfileTargetMappingsT>(value)); return *this; }
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
    ListSecurityProfilesForTargetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityProfilesForTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileTargetMapping> m_securityProfileTargetMappings;
    bool m_securityProfileTargetMappingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
