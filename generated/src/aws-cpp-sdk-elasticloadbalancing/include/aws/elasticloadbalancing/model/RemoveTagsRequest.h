/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/TagKeyOnly.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for RemoveTags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RemoveTagsInput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API RemoveTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const { return m_loadBalancerNames; }
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    void SetLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::forward<LoadBalancerNamesT>(value); }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    RemoveTagsRequest& WithLoadBalancerNames(LoadBalancerNamesT&& value) { SetLoadBalancerNames(std::forward<LoadBalancerNamesT>(value)); return *this;}
    template<typename LoadBalancerNamesT = Aws::String>
    RemoveTagsRequest& AddLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.emplace_back(std::forward<LoadBalancerNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline const Aws::Vector<TagKeyOnly>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagKeyOnly>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagKeyOnly>>
    RemoveTagsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagKeyOnly>
    RemoveTagsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;

    Aws::Vector<TagKeyOnly> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
