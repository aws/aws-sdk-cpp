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


    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline TableOptimizer& WithType(const TableOptimizerType& value) { SetType(value); return *this;}

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline TableOptimizer& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline const TableOptimizerConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline void SetConfiguration(const TableOptimizerConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline void SetConfiguration(TableOptimizerConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline TableOptimizer& WithConfiguration(const TableOptimizerConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline TableOptimizer& WithConfiguration(TableOptimizerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline const TableOptimizerRun& GetLastRun() const{ return m_lastRun; }

    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }

    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline void SetLastRun(const TableOptimizerRun& value) { m_lastRunHasBeenSet = true; m_lastRun = value; }

    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline void SetLastRun(TableOptimizerRun&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::move(value); }

    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline TableOptimizer& WithLastRun(const TableOptimizerRun& value) { SetLastRun(value); return *this;}

    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline TableOptimizer& WithLastRun(TableOptimizerRun&& value) { SetLastRun(std::move(value)); return *this;}

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
