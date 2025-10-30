/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>The configuration properties that define the compute environment settings for
 * workers in Clean Rooms. These properties enable customization of the underlying
 * compute environment to optimize performance for your specific
 * workloads.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/WorkerComputeConfigurationProperties">AWS
 * API Reference</a></p>
 */
class WorkerComputeConfigurationProperties {
 public:
  AWS_CLEANROOMS_API WorkerComputeConfigurationProperties() = default;
  AWS_CLEANROOMS_API WorkerComputeConfigurationProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API WorkerComputeConfigurationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Spark configuration properties for SQL workloads. This map contains
   * key-value pairs that configure Apache Spark settings to optimize performance for
   * your data processing jobs. You can specify up to 50 Spark properties, with each
   * key being 1-200 characters and each value being 0-500 characters. These
   * properties allow you to adjust compute capacity for large datasets and complex
   * workloads.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSpark() const { return m_spark; }
  inline bool SparkHasBeenSet() const { return m_sparkHasBeenSet; }
  template <typename SparkT = Aws::Map<Aws::String, Aws::String>>
  void SetSpark(SparkT&& value) {
    m_sparkHasBeenSet = true;
    m_spark = std::forward<SparkT>(value);
  }
  template <typename SparkT = Aws::Map<Aws::String, Aws::String>>
  WorkerComputeConfigurationProperties& WithSpark(SparkT&& value) {
    SetSpark(std::forward<SparkT>(value));
    return *this;
  }
  template <typename SparkKeyT = Aws::String, typename SparkValueT = Aws::String>
  WorkerComputeConfigurationProperties& AddSpark(SparkKeyT&& key, SparkValueT&& value) {
    m_sparkHasBeenSet = true;
    m_spark.emplace(std::forward<SparkKeyT>(key), std::forward<SparkValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_spark;
  bool m_sparkHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
