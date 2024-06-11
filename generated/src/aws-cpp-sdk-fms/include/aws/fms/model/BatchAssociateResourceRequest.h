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
    AWS_FMS_API BatchAssociateResourceRequest();

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
    inline const Aws::String& GetResourceSetIdentifier() const{ return m_resourceSetIdentifier; }
    inline bool ResourceSetIdentifierHasBeenSet() const { return m_resourceSetIdentifierHasBeenSet; }
    inline void SetResourceSetIdentifier(const Aws::String& value) { m_resourceSetIdentifierHasBeenSet = true; m_resourceSetIdentifier = value; }
    inline void SetResourceSetIdentifier(Aws::String&& value) { m_resourceSetIdentifierHasBeenSet = true; m_resourceSetIdentifier = std::move(value); }
    inline void SetResourceSetIdentifier(const char* value) { m_resourceSetIdentifierHasBeenSet = true; m_resourceSetIdentifier.assign(value); }
    inline BatchAssociateResourceRequest& WithResourceSetIdentifier(const Aws::String& value) { SetResourceSetIdentifier(value); return *this;}
    inline BatchAssociateResourceRequest& WithResourceSetIdentifier(Aws::String&& value) { SetResourceSetIdentifier(std::move(value)); return *this;}
    inline BatchAssociateResourceRequest& WithResourceSetIdentifier(const char* value) { SetResourceSetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifiers (URIs) of resources that should be
     * associated to the resource set. The URIs must be Amazon Resource Names
     * (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline BatchAssociateResourceRequest& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}
    inline BatchAssociateResourceRequest& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchAssociateResourceRequest& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline BatchAssociateResourceRequest& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    inline BatchAssociateResourceRequest& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
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
