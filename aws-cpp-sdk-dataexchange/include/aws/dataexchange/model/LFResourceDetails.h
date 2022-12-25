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
    AWS_DATAEXCHANGE_API LFResourceDetails();
    AWS_DATAEXCHANGE_API LFResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LFResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline const DatabaseLFTagPolicy& GetDatabase() const{ return m_database; }

    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline void SetDatabase(const DatabaseLFTagPolicy& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline void SetDatabase(DatabaseLFTagPolicy&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline LFResourceDetails& WithDatabase(const DatabaseLFTagPolicy& value) { SetDatabase(value); return *this;}

    /**
     * <p>Details about the database resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline LFResourceDetails& WithDatabase(DatabaseLFTagPolicy&& value) { SetDatabase(std::move(value)); return *this;}


    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline const TableLFTagPolicy& GetTable() const{ return m_table; }

    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline void SetTable(const TableLFTagPolicy& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline void SetTable(TableLFTagPolicy&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline LFResourceDetails& WithTable(const TableLFTagPolicy& value) { SetTable(value); return *this;}

    /**
     * <p>Details about the table resource included in the AWS Lake Formation data
     * permission.</p>
     */
    inline LFResourceDetails& WithTable(TableLFTagPolicy&& value) { SetTable(std::move(value)); return *this;}

  private:

    DatabaseLFTagPolicy m_database;
    bool m_databaseHasBeenSet = false;

    TableLFTagPolicy m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
