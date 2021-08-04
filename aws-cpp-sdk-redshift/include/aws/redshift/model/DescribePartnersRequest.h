﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API DescribePartnersRequest : public RedshiftRequest
  {
  public:
    DescribePartnersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePartners"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline DescribePartnersRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline DescribePartnersRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the cluster.</p>
     */
    inline DescribePartnersRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline DescribePartnersRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline DescribePartnersRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster whose partner integration is being
     * described.</p>
     */
    inline DescribePartnersRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline DescribePartnersRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline DescribePartnersRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database whose partner integration is being described. If
     * database name is not specified, then all databases in the cluster are
     * described.</p>
     */
    inline DescribePartnersRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline bool PartnerNameHasBeenSet() const { return m_partnerNameHasBeenSet; }

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerNameHasBeenSet = true; m_partnerName = value; }

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerNameHasBeenSet = true; m_partnerName = std::move(value); }

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerNameHasBeenSet = true; m_partnerName.assign(value); }

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline DescribePartnersRequest& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline DescribePartnersRequest& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner that is being described. If partner name is not
     * specified, then all partner integrations are described.</p>
     */
    inline DescribePartnersRequest& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_partnerName;
    bool m_partnerNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
