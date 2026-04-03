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
 * <p>List DataAutomationLibraryEntities Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListDataAutomationLibraryEntitiesRequest">AWS
 * API Reference</a></p>
 */
class ListDataAutomationLibraryEntitiesRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationLibraryEntitiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDataAutomationLibraryEntities"; }

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
  ListDataAutomationLibraryEntitiesRequest& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type for which the entity list is requested</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline ListDataAutomationLibraryEntitiesRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDataAutomationLibraryEntitiesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for retrieving the next set of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataAutomationLibraryEntitiesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;

  EntityType m_entityType{EntityType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_libraryArnHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
