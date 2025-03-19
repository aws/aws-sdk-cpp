/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{
  class ListRoleAliasesResult
  {
  public:
    AWS_IOT_API ListRoleAliasesResult() = default;
    AWS_IOT_API ListRoleAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListRoleAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The role aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleAliases() const { return m_roleAliases; }
    template<typename RoleAliasesT = Aws::Vector<Aws::String>>
    void SetRoleAliases(RoleAliasesT&& value) { m_roleAliasesHasBeenSet = true; m_roleAliases = std::forward<RoleAliasesT>(value); }
    template<typename RoleAliasesT = Aws::Vector<Aws::String>>
    ListRoleAliasesResult& WithRoleAliases(RoleAliasesT&& value) { SetRoleAliases(std::forward<RoleAliasesT>(value)); return *this;}
    template<typename RoleAliasesT = Aws::String>
    ListRoleAliasesResult& AddRoleAliases(RoleAliasesT&& value) { m_roleAliasesHasBeenSet = true; m_roleAliases.emplace_back(std::forward<RoleAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListRoleAliasesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoleAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_roleAliases;
    bool m_roleAliasesHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
