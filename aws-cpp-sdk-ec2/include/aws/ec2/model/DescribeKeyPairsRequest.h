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
   */
  class AWS_EC2_API DescribeKeyPairsRequest : public EC2Request
  {
  public:
    DescribeKeyPairsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeyPairs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>fingerprint</code> - The fingerprint of
     * the key pair.</p> </li> <li> <p> <code>key-name</code> - The name of the key
     * pair.</p> </li> </ul>
     */
    inline DescribeKeyPairsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyNames() const{ return m_keyNames; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline bool KeyNamesHasBeenSet() const { return m_keyNamesHasBeenSet; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline void SetKeyNames(const Aws::Vector<Aws::String>& value) { m_keyNamesHasBeenSet = true; m_keyNames = value; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline void SetKeyNames(Aws::Vector<Aws::String>&& value) { m_keyNamesHasBeenSet = true; m_keyNames = std::move(value); }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyNames(const Aws::Vector<Aws::String>& value) { SetKeyNames(value); return *this;}

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& WithKeyNames(Aws::Vector<Aws::String>&& value) { SetKeyNames(std::move(value)); return *this;}

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(const Aws::String& value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(value); return *this; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(Aws::String&& value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The key pair names.</p> <p>Default: Describes all your key pairs.</p>
     */
    inline DescribeKeyPairsRequest& AddKeyNames(const char* value) { m_keyNamesHasBeenSet = true; m_keyNames.push_back(value); return *this; }


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline DescribeKeyPairsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_keyNames;
    bool m_keyNamesHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
