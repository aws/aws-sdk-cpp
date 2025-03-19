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
  class UpdateAuthorizerResult
  {
  public:
    AWS_IOT_API UpdateAuthorizerResult() = default;
    AWS_IOT_API UpdateAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const { return m_authorizerArn; }
    template<typename AuthorizerArnT = Aws::String>
    void SetAuthorizerArn(AuthorizerArnT&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::forward<AuthorizerArnT>(value); }
    template<typename AuthorizerArnT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerArn(AuthorizerArnT&& value) { SetAuthorizerArn(std::forward<AuthorizerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;

    Aws::String m_authorizerArn;
    bool m_authorizerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
