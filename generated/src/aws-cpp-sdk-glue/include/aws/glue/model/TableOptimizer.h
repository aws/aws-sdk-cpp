/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableOptimizerType.h>
#include <aws/glue/model/TableOptimizerConfiguration.h>
#include <aws/glue/model/TableOptimizerRun.h>
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
   * <p>Contains details about an optimizer associated with a table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizer">AWS
   * API Reference</a></p>
   */
  class TableOptimizer
  {
  public:
    AWS_GLUE_API TableOptimizer();
    AWS_GLUE_API TableOptimizer(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of table optimizer. The valid values are:</p> <ul> <li> <p>
     * <code>compaction</code>: for managing compaction with a table optimizer.</p>
     * </li> <li> <p> <code>retention</code>: for managing the retention of snapshot
     * with a table optimizer.</p> </li> <li> <p> <code>orphan_file_deletion</code>:
     * for managing the deletion of orphan files with a table optimizer.</p> </li>
     * </ul>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TableOptimizer& WithType(const TableOptimizerType& value) { SetType(value); return *this;}
    inline TableOptimizer& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline const TableOptimizerConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const TableOptimizerConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(TableOptimizerConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline TableOptimizer& WithConfiguration(const TableOptimizerConfiguration& value) { SetConfiguration(value); return *this;}
    inline TableOptimizer& WithConfiguration(TableOptimizerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline const TableOptimizerRun& GetLastRun() const{ return m_lastRun; }
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }
    inline void SetLastRun(const TableOptimizerRun& value) { m_lastRunHasBeenSet = true; m_lastRun = value; }
    inline void SetLastRun(TableOptimizerRun&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::move(value); }
    inline TableOptimizer& WithLastRun(const TableOptimizerRun& value) { SetLastRun(value); return *this;}
    inline TableOptimizer& WithLastRun(TableOptimizerRun&& value) { SetLastRun(std::move(value)); return *this;}
    ///@}
  private:

    TableOptimizerType m_type;
    bool m_typeHasBeenSet = false;

    TableOptimizerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    TableOptimizerRun m_lastRun;
    bool m_lastRunHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
