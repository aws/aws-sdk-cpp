/**
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
    AWS_GLUE_API CatalogTarget() = default;
    AWS_GLUE_API CatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    CatalogTarget& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTables() const { return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    template<typename TablesT = Aws::Vector<Aws::String>>
    void SetTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables = std::forward<TablesT>(value); }
    template<typename TablesT = Aws::Vector<Aws::String>>
    CatalogTarget& WithTables(TablesT&& value) { SetTables(std::forward<TablesT>(value)); return *this;}
    template<typename TablesT = Aws::String>
    CatalogTarget& AddTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables.emplace_back(std::forward<TablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection for an Amazon S3-backed Data Catalog table to be a
     * target of the crawl when using a <code>Catalog</code> connection type paired
     * with a <code>NETWORK</code> Connection type.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    CatalogTarget& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:sqs</code>.</p>
     */
    inline const Aws::String& GetEventQueueArn() const { return m_eventQueueArn; }
    inline bool EventQueueArnHasBeenSet() const { return m_eventQueueArnHasBeenSet; }
    template<typename EventQueueArnT = Aws::String>
    void SetEventQueueArn(EventQueueArnT&& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = std::forward<EventQueueArnT>(value); }
    template<typename EventQueueArnT = Aws::String>
    CatalogTarget& WithEventQueueArn(EventQueueArnT&& value) { SetEventQueueArn(std::forward<EventQueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon dead-letter SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:deadLetterQueue</code>.</p>
     */
    inline const Aws::String& GetDlqEventQueueArn() const { return m_dlqEventQueueArn; }
    inline bool DlqEventQueueArnHasBeenSet() const { return m_dlqEventQueueArnHasBeenSet; }
    template<typename DlqEventQueueArnT = Aws::String>
    void SetDlqEventQueueArn(DlqEventQueueArnT&& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = std::forward<DlqEventQueueArnT>(value); }
    template<typename DlqEventQueueArnT = Aws::String>
    CatalogTarget& WithDlqEventQueueArn(DlqEventQueueArnT&& value) { SetDlqEventQueueArn(std::forward<DlqEventQueueArnT>(value)); return *this;}
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
