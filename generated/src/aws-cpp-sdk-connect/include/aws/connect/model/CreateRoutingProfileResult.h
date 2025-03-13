/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateRoutingProfileResult
  {
  public:
    AWS_CONNECT_API CreateRoutingProfileResult() = default;
    AWS_CONNECT_API CreateRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const { return m_routingProfileArn; }
    template<typename RoutingProfileArnT = Aws::String>
    void SetRoutingProfileArn(RoutingProfileArnT&& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = std::forward<RoutingProfileArnT>(value); }
    template<typename RoutingProfileArnT = Aws::String>
    CreateRoutingProfileResult& WithRoutingProfileArn(RoutingProfileArnT&& value) { SetRoutingProfileArn(std::forward<RoutingProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    CreateRoutingProfileResult& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRoutingProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routingProfileArn;
    bool m_routingProfileArnHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
