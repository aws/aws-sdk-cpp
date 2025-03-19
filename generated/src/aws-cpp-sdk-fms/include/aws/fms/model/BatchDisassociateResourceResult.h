/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/FailedItem.h>
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
namespace FMS
{
namespace Model
{
  class BatchDisassociateResourceResult
  {
  public:
    AWS_FMS_API BatchDisassociateResourceResult() = default;
    AWS_FMS_API BatchDisassociateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API BatchDisassociateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the resource set, used in a request to refer to the
     * resource set.</p>
     */
    inline const Aws::String& GetResourceSetIdentifier() const { return m_resourceSetIdentifier; }
    template<typename ResourceSetIdentifierT = Aws::String>
    void SetResourceSetIdentifier(ResourceSetIdentifierT&& value) { m_resourceSetIdentifierHasBeenSet = true; m_resourceSetIdentifier = std::forward<ResourceSetIdentifierT>(value); }
    template<typename ResourceSetIdentifierT = Aws::String>
    BatchDisassociateResourceResult& WithResourceSetIdentifier(ResourceSetIdentifierT&& value) { SetResourceSetIdentifier(std::forward<ResourceSetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline const Aws::Vector<FailedItem>& GetFailedItems() const { return m_failedItems; }
    template<typename FailedItemsT = Aws::Vector<FailedItem>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Vector<FailedItem>>
    BatchDisassociateResourceResult& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsT = FailedItem>
    BatchDisassociateResourceResult& AddFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems.emplace_back(std::forward<FailedItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDisassociateResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceSetIdentifier;
    bool m_resourceSetIdentifierHasBeenSet = false;

    Aws::Vector<FailedItem> m_failedItems;
    bool m_failedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
