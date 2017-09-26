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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeInternetGateways.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGatewaysRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeInternetGatewaysRequest : public EC2Request
  {
  public:
    DescribeInternetGatewaysRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInternetGateways"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeInternetGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeInternetGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeInternetGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>attachment.state</code> - The
     * current state of the attachment between the gateway and the VPC
     * (<code>available</code>). Present only if a VPC is attached.</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>internet-gateway-id</code> - The ID of the Internet gateway.</p> </li>
     * <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of
     * a tag assigned to the resource. Specify the key of the tag in the filter name
     * and the value of the tag in the filter value. For example, for the tag
     * Purpose=X, specify <code>tag:Purpose</code> for the filter name and
     * <code>X</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code> -
     * The key of a tag assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeInternetGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeInternetGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInternetGatewayIds() const{ return m_internetGatewayIds; }

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline void SetInternetGatewayIds(const Aws::Vector<Aws::String>& value) { m_internetGatewayIdsHasBeenSet = true; m_internetGatewayIds = value; }

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline void SetInternetGatewayIds(Aws::Vector<Aws::String>&& value) { m_internetGatewayIdsHasBeenSet = true; m_internetGatewayIds = std::move(value); }

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline DescribeInternetGatewaysRequest& WithInternetGatewayIds(const Aws::Vector<Aws::String>& value) { SetInternetGatewayIds(value); return *this;}

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline DescribeInternetGatewaysRequest& WithInternetGatewayIds(Aws::Vector<Aws::String>&& value) { SetInternetGatewayIds(std::move(value)); return *this;}

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline DescribeInternetGatewaysRequest& AddInternetGatewayIds(const Aws::String& value) { m_internetGatewayIdsHasBeenSet = true; m_internetGatewayIds.push_back(value); return *this; }

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline DescribeInternetGatewaysRequest& AddInternetGatewayIds(Aws::String&& value) { m_internetGatewayIdsHasBeenSet = true; m_internetGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Internet gateway IDs.</p> <p>Default: Describes all your Internet
     * gateways.</p>
     */
    inline DescribeInternetGatewaysRequest& AddInternetGatewayIds(const char* value) { m_internetGatewayIdsHasBeenSet = true; m_internetGatewayIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_internetGatewayIds;
    bool m_internetGatewayIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
