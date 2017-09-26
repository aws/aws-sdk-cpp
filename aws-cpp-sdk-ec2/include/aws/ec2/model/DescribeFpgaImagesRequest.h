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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeFpgaImagesRequest : public EC2Request
  {
  public:
    DescribeFpgaImagesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFpgaImages"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeFpgaImagesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more AFI IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFpgaImageIds() const{ return m_fpgaImageIds; }

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline void SetFpgaImageIds(const Aws::Vector<Aws::String>& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds = value; }

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline void SetFpgaImageIds(Aws::Vector<Aws::String>&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds = std::move(value); }

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline DescribeFpgaImagesRequest& WithFpgaImageIds(const Aws::Vector<Aws::String>& value) { SetFpgaImageIds(value); return *this;}

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline DescribeFpgaImagesRequest& WithFpgaImageIds(Aws::Vector<Aws::String>&& value) { SetFpgaImageIds(std::move(value)); return *this;}

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(const Aws::String& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(value); return *this; }

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(Aws::String&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AFI IDs.</p>
     */
    inline DescribeFpgaImagesRequest& AddFpgaImageIds(const char* value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.push_back(value); return *this; }


    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline DescribeFpgaImagesRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline DescribeFpgaImagesRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline DescribeFpgaImagesRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline DescribeFpgaImagesRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner
     * is the sender of the request), or an AWS owner alias (valid values are
     * <code>amazon</code> | <code>aws-marketplace</code>).</p>
     */
    inline DescribeFpgaImagesRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline DescribeFpgaImagesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline DescribeFpgaImagesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline DescribeFpgaImagesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The
     * creation time of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The
     * FPGA image identifier (AFI ID).</p> </li> <li> <p>
     * <code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI
     * ID).</p> </li> <li> <p> <code>name</code> - The name of the AFI.</p> </li> <li>
     * <p> <code>owner-id</code> - The AWS account ID of the AFI owner.</p> </li> <li>
     * <p> <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the AWS Shell that was used to
     * create the bitstream.</p> </li> <li> <p> <code>state</code> - The state of the
     * AFI (<code>pending</code> | <code>failed</code> | <code>available</code> |
     * <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>update-time</code> - The time of the most
     * recent update.</p> </li> </ul>
     */
    inline DescribeFpgaImagesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFpgaImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFpgaImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFpgaImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline DescribeFpgaImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_fpgaImageIds;
    bool m_fpgaImageIdsHasBeenSet;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
