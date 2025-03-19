/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/OptimizerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure describing the configuration and details of a storage
   * optimizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StorageOptimizer">AWS
   * API Reference</a></p>
   */
  class StorageOptimizer
  {
  public:
    AWS_LAKEFORMATION_API StorageOptimizer() = default;
    AWS_LAKEFORMATION_API StorageOptimizer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API StorageOptimizer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline OptimizerType GetStorageOptimizerType() const { return m_storageOptimizerType; }
    inline bool StorageOptimizerTypeHasBeenSet() const { return m_storageOptimizerTypeHasBeenSet; }
    inline void SetStorageOptimizerType(OptimizerType value) { m_storageOptimizerTypeHasBeenSet = true; m_storageOptimizerType = value; }
    inline StorageOptimizer& WithStorageOptimizerType(OptimizerType value) { SetStorageOptimizerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = Aws::Map<Aws::String, Aws::String>>
    StorageOptimizer& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    template<typename ConfigKeyT = Aws::String, typename ConfigValueT = Aws::String>
    StorageOptimizer& AddConfig(ConfigKeyT&& key, ConfigValueT&& value) {
      m_configHasBeenSet = true; m_config.emplace(std::forward<ConfigKeyT>(key), std::forward<ConfigValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    StorageOptimizer& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline const Aws::String& GetWarnings() const { return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    template<typename WarningsT = Aws::String>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::String>
    StorageOptimizer& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline const Aws::String& GetLastRunDetails() const { return m_lastRunDetails; }
    inline bool LastRunDetailsHasBeenSet() const { return m_lastRunDetailsHasBeenSet; }
    template<typename LastRunDetailsT = Aws::String>
    void SetLastRunDetails(LastRunDetailsT&& value) { m_lastRunDetailsHasBeenSet = true; m_lastRunDetails = std::forward<LastRunDetailsT>(value); }
    template<typename LastRunDetailsT = Aws::String>
    StorageOptimizer& WithLastRunDetails(LastRunDetailsT&& value) { SetLastRunDetails(std::forward<LastRunDetailsT>(value)); return *this;}
    ///@}
  private:

    OptimizerType m_storageOptimizerType{OptimizerType::NOT_SET};
    bool m_storageOptimizerTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_config;
    bool m_configHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_lastRunDetails;
    bool m_lastRunDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
