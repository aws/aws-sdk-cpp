/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) to untag. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UntagResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Keys for the tags to be removed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTagKeys() const { return m_resourceTagKeys; }
    inline bool ResourceTagKeysHasBeenSet() const { return m_resourceTagKeysHasBeenSet; }
    template<typename ResourceTagKeysT = Aws::Vector<Aws::String>>
    void SetResourceTagKeys(ResourceTagKeysT&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = std::forward<ResourceTagKeysT>(value); }
    template<typename ResourceTagKeysT = Aws::Vector<Aws::String>>
    UntagResourceRequest& WithResourceTagKeys(ResourceTagKeysT&& value) { SetResourceTagKeys(std::forward<ResourceTagKeysT>(value)); return *this;}
    template<typename ResourceTagKeysT = Aws::String>
    UntagResourceRequest& AddResourceTagKeys(ResourceTagKeysT&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.emplace_back(std::forward<ResourceTagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTagKeys;
    bool m_resourceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
