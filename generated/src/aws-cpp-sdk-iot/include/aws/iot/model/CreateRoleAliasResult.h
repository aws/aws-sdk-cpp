/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
  class CreateRoleAliasResult
  {
  public:
    AWS_IOT_API CreateRoleAliasResult() = default;
    AWS_IOT_API CreateRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const { return m_roleAlias; }
    template<typename RoleAliasT = Aws::String>
    void SetRoleAlias(RoleAliasT&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::forward<RoleAliasT>(value); }
    template<typename RoleAliasT = Aws::String>
    CreateRoleAliasResult& WithRoleAlias(RoleAliasT&& value) { SetRoleAlias(std::forward<RoleAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role alias ARN.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const { return m_roleAliasArn; }
    template<typename RoleAliasArnT = Aws::String>
    void SetRoleAliasArn(RoleAliasArnT&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::forward<RoleAliasArnT>(value); }
    template<typename RoleAliasArnT = Aws::String>
    CreateRoleAliasResult& WithRoleAliasArn(RoleAliasArnT&& value) { SetRoleAliasArn(std::forward<RoleAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRoleAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;

    Aws::String m_roleAliasArn;
    bool m_roleAliasArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
