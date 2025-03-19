/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/SchemaAnalysisRuleRequest.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class BatchGetSchemaAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetSchemaAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    BatchGetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline const Aws::Vector<SchemaAnalysisRuleRequest>& GetSchemaAnalysisRuleRequests() const { return m_schemaAnalysisRuleRequests; }
    inline bool SchemaAnalysisRuleRequestsHasBeenSet() const { return m_schemaAnalysisRuleRequestsHasBeenSet; }
    template<typename SchemaAnalysisRuleRequestsT = Aws::Vector<SchemaAnalysisRuleRequest>>
    void SetSchemaAnalysisRuleRequests(SchemaAnalysisRuleRequestsT&& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests = std::forward<SchemaAnalysisRuleRequestsT>(value); }
    template<typename SchemaAnalysisRuleRequestsT = Aws::Vector<SchemaAnalysisRuleRequest>>
    BatchGetSchemaAnalysisRuleRequest& WithSchemaAnalysisRuleRequests(SchemaAnalysisRuleRequestsT&& value) { SetSchemaAnalysisRuleRequests(std::forward<SchemaAnalysisRuleRequestsT>(value)); return *this;}
    template<typename SchemaAnalysisRuleRequestsT = SchemaAnalysisRuleRequest>
    BatchGetSchemaAnalysisRuleRequest& AddSchemaAnalysisRuleRequests(SchemaAnalysisRuleRequestsT&& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests.emplace_back(std::forward<SchemaAnalysisRuleRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::Vector<SchemaAnalysisRuleRequest> m_schemaAnalysisRuleRequests;
    bool m_schemaAnalysisRuleRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
