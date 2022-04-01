﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AccountAttributeName.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeAccountAttributesRequest : public EC2Request
  {
  public:
    DescribeAccountAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The account attribute names.</p>
     */
    inline const Aws::Vector<AccountAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>The account attribute names.</p>
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * <p>The account attribute names.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<AccountAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>The account attribute names.</p>
     */
    inline void SetAttributeNames(Aws::Vector<AccountAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * <p>The account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(const Aws::Vector<AccountAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>The account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(Aws::Vector<AccountAttributeName>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>The account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(const AccountAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>The account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(AccountAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }


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
    inline DescribeAccountAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<AccountAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
