/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector
{
namespace Model
{
  class DescribeCrossAccountAccessRoleResult
  {
  public:
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult() = default;
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeCrossAccountAccessRoleResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Amazon Inspector to access your AWS account.</p>
     */
    inline bool GetValid() const { return m_valid; }
    inline void SetValid(bool value) { m_validHasBeenSet = true; m_valid = value; }
    inline DescribeCrossAccountAccessRoleResult& WithValid(bool value) { SetValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    DescribeCrossAccountAccessRoleResult& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCrossAccountAccessRoleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_valid{false};
    bool m_validHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt{};
    bool m_registeredAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
