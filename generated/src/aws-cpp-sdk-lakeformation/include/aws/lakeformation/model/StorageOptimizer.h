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
    AWS_LAKEFORMATION_API StorageOptimizer();
    AWS_LAKEFORMATION_API StorageOptimizer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API StorageOptimizer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline const OptimizerType& GetStorageOptimizerType() const{ return m_storageOptimizerType; }

    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline bool StorageOptimizerTypeHasBeenSet() const { return m_storageOptimizerTypeHasBeenSet; }

    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline void SetStorageOptimizerType(const OptimizerType& value) { m_storageOptimizerTypeHasBeenSet = true; m_storageOptimizerType = value; }

    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline void SetStorageOptimizerType(OptimizerType&& value) { m_storageOptimizerTypeHasBeenSet = true; m_storageOptimizerType = std::move(value); }

    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline StorageOptimizer& WithStorageOptimizerType(const OptimizerType& value) { SetStorageOptimizerType(value); return *this;}

    /**
     * <p>The specific type of storage optimizer. The supported value is
     * <code>compaction</code>.</p>
     */
    inline StorageOptimizer& WithStorageOptimizerType(OptimizerType&& value) { SetStorageOptimizerType(std::move(value)); return *this;}


    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfig() const{ return m_config; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline void SetConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline void SetConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& WithConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetConfig(value); return *this;}

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& WithConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetConfig(std::move(value)); return *this;}

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(const Aws::String& key, const Aws::String& value) { m_configHasBeenSet = true; m_config.emplace(key, value); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(Aws::String&& key, const Aws::String& value) { m_configHasBeenSet = true; m_config.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(const Aws::String& key, Aws::String&& value) { m_configHasBeenSet = true; m_config.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(Aws::String&& key, Aws::String&& value) { m_configHasBeenSet = true; m_config.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(const char* key, Aws::String&& value) { m_configHasBeenSet = true; m_config.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(Aws::String&& key, const char* value) { m_configHasBeenSet = true; m_config.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the storage optimizer configuration. Currently contains only one
     * key-value pair: <code>is_enabled</code> indicates true or false for
     * acceleration.</p>
     */
    inline StorageOptimizer& AddConfig(const char* key, const char* value) { m_configHasBeenSet = true; m_config.emplace(key, value); return *this; }


    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline StorageOptimizer& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline StorageOptimizer& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message that contains information about any error (if present).</p> <p>When
     * an acceleration result has an enabled status, the error message is empty.</p>
     * <p>When an acceleration result has a disabled status, the message describes an
     * error or simply indicates "disabled by the user".</p>
     */
    inline StorageOptimizer& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline const Aws::String& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline void SetWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline void SetWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline void SetWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.assign(value); }

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline StorageOptimizer& WithWarnings(const Aws::String& value) { SetWarnings(value); return *this;}

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline StorageOptimizer& WithWarnings(Aws::String&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A message that contains information about any warnings (if present).</p>
     */
    inline StorageOptimizer& WithWarnings(const char* value) { SetWarnings(value); return *this;}


    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline const Aws::String& GetLastRunDetails() const{ return m_lastRunDetails; }

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline bool LastRunDetailsHasBeenSet() const { return m_lastRunDetailsHasBeenSet; }

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline void SetLastRunDetails(const Aws::String& value) { m_lastRunDetailsHasBeenSet = true; m_lastRunDetails = value; }

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline void SetLastRunDetails(Aws::String&& value) { m_lastRunDetailsHasBeenSet = true; m_lastRunDetails = std::move(value); }

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline void SetLastRunDetails(const char* value) { m_lastRunDetailsHasBeenSet = true; m_lastRunDetails.assign(value); }

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline StorageOptimizer& WithLastRunDetails(const Aws::String& value) { SetLastRunDetails(value); return *this;}

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline StorageOptimizer& WithLastRunDetails(Aws::String&& value) { SetLastRunDetails(std::move(value)); return *this;}

    /**
     * <p>When an acceleration result has an enabled status, contains the details of
     * the last job run.</p>
     */
    inline StorageOptimizer& WithLastRunDetails(const char* value) { SetLastRunDetails(value); return *this;}

  private:

    OptimizerType m_storageOptimizerType;
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
