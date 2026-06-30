/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableColumn.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class UpdateIntermediateTableRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API UpdateIntermediateTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIntermediateTable"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the intermediate table to update.</p>
   */
  inline const Aws::String& GetIntermediateTableIdentifier() const { return m_intermediateTableIdentifier; }
  inline bool IntermediateTableIdentifierHasBeenSet() const { return m_intermediateTableIdentifierHasBeenSet; }
  template <typename IntermediateTableIdentifierT = Aws::String>
  void SetIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    m_intermediateTableIdentifierHasBeenSet = true;
    m_intermediateTableIdentifier = std::forward<IntermediateTableIdentifierT>(value);
  }
  template <typename IntermediateTableIdentifierT = Aws::String>
  UpdateIntermediateTableRequest& WithIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    SetIntermediateTableIdentifier(std::forward<IntermediateTableIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  UpdateIntermediateTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the intermediate table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateIntermediateTableRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer-managed KMS key to use for
   * encrypting future population data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  UpdateIntermediateTableRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns with updated type definitions. Only the type of existing
   * columns can be updated.</p>
   */
  inline const Aws::Vector<IntermediateTableColumn>& GetColumns() const { return m_columns; }
  inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
  template <typename ColumnsT = Aws::Vector<IntermediateTableColumn>>
  void SetColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns = std::forward<ColumnsT>(value);
  }
  template <typename ColumnsT = Aws::Vector<IntermediateTableColumn>>
  UpdateIntermediateTableRequest& WithColumns(ColumnsT&& value) {
    SetColumns(std::forward<ColumnsT>(value));
    return *this;
  }
  template <typename ColumnsT = IntermediateTableColumn>
  UpdateIntermediateTableRequest& AddColumns(ColumnsT&& value) {
    m_columnsHasBeenSet = true;
    m_columns.emplace_back(std::forward<ColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_intermediateTableIdentifier;

  Aws::String m_membershipIdentifier;

  Aws::String m_description;

  Aws::String m_kmsKeyArn;

  Aws::Vector<IntermediateTableColumn> m_columns;
  bool m_intermediateTableIdentifierHasBeenSet = false;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_columnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
