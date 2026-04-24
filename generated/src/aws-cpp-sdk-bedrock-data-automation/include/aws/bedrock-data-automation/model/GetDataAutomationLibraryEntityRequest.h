/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Get DataAutomationLibraryEntity Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationLibraryEntityRequest">AWS
 * API Reference</a></p>
 */
class GetDataAutomationLibraryEntityRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryEntityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDataAutomationLibraryEntity"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN generated at the server side when a DataAutomationLibrary is created</p>
   */
  inline const Aws::String& GetLibraryArn() const { return m_libraryArn; }
  inline bool LibraryArnHasBeenSet() const { return m_libraryArnHasBeenSet; }
  template <typename LibraryArnT = Aws::String>
  void SetLibraryArn(LibraryArnT&& value) {
    m_libraryArnHasBeenSet = true;
    m_libraryArn = std::forward<LibraryArnT>(value);
  }
  template <typename LibraryArnT = Aws::String>
  GetDataAutomationLibraryEntityRequest& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type for which the entity is requested</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline GetDataAutomationLibraryEntityRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier for the entity</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  GetDataAutomationLibraryEntityRequest& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityId;
  bool m_libraryArnHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
