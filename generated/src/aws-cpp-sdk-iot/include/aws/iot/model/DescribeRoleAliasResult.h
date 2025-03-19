/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/RoleAliasDescription.h>
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
  class DescribeRoleAliasResult
  {
  public:
    AWS_IOT_API DescribeRoleAliasResult() = default;
    AWS_IOT_API DescribeRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The role alias description.</p>
     */
    inline const RoleAliasDescription& GetRoleAliasDescription() const { return m_roleAliasDescription; }
    template<typename RoleAliasDescriptionT = RoleAliasDescription>
    void SetRoleAliasDescription(RoleAliasDescriptionT&& value) { m_roleAliasDescriptionHasBeenSet = true; m_roleAliasDescription = std::forward<RoleAliasDescriptionT>(value); }
    template<typename RoleAliasDescriptionT = RoleAliasDescription>
    DescribeRoleAliasResult& WithRoleAliasDescription(RoleAliasDescriptionT&& value) { SetRoleAliasDescription(std::forward<RoleAliasDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRoleAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RoleAliasDescription m_roleAliasDescription;
    bool m_roleAliasDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
