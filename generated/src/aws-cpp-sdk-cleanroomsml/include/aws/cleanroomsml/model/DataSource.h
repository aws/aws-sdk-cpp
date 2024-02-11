/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/GlueDataSource.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Defines information about the Glue data source that contains the training
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_CLEANROOMSML_API DataSource();
    AWS_CLEANROOMSML_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline const GlueDataSource& GetGlueDataSource() const{ return m_glueDataSource; }

    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline bool GlueDataSourceHasBeenSet() const { return m_glueDataSourceHasBeenSet; }

    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline void SetGlueDataSource(const GlueDataSource& value) { m_glueDataSourceHasBeenSet = true; m_glueDataSource = value; }

    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline void SetGlueDataSource(GlueDataSource&& value) { m_glueDataSourceHasBeenSet = true; m_glueDataSource = std::move(value); }

    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline DataSource& WithGlueDataSource(const GlueDataSource& value) { SetGlueDataSource(value); return *this;}

    /**
     * <p>A GlueDataSource object that defines the catalog ID, database name, and table
     * name for the training data.</p>
     */
    inline DataSource& WithGlueDataSource(GlueDataSource&& value) { SetGlueDataSource(std::move(value)); return *this;}

  private:

    GlueDataSource m_glueDataSource;
    bool m_glueDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
