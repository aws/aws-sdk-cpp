/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/MetadataModelReference.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {
class DescribeMetadataModelResult {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelResult() = default;
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the metadata model.</p>
   */
  inline const Aws::String& GetMetadataModelName() const { return m_metadataModelName; }
  template <typename MetadataModelNameT = Aws::String>
  void SetMetadataModelName(MetadataModelNameT&& value) {
    m_metadataModelNameHasBeenSet = true;
    m_metadataModelName = std::forward<MetadataModelNameT>(value);
  }
  template <typename MetadataModelNameT = Aws::String>
  DescribeMetadataModelResult& WithMetadataModelName(MetadataModelNameT&& value) {
    SetMetadataModelName(std::forward<MetadataModelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the metadata model.</p>
   */
  inline const Aws::String& GetMetadataModelType() const { return m_metadataModelType; }
  template <typename MetadataModelTypeT = Aws::String>
  void SetMetadataModelType(MetadataModelTypeT&& value) {
    m_metadataModelTypeHasBeenSet = true;
    m_metadataModelType = std::forward<MetadataModelTypeT>(value);
  }
  template <typename MetadataModelTypeT = Aws::String>
  DescribeMetadataModelResult& WithMetadataModelType(MetadataModelTypeT&& value) {
    SetMetadataModelType(std::forward<MetadataModelTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of counterpart metadata models in the target. This field is populated
   * only when Origin is SOURCE and after the object has been converted by DMS Schema
   * Conversion.</p>
   */
  inline const Aws::Vector<MetadataModelReference>& GetTargetMetadataModels() const { return m_targetMetadataModels; }
  template <typename TargetMetadataModelsT = Aws::Vector<MetadataModelReference>>
  void SetTargetMetadataModels(TargetMetadataModelsT&& value) {
    m_targetMetadataModelsHasBeenSet = true;
    m_targetMetadataModels = std::forward<TargetMetadataModelsT>(value);
  }
  template <typename TargetMetadataModelsT = Aws::Vector<MetadataModelReference>>
  DescribeMetadataModelResult& WithTargetMetadataModels(TargetMetadataModelsT&& value) {
    SetTargetMetadataModels(std::forward<TargetMetadataModelsT>(value));
    return *this;
  }
  template <typename TargetMetadataModelsT = MetadataModelReference>
  DescribeMetadataModelResult& AddTargetMetadataModels(TargetMetadataModelsT&& value) {
    m_targetMetadataModelsHasBeenSet = true;
    m_targetMetadataModels.emplace_back(std::forward<TargetMetadataModelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SQL text of the metadata model. This field might not be populated for
   * some metadata models.</p>
   */
  inline const Aws::String& GetDefinition() const { return m_definition; }
  template <typename DefinitionT = Aws::String>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = Aws::String>
  DescribeMetadataModelResult& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeMetadataModelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataModelName;

  Aws::String m_metadataModelType;

  Aws::Vector<MetadataModelReference> m_targetMetadataModels;

  Aws::String m_definition;

  Aws::String m_requestId;
  bool m_metadataModelNameHasBeenSet = false;
  bool m_metadataModelTypeHasBeenSet = false;
  bool m_targetMetadataModelsHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
