﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/AccountAttributeName.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeAccountAttributes.</p>
   */
  class AWS_EC2_API DescribeAccountAttributesRequest : public EC2Request
  {
  public:
    DescribeAccountAttributesRequest();
    Aws::String SerializePayload() const override;

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
    inline DescribeAccountAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more account attribute names.</p>
     */
    inline const Aws::Vector<AccountAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>One or more account attribute names.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<AccountAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>One or more account attribute names.</p>
     */
    inline void SetAttributeNames(Aws::Vector<AccountAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>One or more account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(const Aws::Vector<AccountAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>One or more account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& WithAttributeNames(Aws::Vector<AccountAttributeName>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>One or more account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(const AccountAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>One or more account attribute names.</p>
     */
    inline DescribeAccountAttributesRequest& AddAttributeNames(AccountAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<AccountAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
