/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The structure used to create and update a partion.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PartitionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API PartitionInput
  {
  public:
    PartitionInput();
    PartitionInput(Aws::Utils::Json::JsonView jsonValue);
    PartitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline PartitionInput& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline PartitionInput& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline PartitionInput& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline PartitionInput& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the partition. Although this parameter is not required by the
     * SDK, you must specify this parameter for a valid input.</p>
     */
    inline PartitionInput& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline PartitionInput& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline PartitionInput& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}


    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const{ return m_storageDescriptor; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline void SetStorageDescriptor(const StorageDescriptor& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = value; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline void SetStorageDescriptor(StorageDescriptor&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::move(value); }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline PartitionInput& WithStorageDescriptor(const StorageDescriptor& value) { SetStorageDescriptor(value); return *this;}

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline PartitionInput& WithStorageDescriptor(StorageDescriptor&& value) { SetStorageDescriptor(std::move(value)); return *this;}


    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline PartitionInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const{ return m_lastAnalyzedTime; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline void SetLastAnalyzedTime(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = value; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline void SetLastAnalyzedTime(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::move(value); }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline PartitionInput& WithLastAnalyzedTime(const Aws::Utils::DateTime& value) { SetLastAnalyzedTime(value); return *this;}

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline PartitionInput& WithLastAnalyzedTime(Aws::Utils::DateTime&& value) { SetLastAnalyzedTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Aws::Utils::DateTime m_lastAccessTime;
    bool m_lastAccessTimeHasBeenSet;

    StorageDescriptor m_storageDescriptor;
    bool m_storageDescriptorHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Utils::DateTime m_lastAnalyzedTime;
    bool m_lastAnalyzedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
