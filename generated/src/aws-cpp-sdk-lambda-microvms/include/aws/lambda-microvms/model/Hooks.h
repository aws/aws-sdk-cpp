/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmHooks.h>
#include <aws/lambda-microvms/model/MicrovmImageHooks.h>

#include <utility>

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
 * <p>Lifecycle hook configuration for MicroVMs and MicroVM images.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/Hooks">AWS
 * API Reference</a></p>
 */
class Hooks {
 public:
  AWS_LAMBDAMICROVMS_API Hooks() = default;
  AWS_LAMBDAMICROVMS_API Hooks(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Hooks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port number on which the hooks listener runs.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline Hooks& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle hooks for MicroVM events.</p>
   */
  inline const MicrovmHooks& GetMicrovmHooks() const { return m_microvmHooks; }
  inline bool MicrovmHooksHasBeenSet() const { return m_microvmHooksHasBeenSet; }
  template <typename MicrovmHooksT = MicrovmHooks>
  void SetMicrovmHooks(MicrovmHooksT&& value) {
    m_microvmHooksHasBeenSet = true;
    m_microvmHooks = std::forward<MicrovmHooksT>(value);
  }
  template <typename MicrovmHooksT = MicrovmHooks>
  Hooks& WithMicrovmHooks(MicrovmHooksT&& value) {
    SetMicrovmHooks(std::forward<MicrovmHooksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hooks for MicroVM image build events.</p>
   */
  inline const MicrovmImageHooks& GetMicrovmImageHooks() const { return m_microvmImageHooks; }
  inline bool MicrovmImageHooksHasBeenSet() const { return m_microvmImageHooksHasBeenSet; }
  template <typename MicrovmImageHooksT = MicrovmImageHooks>
  void SetMicrovmImageHooks(MicrovmImageHooksT&& value) {
    m_microvmImageHooksHasBeenSet = true;
    m_microvmImageHooks = std::forward<MicrovmImageHooksT>(value);
  }
  template <typename MicrovmImageHooksT = MicrovmImageHooks>
  Hooks& WithMicrovmImageHooks(MicrovmImageHooksT&& value) {
    SetMicrovmImageHooks(std::forward<MicrovmImageHooksT>(value));
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  MicrovmHooks m_microvmHooks;

  MicrovmImageHooks m_microvmImageHooks;
  bool m_portHasBeenSet = false;
  bool m_microvmHooksHasBeenSet = false;
  bool m_microvmImageHooksHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
