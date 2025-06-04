/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/Vlan.h>
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
namespace EVS
{
namespace Model
{
  class ListEnvironmentVlansResult
  {
  public:
    AWS_EVS_API ListEnvironmentVlansResult() = default;
    AWS_EVS_API ListEnvironmentVlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVS_API ListEnvironmentVlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique pagination token for next page results. Make the call again using
     * this token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentVlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VLANs that are associated with the specified environment.</p>
     */
    inline const Aws::Vector<Vlan>& GetEnvironmentVlans() const { return m_environmentVlans; }
    template<typename EnvironmentVlansT = Aws::Vector<Vlan>>
    void SetEnvironmentVlans(EnvironmentVlansT&& value) { m_environmentVlansHasBeenSet = true; m_environmentVlans = std::forward<EnvironmentVlansT>(value); }
    template<typename EnvironmentVlansT = Aws::Vector<Vlan>>
    ListEnvironmentVlansResult& WithEnvironmentVlans(EnvironmentVlansT&& value) { SetEnvironmentVlans(std::forward<EnvironmentVlansT>(value)); return *this;}
    template<typename EnvironmentVlansT = Vlan>
    ListEnvironmentVlansResult& AddEnvironmentVlans(EnvironmentVlansT&& value) { m_environmentVlansHasBeenSet = true; m_environmentVlans.emplace_back(std::forward<EnvironmentVlansT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentVlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Vlan> m_environmentVlans;
    bool m_environmentVlansHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
