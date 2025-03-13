/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class BatchAssociateResourceRequest : public FMSRequest
  {
  public:
    AWS_FMS_API BatchAssociateResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateResource"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the resource set, used in a request to refer to the
     * resource set.</p>
     */
    inline const Aws::String& GetResourceSetIdentifier() const { return m_resourceSetIdentifier; }
    inline bool ResourceSetIdentifierHasBeenSet() const { return m_resourceSetIdentifierHasBeenSet; }
    template<typename ResourceSetIdentifierT = Aws::String>
    void SetResourceSetIdentifier(ResourceSetIdentifierT&& value) { m_resourceSetIdentifierHasBeenSet = true; m_resourceSetIdentifier = std::forward<ResourceSetIdentifierT>(value); }
    template<typename ResourceSetIdentifierT = Aws::String>
    BatchAssociateResourceRequest& WithResourceSetIdentifier(ResourceSetIdentifierT&& value) { SetResourceSetIdentifier(std::forward<ResourceSetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifiers (URIs) of resources that should be
     * associated to the resource set. The URIs must be Amazon Resource Names
     * (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Aws::String>>
    BatchAssociateResourceRequest& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Aws::String>
    BatchAssociateResourceRequest& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceSetIdentifier;
    bool m_resourceSetIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
