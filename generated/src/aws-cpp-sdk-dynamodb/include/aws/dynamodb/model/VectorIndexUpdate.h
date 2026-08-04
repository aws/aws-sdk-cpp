/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/CreateVectorIndexAction.h>
#include <aws/dynamodb/model/DeleteVectorIndexAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>A vector index to be added to or removed from a table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/VectorIndexUpdate">AWS
 * API Reference</a></p>
 */
class VectorIndexUpdate {
 public:
  AWS_DYNAMODB_API VectorIndexUpdate() = default;
  AWS_DYNAMODB_API VectorIndexUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API VectorIndexUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for creating a new vector index on the table.</p>
   */
  inline const CreateVectorIndexAction& GetCreate() const { return m_create; }
  inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
  template <typename CreateT = CreateVectorIndexAction>
  void SetCreate(CreateT&& value) {
    m_createHasBeenSet = true;
    m_create = std::forward<CreateT>(value);
  }
  template <typename CreateT = CreateVectorIndexAction>
  VectorIndexUpdate& WithCreate(CreateT&& value) {
    SetCreate(std::forward<CreateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for deleting an existing vector index from the table.</p>
   */
  inline const DeleteVectorIndexAction& GetDelete() const { return m_delete; }
  inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
  template <typename DeleteT = DeleteVectorIndexAction>
  void SetDelete(DeleteT&& value) {
    m_deleteHasBeenSet = true;
    m_delete = std::forward<DeleteT>(value);
  }
  template <typename DeleteT = DeleteVectorIndexAction>
  VectorIndexUpdate& WithDelete(DeleteT&& value) {
    SetDelete(std::forward<DeleteT>(value));
    return *this;
  }
  ///@}
 private:
  CreateVectorIndexAction m_create;

  DeleteVectorIndexAction m_delete;
  bool m_createHasBeenSet = false;
  bool m_deleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
