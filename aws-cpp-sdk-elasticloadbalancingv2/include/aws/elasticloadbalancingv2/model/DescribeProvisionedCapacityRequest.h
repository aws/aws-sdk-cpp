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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeProvisionedCapacityRequest : public ElasticLoadBalancingv2Request
  {
  public:
    DescribeProvisionedCapacityRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProvisionedCapacity"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }

    
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }

    
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }

    
    inline DescribeProvisionedCapacityRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    
    inline DescribeProvisionedCapacityRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}

    
    inline DescribeProvisionedCapacityRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}

  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
