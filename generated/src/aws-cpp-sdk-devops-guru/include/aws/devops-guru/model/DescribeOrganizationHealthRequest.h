/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeOrganizationHealthRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationHealth"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationHealthRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationHealthRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationHealthRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationHealthRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline DescribeOrganizationHealthRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationHealthRequest& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationHealthRequest& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationHealthRequest& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationHealthRequest& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline DescribeOrganizationHealthRequest& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
