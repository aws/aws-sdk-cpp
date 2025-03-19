/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class GetServiceRoleForAccountResult
  {
  public:
    AWS_GREENGRASS_API GetServiceRoleForAccountResult() = default;
    AWS_GREENGRASS_API GetServiceRoleForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetServiceRoleForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The time when the service role was associated with the account.
     */
    inline const Aws::String& GetAssociatedAt() const { return m_associatedAt; }
    template<typename AssociatedAtT = Aws::String>
    void SetAssociatedAt(AssociatedAtT&& value) { m_associatedAtHasBeenSet = true; m_associatedAt = std::forward<AssociatedAtT>(value); }
    template<typename AssociatedAtT = Aws::String>
    GetServiceRoleForAccountResult& WithAssociatedAt(AssociatedAtT&& value) { SetAssociatedAt(std::forward<AssociatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the role which is associated with the account.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetServiceRoleForAccountResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceRoleForAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associatedAt;
    bool m_associatedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
