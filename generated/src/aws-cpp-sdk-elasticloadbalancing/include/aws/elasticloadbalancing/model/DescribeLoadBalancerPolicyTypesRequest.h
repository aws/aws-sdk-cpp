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
   * <p>Contains the parameters for DescribeLoadBalancerPolicyTypes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypesInput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancerPolicyTypesRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoadBalancerPolicyTypes"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyTypeNames() const { return m_policyTypeNames; }
    inline bool PolicyTypeNamesHasBeenSet() const { return m_policyTypeNamesHasBeenSet; }
    template<typename PolicyTypeNamesT = Aws::Vector<Aws::String>>
    void SetPolicyTypeNames(PolicyTypeNamesT&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames = std::forward<PolicyTypeNamesT>(value); }
    template<typename PolicyTypeNamesT = Aws::Vector<Aws::String>>
    DescribeLoadBalancerPolicyTypesRequest& WithPolicyTypeNames(PolicyTypeNamesT&& value) { SetPolicyTypeNames(std::forward<PolicyTypeNamesT>(value)); return *this;}
    template<typename PolicyTypeNamesT = Aws::String>
    DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(PolicyTypeNamesT&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.emplace_back(std::forward<PolicyTypeNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_policyTypeNames;
    bool m_policyTypeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
