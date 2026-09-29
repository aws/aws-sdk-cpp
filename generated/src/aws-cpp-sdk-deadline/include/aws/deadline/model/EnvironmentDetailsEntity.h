/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The details of a specified environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/EnvironmentDetailsEntity">AWS
 * API Reference</a></p>
 */
class EnvironmentDetailsEntity {
 public:
  AWS_DEADLINE_API EnvironmentDetailsEntity() = default;
  AWS_DEADLINE_API EnvironmentDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API EnvironmentDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The job ID.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  EnvironmentDetailsEntity& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment ID.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  EnvironmentDetailsEntity& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema version in the environment.</p>
   */
  inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
  inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
  template <typename SchemaVersionT = Aws::String>
  void SetSchemaVersion(SchemaVersionT&& value) {
    m_schemaVersionHasBeenSet = true;
    m_schemaVersion = std::forward<SchemaVersionT>(value);
  }
  template <typename SchemaVersionT = Aws::String>
  EnvironmentDetailsEntity& WithSchemaVersion(SchemaVersionT&& value) {
    SetSchemaVersion(std::forward<SchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template used for the environment.</p>
   */
  inline Aws::Utils::DocumentView GetTemplate() const { return m_template; }
  inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
  template <typename TemplateT = Aws::Utils::Document>
  void SetTemplate(TemplateT&& value) {
    m_templateHasBeenSet = true;
    m_template = std::forward<TemplateT>(value);
  }
  template <typename TemplateT = Aws::Utils::Document>
  EnvironmentDetailsEntity& WithTemplate(TemplateT&& value) {
    SetTemplate(std::forward<TemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Open Job Description extensions that the environment uses. This value is
   * used by the worker agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExtensions() const { return m_extensions; }
  inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }
  template <typename ExtensionsT = Aws::Vector<Aws::String>>
  void SetExtensions(ExtensionsT&& value) {
    m_extensionsHasBeenSet = true;
    m_extensions = std::forward<ExtensionsT>(value);
  }
  template <typename ExtensionsT = Aws::Vector<Aws::String>>
  EnvironmentDetailsEntity& WithExtensions(ExtensionsT&& value) {
    SetExtensions(std::forward<ExtensionsT>(value));
    return *this;
  }
  template <typename ExtensionsT = Aws::String>
  EnvironmentDetailsEntity& AddExtensions(ExtensionsT&& value) {
    m_extensionsHasBeenSet = true;
    m_extensions.emplace_back(std::forward<ExtensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolved symbol table for the environment's expressions, serialized as
   * JSON. This value is used by the worker agent.</p>
   */
  inline const Aws::String& GetResolvedSymbolTable() const { return m_resolvedSymbolTable; }
  inline bool ResolvedSymbolTableHasBeenSet() const { return m_resolvedSymbolTableHasBeenSet; }
  template <typename ResolvedSymbolTableT = Aws::String>
  void SetResolvedSymbolTable(ResolvedSymbolTableT&& value) {
    m_resolvedSymbolTableHasBeenSet = true;
    m_resolvedSymbolTable = std::forward<ResolvedSymbolTableT>(value);
  }
  template <typename ResolvedSymbolTableT = Aws::String>
  EnvironmentDetailsEntity& WithResolvedSymbolTable(ResolvedSymbolTableT&& value) {
    SetResolvedSymbolTable(std::forward<ResolvedSymbolTableT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  Aws::String m_environmentId;

  Aws::String m_schemaVersion;

  Aws::Utils::Document m_template;

  Aws::Vector<Aws::String> m_extensions;

  Aws::String m_resolvedSymbolTable;
  bool m_jobIdHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_schemaVersionHasBeenSet = false;
  bool m_templateHasBeenSet = false;
  bool m_extensionsHasBeenSet = false;
  bool m_resolvedSymbolTableHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
