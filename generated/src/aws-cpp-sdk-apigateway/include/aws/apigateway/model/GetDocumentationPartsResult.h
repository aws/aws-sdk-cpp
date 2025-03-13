/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/DocumentationPart.h>
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
   * <p>The collection of documentation parts of an API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationParts">AWS
   * API Reference</a></p>
   */
  class GetDocumentationPartsResult
  {
  public:
    AWS_APIGATEWAY_API GetDocumentationPartsResult() = default;
    AWS_APIGATEWAY_API GetDocumentationPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetDocumentationPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const { return m_position; }
    template<typename PositionT = Aws::String>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::String>
    GetDocumentationPartsResult& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<DocumentationPart>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<DocumentationPart>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<DocumentationPart>>
    GetDocumentationPartsResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = DocumentationPart>
    GetDocumentationPartsResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDocumentationPartsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    Aws::Vector<DocumentationPart> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
