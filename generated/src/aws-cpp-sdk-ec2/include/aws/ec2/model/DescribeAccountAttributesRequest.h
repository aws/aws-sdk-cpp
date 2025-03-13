/**
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
  class DescribeAccountAttributesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAccountAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountAttributes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeAccountAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account attribute names.</p>
     */
    inline const Aws::Vector<AccountAttributeName>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<AccountAttributeName>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<AccountAttributeName>>
    DescribeAccountAttributesRequest& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    inline DescribeAccountAttributesRequest& AddAttributeNames(AccountAttributeName value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<AccountAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
