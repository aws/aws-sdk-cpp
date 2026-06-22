/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Specifies a range of ports.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/PortRange">AWS
 * API Reference</a></p>
 */
class PortRange {
 public:
  AWS_LAMBDAMICROVMS_API PortRange() = default;
  AWS_LAMBDAMICROVMS_API PortRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The starting port number of the range.</p>
   */
  inline int GetStartPort() const { return m_startPort; }
  inline bool StartPortHasBeenSet() const { return m_startPortHasBeenSet; }
  inline void SetStartPort(int value) {
    m_startPortHasBeenSet = true;
    m_startPort = value;
  }
  inline PortRange& WithStartPort(int value) {
    SetStartPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending port number of the range.</p>
   */
  inline int GetEndPort() const { return m_endPort; }
  inline bool EndPortHasBeenSet() const { return m_endPortHasBeenSet; }
  inline void SetEndPort(int value) {
    m_endPortHasBeenSet = true;
    m_endPort = value;
  }
  inline PortRange& WithEndPort(int value) {
    SetEndPort(value);
    return *this;
  }
  ///@}
 private:
  int m_startPort{0};

  int m_endPort{0};
  bool m_startPortHasBeenSet = false;
  bool m_endPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
