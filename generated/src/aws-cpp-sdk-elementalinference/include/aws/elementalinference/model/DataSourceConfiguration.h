/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains the data source configuration for a clipping output. It identifies
 * the fixture whose event data Elemental Inference maps onto the clipping
 * metadata. It is used in the dataSourceConfiguration property of a
 * ClippingConfig. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/DataSourceConfiguration">AWS
 * API Reference</a></p>
 */
class DataSourceConfiguration {
 public:
  AWS_ELEMENTALINFERENCE_API DataSourceConfiguration() = default;
  AWS_ELEMENTALINFERENCE_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the fixture whose event data you want Elemental Inference to map
   * onto this clipping output. The fixture should be the sports event in the source
   * media that the feed is processing. </p> <p>To obtain this ID, use the
   * SearchFixtures operation to find the fixture, then use the fixtureId from the
   * matching FixtureSummary. </p>
   */
  inline const Aws::String& GetFixtureId() const { return m_fixtureId; }
  inline bool FixtureIdHasBeenSet() const { return m_fixtureIdHasBeenSet; }
  template <typename FixtureIdT = Aws::String>
  void SetFixtureId(FixtureIdT&& value) {
    m_fixtureIdHasBeenSet = true;
    m_fixtureId = std::forward<FixtureIdT>(value);
  }
  template <typename FixtureIdT = Aws::String>
  DataSourceConfiguration& WithFixtureId(FixtureIdT&& value) {
    SetFixtureId(std::forward<FixtureIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fixtureId;
  bool m_fixtureIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
