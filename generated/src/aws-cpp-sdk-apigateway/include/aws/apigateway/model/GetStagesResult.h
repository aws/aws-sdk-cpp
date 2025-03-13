/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/Stage.h>
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
   * <p>A list of Stage resources that are associated with the ApiKey
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stages">AWS
   * API Reference</a></p>
   */
  class GetStagesResult
  {
  public:
    AWS_APIGATEWAY_API GetStagesResult() = default;
    AWS_APIGATEWAY_API GetStagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetStagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<Stage>& GetItem() const { return m_item; }
    template<typename ItemT = Aws::Vector<Stage>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Vector<Stage>>
    GetStagesResult& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemT = Stage>
    GetStagesResult& AddItem(ItemT&& value) { m_itemHasBeenSet = true; m_item.emplace_back(std::forward<ItemT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Stage> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
