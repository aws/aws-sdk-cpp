/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetSchemaAnalysisRuleRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetSchemaAnalysisRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaAnalysisRule"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schema belongs to.
     * Currently accepts a collaboration ID.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema to retrieve the analysis rule for.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline const AnalysisRuleType& GetType() const{ return m_type; }

    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline void SetType(const AnalysisRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline void SetType(AnalysisRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithType(const AnalysisRuleType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the schema analysis rule to retrieve. Schema analysis rules are
     * uniquely identified by a combination of the collaboration, the schema name, and
     * their type.</p>
     */
    inline GetSchemaAnalysisRuleRequest& WithType(AnalysisRuleType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AnalysisRuleType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
