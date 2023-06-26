/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline GetTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline GetTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline GetTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table for which to retrieve the definition. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline GetTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline GetTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID at which to read the table contents. </p>
     */
    inline GetTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const{ return m_queryAsOfTime; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(const Aws::Utils::DateTime& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = value; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(Aws::Utils::DateTime&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::move(value); }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetTableRequest& WithQueryAsOfTime(const Aws::Utils::DateTime& value) { SetQueryAsOfTime(value); return *this;}

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetTableRequest& WithQueryAsOfTime(Aws::Utils::DateTime&& value) { SetQueryAsOfTime(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime;
    bool m_queryAsOfTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
