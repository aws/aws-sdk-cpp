/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceUser.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class DescribeAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserResult() = default;
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline const AppInstanceUser& GetAppInstanceUser() const { return m_appInstanceUser; }
    template<typename AppInstanceUserT = AppInstanceUser>
    void SetAppInstanceUser(AppInstanceUserT&& value) { m_appInstanceUserHasBeenSet = true; m_appInstanceUser = std::forward<AppInstanceUserT>(value); }
    template<typename AppInstanceUserT = AppInstanceUser>
    DescribeAppInstanceUserResult& WithAppInstanceUser(AppInstanceUserT&& value) { SetAppInstanceUser(std::forward<AppInstanceUserT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppInstanceUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstanceUser m_appInstanceUser;
    bool m_appInstanceUserHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
