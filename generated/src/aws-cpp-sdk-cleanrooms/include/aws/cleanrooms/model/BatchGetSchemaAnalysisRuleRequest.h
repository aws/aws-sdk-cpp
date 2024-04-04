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
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetSchemaAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collaboration that contains the schema analysis
     * rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline const Aws::Vector<SchemaAnalysisRuleRequest>& GetSchemaAnalysisRuleRequests() const{ return m_schemaAnalysisRuleRequests; }

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline bool SchemaAnalysisRuleRequestsHasBeenSet() const { return m_schemaAnalysisRuleRequestsHasBeenSet; }

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline void SetSchemaAnalysisRuleRequests(const Aws::Vector<SchemaAnalysisRuleRequest>& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests = value; }

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline void SetSchemaAnalysisRuleRequests(Aws::Vector<SchemaAnalysisRuleRequest>&& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests = std::move(value); }

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& WithSchemaAnalysisRuleRequests(const Aws::Vector<SchemaAnalysisRuleRequest>& value) { SetSchemaAnalysisRuleRequests(value); return *this;}

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& WithSchemaAnalysisRuleRequests(Aws::Vector<SchemaAnalysisRuleRequest>&& value) { SetSchemaAnalysisRuleRequests(std::move(value)); return *this;}

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& AddSchemaAnalysisRuleRequests(const SchemaAnalysisRuleRequest& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests.push_back(value); return *this; }

    /**
     * <p>The information that's necessary to retrieve a schema analysis rule.</p>
     */
    inline BatchGetSchemaAnalysisRuleRequest& AddSchemaAnalysisRuleRequests(SchemaAnalysisRuleRequest&& value) { m_schemaAnalysisRuleRequestsHasBeenSet = true; m_schemaAnalysisRuleRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::Vector<SchemaAnalysisRuleRequest> m_schemaAnalysisRuleRequests;
    bool m_schemaAnalysisRuleRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
