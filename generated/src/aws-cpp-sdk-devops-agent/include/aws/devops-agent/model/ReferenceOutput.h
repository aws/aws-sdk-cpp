/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Reference information linking a task to external systems - for output without
 * validation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ReferenceOutput">AWS
 * API Reference</a></p>
 */
class ReferenceOutput {
 public:
  AWS_DEVOPSAGENT_API ReferenceOutput() = default;
  AWS_DEVOPSAGENT_API ReferenceOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ReferenceOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the external system</p>
   */
  inline const Aws::String& GetSystem() const { return m_system; }
  inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
  template <typename SystemT = Aws::String>
  void SetSystem(SystemT&& value) {
    m_systemHasBeenSet = true;
    m_system = std::forward<SystemT>(value);
  }
  template <typename SystemT = Aws::String>
  ReferenceOutput& WithSystem(SystemT&& value) {
    SetSystem(std::forward<SystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional title for the reference</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ReferenceOutput& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier in the external system</p>
   */
  inline const Aws::String& GetReferenceId() const { return m_referenceId; }
  inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
  template <typename ReferenceIdT = Aws::String>
  void SetReferenceId(ReferenceIdT&& value) {
    m_referenceIdHasBeenSet = true;
    m_referenceId = std::forward<ReferenceIdT>(value);
  }
  template <typename ReferenceIdT = Aws::String>
  ReferenceOutput& WithReferenceId(ReferenceIdT&& value) {
    SetReferenceId(std::forward<ReferenceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL to access the reference in the external system</p>
   */
  inline const Aws::String& GetReferenceUrl() const { return m_referenceUrl; }
  inline bool ReferenceUrlHasBeenSet() const { return m_referenceUrlHasBeenSet; }
  template <typename ReferenceUrlT = Aws::String>
  void SetReferenceUrl(ReferenceUrlT&& value) {
    m_referenceUrlHasBeenSet = true;
    m_referenceUrl = std::forward<ReferenceUrlT>(value);
  }
  template <typename ReferenceUrlT = Aws::String>
  ReferenceOutput& WithReferenceUrl(ReferenceUrlT&& value) {
    SetReferenceUrl(std::forward<ReferenceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Association identifier of the external system</p>
   */
  inline const Aws::String& GetAssociationId() const { return m_associationId; }
  inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
  template <typename AssociationIdT = Aws::String>
  void SetAssociationId(AssociationIdT&& value) {
    m_associationIdHasBeenSet = true;
    m_associationId = std::forward<AssociationIdT>(value);
  }
  template <typename AssociationIdT = Aws::String>
  ReferenceOutput& WithAssociationId(AssociationIdT&& value) {
    SetAssociationId(std::forward<AssociationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_system;

  Aws::String m_title;

  Aws::String m_referenceId;

  Aws::String m_referenceUrl;

  Aws::String m_associationId;
  bool m_systemHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_referenceIdHasBeenSet = false;
  bool m_referenceUrlHasBeenSet = false;
  bool m_associationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
