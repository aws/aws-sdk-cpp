/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeTags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeTagsInput">AWS
   * API Reference</a></p>
   */
  class DescribeTagsRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTags"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the load balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const { return m_loadBalancerNames; }
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    void SetLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::forward<LoadBalancerNamesT>(value); }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    DescribeTagsRequest& WithLoadBalancerNames(LoadBalancerNamesT&& value) { SetLoadBalancerNames(std::forward<LoadBalancerNamesT>(value)); return *this;}
    template<typename LoadBalancerNamesT = Aws::String>
    DescribeTagsRequest& AddLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.emplace_back(std::forward<LoadBalancerNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
