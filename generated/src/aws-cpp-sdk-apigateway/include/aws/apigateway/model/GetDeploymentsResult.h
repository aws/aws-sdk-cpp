﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/Deployment.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a collection resource that contains zero or more references to
   * your existing deployments, and links that guide you on how to interact with your
   * collection. The collection offers a paginated view of the contained
   * deployments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployments">AWS
   * API Reference</a></p>
   */
  class GetDeploymentsResult
  {
  public:
    AWS_APIGATEWAY_API GetDeploymentsResult() = default;
    AWS_APIGATEWAY_API GetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const { return m_position; }
    template<typename PositionT = Aws::String>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::String>
    GetDeploymentsResult& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<Deployment>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<Deployment>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Deployment>>
    GetDeploymentsResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Deployment>
    GetDeploymentsResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    Aws::Vector<Deployment> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
