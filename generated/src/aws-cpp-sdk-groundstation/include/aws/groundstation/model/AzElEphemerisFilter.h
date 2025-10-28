/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Filter for selecting contacts that use a specific
 * <a>AzElEphemeris</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AzElEphemerisFilter">AWS
 * API Reference</a></p>
 */
class AzElEphemerisFilter {
 public:
  AWS_GROUNDSTATION_API AzElEphemerisFilter() = default;
  AWS_GROUNDSTATION_API AzElEphemerisFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AzElEphemerisFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the azimuth elevation ephemeris.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AzElEphemerisFilter& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
