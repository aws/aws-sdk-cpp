/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileTarget.h>
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
  class ListTargetsForSecurityProfileResult
  {
  public:
    AWS_IOT_API ListTargetsForSecurityProfileResult() = default;
    AWS_IOT_API ListTargetsForSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListTargetsForSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The thing groups to which the security profile is attached.</p>
     */
    inline const Aws::Vector<SecurityProfileTarget>& GetSecurityProfileTargets() const { return m_securityProfileTargets; }
    template<typename SecurityProfileTargetsT = Aws::Vector<SecurityProfileTarget>>
    void SetSecurityProfileTargets(SecurityProfileTargetsT&& value) { m_securityProfileTargetsHasBeenSet = true; m_securityProfileTargets = std::forward<SecurityProfileTargetsT>(value); }
    template<typename SecurityProfileTargetsT = Aws::Vector<SecurityProfileTarget>>
    ListTargetsForSecurityProfileResult& WithSecurityProfileTargets(SecurityProfileTargetsT&& value) { SetSecurityProfileTargets(std::forward<SecurityProfileTargetsT>(value)); return *this;}
    template<typename SecurityProfileTargetsT = SecurityProfileTarget>
    ListTargetsForSecurityProfileResult& AddSecurityProfileTargets(SecurityProfileTargetsT&& value) { m_securityProfileTargetsHasBeenSet = true; m_securityProfileTargets.emplace_back(std::forward<SecurityProfileTargetsT>(value)); return *this; }
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
    ListTargetsForSecurityProfileResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTargetsForSecurityProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileTarget> m_securityProfileTargets;
    bool m_securityProfileTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
