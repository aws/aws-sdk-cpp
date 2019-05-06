/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICLOADBALANCING_API RemoveTagsRequest : public ElasticLoadBalancingRequest
  {
  public:
    RemoveTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::move(value); }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline RemoveTagsRequest& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline RemoveTagsRequest& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline RemoveTagsRequest& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline RemoveTagsRequest& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the load balancer. You can specify a maximum of one load balancer
     * name.</p>
     */
    inline RemoveTagsRequest& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }


    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline const Aws::Vector<TagKeyOnly>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline void SetTags(const Aws::Vector<TagKeyOnly>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline void SetTags(Aws::Vector<TagKeyOnly>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline RemoveTagsRequest& WithTags(const Aws::Vector<TagKeyOnly>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline RemoveTagsRequest& WithTags(Aws::Vector<TagKeyOnly>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline RemoveTagsRequest& AddTags(const TagKeyOnly& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline RemoveTagsRequest& AddTags(TagKeyOnly&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet;

    Aws::Vector<TagKeyOnly> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
