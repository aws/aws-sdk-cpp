/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableOptimizerType.h>
#include <aws/glue/model/TableOptimizerConfiguration.h>
#include <aws/glue/model/TableOptimizerRun.h>
#include <aws/glue/model/ConfigurationSource.h>
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
    AWS_GLUE_API TableOptimizer() = default;
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
    inline TableOptimizerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TableOptimizerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TableOptimizer& WithType(TableOptimizerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerConfiguration</code> object that was specified when
     * creating or updating a table optimizer.</p>
     */
    inline const TableOptimizerConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = TableOptimizerConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = TableOptimizerConfiguration>
    TableOptimizer& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerRun</code> object representing the last run of the
     * table optimizer.</p>
     */
    inline const TableOptimizerRun& GetLastRun() const { return m_lastRun; }
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }
    template<typename LastRunT = TableOptimizerRun>
    void SetLastRun(LastRunT&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::forward<LastRunT>(value); }
    template<typename LastRunT = TableOptimizerRun>
    TableOptimizer& WithLastRun(LastRunT&& value) { SetLastRun(std::forward<LastRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the source of the optimizer configuration. This indicates how the
     * table optimizer was configured and which entity or service initiated the
     * configuration. </p>
     */
    inline ConfigurationSource GetConfigurationSource() const { return m_configurationSource; }
    inline bool ConfigurationSourceHasBeenSet() const { return m_configurationSourceHasBeenSet; }
    inline void SetConfigurationSource(ConfigurationSource value) { m_configurationSourceHasBeenSet = true; m_configurationSource = value; }
    inline TableOptimizer& WithConfigurationSource(ConfigurationSource value) { SetConfigurationSource(value); return *this;}
    ///@}
  private:

    TableOptimizerType m_type{TableOptimizerType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TableOptimizerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    TableOptimizerRun m_lastRun;
    bool m_lastRunHasBeenSet = false;

    ConfigurationSource m_configurationSource{ConfigurationSource::NOT_SET};
    bool m_configurationSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
