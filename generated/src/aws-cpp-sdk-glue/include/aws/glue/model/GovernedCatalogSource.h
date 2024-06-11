/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/S3SourceAdditionalOptions.h>
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
   * <p>Specifies the data store in the governed Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GovernedCatalogSource">AWS
   * API Reference</a></p>
   */
  class GovernedCatalogSource
  {
  public:
    AWS_GLUE_API GovernedCatalogSource();
    AWS_GLUE_API GovernedCatalogSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GovernedCatalogSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GovernedCatalogSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GovernedCatalogSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GovernedCatalogSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database to read from.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline GovernedCatalogSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline GovernedCatalogSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline GovernedCatalogSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline GovernedCatalogSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline GovernedCatalogSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline GovernedCatalogSource& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Partitions satisfying this predicate are deleted. Files within the retention
     * period in these partitions are not deleted. Set to <code>""</code> – empty by
     * default.</p>
     */
    inline const Aws::String& GetPartitionPredicate() const{ return m_partitionPredicate; }
    inline bool PartitionPredicateHasBeenSet() const { return m_partitionPredicateHasBeenSet; }
    inline void SetPartitionPredicate(const Aws::String& value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate = value; }
    inline void SetPartitionPredicate(Aws::String&& value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate = std::move(value); }
    inline void SetPartitionPredicate(const char* value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate.assign(value); }
    inline GovernedCatalogSource& WithPartitionPredicate(const Aws::String& value) { SetPartitionPredicate(value); return *this;}
    inline GovernedCatalogSource& WithPartitionPredicate(Aws::String&& value) { SetPartitionPredicate(std::move(value)); return *this;}
    inline GovernedCatalogSource& WithPartitionPredicate(const char* value) { SetPartitionPredicate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const S3SourceAdditionalOptions& GetAdditionalOptions() const{ return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    inline void SetAdditionalOptions(const S3SourceAdditionalOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }
    inline void SetAdditionalOptions(S3SourceAdditionalOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }
    inline GovernedCatalogSource& WithAdditionalOptions(const S3SourceAdditionalOptions& value) { SetAdditionalOptions(value); return *this;}
    inline GovernedCatalogSource& WithAdditionalOptions(S3SourceAdditionalOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_partitionPredicate;
    bool m_partitionPredicateHasBeenSet = false;

    S3SourceAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
