/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {

/**
 * <p>The database object that the schema conversion operation currently
 * uses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ProcessedObject">AWS
 * API Reference</a></p>
 */
class ProcessedObject {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API ProcessedObject() = default;
  AWS_DATABASEMIGRATIONSERVICE_API ProcessedObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API ProcessedObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the database object.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ProcessedObject& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the database object. For example, a table, view, procedure, and
   * so on.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ProcessedObject& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the data provider. This parameter can store one of the following
   * values: <code>"SOURCE"</code> or <code>"TARGET"</code>.</p>
   */
  inline const Aws::String& GetEndpointType() const { return m_endpointType; }
  inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
  template <typename EndpointTypeT = Aws::String>
  void SetEndpointType(EndpointTypeT&& value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = std::forward<EndpointTypeT>(value);
  }
  template <typename EndpointTypeT = Aws::String>
  ProcessedObject& WithEndpointType(EndpointTypeT&& value) {
    SetEndpointType(std::forward<EndpointTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  Aws::String m_endpointType;
  bool m_endpointTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
