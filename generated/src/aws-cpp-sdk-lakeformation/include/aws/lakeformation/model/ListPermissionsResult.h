/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/PrincipalResourcePermissions.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListPermissionsResult
  {
  public:
    AWS_LAKEFORMATION_API ListPermissionsResult() = default;
    AWS_LAKEFORMATION_API ListPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of principals and their permissions on the resource for the specified
     * principal and resource types.</p>
     */
    inline const Aws::Vector<PrincipalResourcePermissions>& GetPrincipalResourcePermissions() const { return m_principalResourcePermissions; }
    template<typename PrincipalResourcePermissionsT = Aws::Vector<PrincipalResourcePermissions>>
    void SetPrincipalResourcePermissions(PrincipalResourcePermissionsT&& value) { m_principalResourcePermissionsHasBeenSet = true; m_principalResourcePermissions = std::forward<PrincipalResourcePermissionsT>(value); }
    template<typename PrincipalResourcePermissionsT = Aws::Vector<PrincipalResourcePermissions>>
    ListPermissionsResult& WithPrincipalResourcePermissions(PrincipalResourcePermissionsT&& value) { SetPrincipalResourcePermissions(std::forward<PrincipalResourcePermissionsT>(value)); return *this;}
    template<typename PrincipalResourcePermissionsT = PrincipalResourcePermissions>
    ListPermissionsResult& AddPrincipalResourcePermissions(PrincipalResourcePermissionsT&& value) { m_principalResourcePermissionsHasBeenSet = true; m_principalResourcePermissions.emplace_back(std::forward<PrincipalResourcePermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PrincipalResourcePermissions> m_principalResourcePermissions;
    bool m_principalResourcePermissionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
