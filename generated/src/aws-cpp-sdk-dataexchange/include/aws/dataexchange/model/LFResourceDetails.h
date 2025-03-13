/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/DatabaseLFTagPolicy.h>
#include <aws/dataexchange/model/TableLFTagPolicy.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details about the AWS Lake Formation resource (Table or Database) included in
   * the AWS Lake Formation data permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/LFResourceDetails">AWS
   * API Reference</a></p>
   */
  class LFResourceDetails
  {
  public:
    AWS_DATAEXCHANGE_API LFResourceDetails() = default;
    AWS_DATAEXCHANGE_API LFResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LFResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline const DatabaseLFTagPolicy& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = DatabaseLFTagPolicy>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = DatabaseLFTagPolicy>
    LFResourceDetails& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline const TableLFTagPolicy& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = TableLFTagPolicy>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = TableLFTagPolicy>
    LFResourceDetails& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}
  private:

    DatabaseLFTagPolicy m_database;
    bool m_databaseHasBeenSet = false;

    TableLFTagPolicy m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
