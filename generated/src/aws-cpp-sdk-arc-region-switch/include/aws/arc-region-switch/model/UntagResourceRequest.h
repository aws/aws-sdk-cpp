/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_ARCREGIONSWITCH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a tag you remove a resource from.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UntagResourceRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tag keys that you remove from a resource.</p>
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

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTagKeys;
    bool m_resourceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
