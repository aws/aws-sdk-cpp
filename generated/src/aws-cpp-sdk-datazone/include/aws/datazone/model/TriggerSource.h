/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/TriggerSourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The source that triggered a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TriggerSource">AWS
 * API Reference</a></p>
 */
class TriggerSource {
 public:
  AWS_DATAZONE_API TriggerSource() = default;
  AWS_DATAZONE_API TriggerSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API TriggerSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the trigger source. Valid values are <code>MANUAL</code>,
   * <code>SCHEDULED</code>, and <code>WORKFLOW</code>.</p>
   */
  inline TriggerSourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TriggerSourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TriggerSource& WithType(TriggerSourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the trigger source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TriggerSource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  TriggerSourceType m_type{TriggerSourceType::NOT_SET};

  Aws::String m_name;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
