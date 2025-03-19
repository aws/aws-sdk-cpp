/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/StorageDescriptor.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The structure used to create and update a partition.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PartitionInput">AWS
   * API Reference</a></p>
   */
  class PartitionInput
  {
  public:
    AWS_GLUE_API PartitionInput() = default;
    AWS_GLUE_API PartitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PartitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p> <p>The values for
     * the keys for the new partition must be passed as an array of String objects that
     * must be ordered in the same order as the partition keys appearing in the Amazon
     * S3 prefix. Otherwise Glue will add the values to the wrong keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    PartitionInput& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    PartitionInput& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const { return m_lastAccessTime; }
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }
    template<typename LastAccessTimeT = Aws::Utils::DateTime>
    void SetLastAccessTime(LastAccessTimeT&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::forward<LastAccessTimeT>(value); }
    template<typename LastAccessTimeT = Aws::Utils::DateTime>
    PartitionInput& WithLastAccessTime(LastAccessTimeT&& value) { SetLastAccessTime(std::forward<LastAccessTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const { return m_storageDescriptor; }
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }
    template<typename StorageDescriptorT = StorageDescriptor>
    void SetStorageDescriptor(StorageDescriptorT&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::forward<StorageDescriptorT>(value); }
    template<typename StorageDescriptorT = StorageDescriptor>
    PartitionInput& WithStorageDescriptor(StorageDescriptorT&& value) { SetStorageDescriptor(std::forward<StorageDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    PartitionInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    PartitionInput& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const { return m_lastAnalyzedTime; }
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }
    template<typename LastAnalyzedTimeT = Aws::Utils::DateTime>
    void SetLastAnalyzedTime(LastAnalyzedTimeT&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::forward<LastAnalyzedTimeT>(value); }
    template<typename LastAnalyzedTimeT = Aws::Utils::DateTime>
    PartitionInput& WithLastAnalyzedTime(LastAnalyzedTimeT&& value) { SetLastAnalyzedTime(std::forward<LastAnalyzedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessTime{};
    bool m_lastAccessTimeHasBeenSet = false;

    StorageDescriptor m_storageDescriptor;
    bool m_storageDescriptorHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTime{};
    bool m_lastAnalyzedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
