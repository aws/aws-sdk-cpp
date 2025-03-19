/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuthorizerDescription.h>
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
  class DescribeAuthorizerResult
  {
  public:
    AWS_IOT_API DescribeAuthorizerResult() = default;
    AWS_IOT_API DescribeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authorizer description.</p>
     */
    inline const AuthorizerDescription& GetAuthorizerDescription() const { return m_authorizerDescription; }
    template<typename AuthorizerDescriptionT = AuthorizerDescription>
    void SetAuthorizerDescription(AuthorizerDescriptionT&& value) { m_authorizerDescriptionHasBeenSet = true; m_authorizerDescription = std::forward<AuthorizerDescriptionT>(value); }
    template<typename AuthorizerDescriptionT = AuthorizerDescription>
    DescribeAuthorizerResult& WithAuthorizerDescription(AuthorizerDescriptionT&& value) { SetAuthorizerDescription(std::forward<AuthorizerDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthorizerDescription m_authorizerDescription;
    bool m_authorizerDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
