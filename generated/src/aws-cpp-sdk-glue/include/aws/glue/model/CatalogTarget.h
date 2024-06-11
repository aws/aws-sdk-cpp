﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Glue Data Catalog target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogTarget">AWS
   * API Reference</a></p>
   */
  class CatalogTarget
  {
  public:
    AWS_GLUE_API CatalogTarget();
    AWS_GLUE_API CatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CatalogTarget& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CatalogTarget& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CatalogTarget& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTables() const{ return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    inline void SetTables(const Aws::Vector<Aws::String>& value) { m_tablesHasBeenSet = true; m_tables = value; }
    inline void SetTables(Aws::Vector<Aws::String>&& value) { m_tablesHasBeenSet = true; m_tables = std::move(value); }
    inline CatalogTarget& WithTables(const Aws::Vector<Aws::String>& value) { SetTables(value); return *this;}
    inline CatalogTarget& WithTables(Aws::Vector<Aws::String>&& value) { SetTables(std::move(value)); return *this;}
    inline CatalogTarget& AddTables(const Aws::String& value) { m_tablesHasBeenSet = true; m_tables.push_back(value); return *this; }
    inline CatalogTarget& AddTables(Aws::String&& value) { m_tablesHasBeenSet = true; m_tables.push_back(std::move(value)); return *this; }
    inline CatalogTarget& AddTables(const char* value) { m_tablesHasBeenSet = true; m_tables.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection for an Amazon S3-backed Data Catalog table to be a
     * target of the crawl when using a <code>Catalog</code> connection type paired
     * with a <code>NETWORK</code> Connection type.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline CatalogTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline CatalogTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline CatalogTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:sqs</code>.</p>
     */
    inline const Aws::String& GetEventQueueArn() const{ return m_eventQueueArn; }
    inline bool EventQueueArnHasBeenSet() const { return m_eventQueueArnHasBeenSet; }
    inline void SetEventQueueArn(const Aws::String& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = value; }
    inline void SetEventQueueArn(Aws::String&& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = std::move(value); }
    inline void SetEventQueueArn(const char* value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn.assign(value); }
    inline CatalogTarget& WithEventQueueArn(const Aws::String& value) { SetEventQueueArn(value); return *this;}
    inline CatalogTarget& WithEventQueueArn(Aws::String&& value) { SetEventQueueArn(std::move(value)); return *this;}
    inline CatalogTarget& WithEventQueueArn(const char* value) { SetEventQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon dead-letter SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:deadLetterQueue</code>.</p>
     */
    inline const Aws::String& GetDlqEventQueueArn() const{ return m_dlqEventQueueArn; }
    inline bool DlqEventQueueArnHasBeenSet() const { return m_dlqEventQueueArnHasBeenSet; }
    inline void SetDlqEventQueueArn(const Aws::String& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = value; }
    inline void SetDlqEventQueueArn(Aws::String&& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = std::move(value); }
    inline void SetDlqEventQueueArn(const char* value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn.assign(value); }
    inline CatalogTarget& WithDlqEventQueueArn(const Aws::String& value) { SetDlqEventQueueArn(value); return *this;}
    inline CatalogTarget& WithDlqEventQueueArn(Aws::String&& value) { SetDlqEventQueueArn(std::move(value)); return *this;}
    inline CatalogTarget& WithDlqEventQueueArn(const char* value) { SetDlqEventQueueArn(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tables;
    bool m_tablesHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_eventQueueArn;
    bool m_eventQueueArnHasBeenSet = false;

    Aws::String m_dlqEventQueueArn;
    bool m_dlqEventQueueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
