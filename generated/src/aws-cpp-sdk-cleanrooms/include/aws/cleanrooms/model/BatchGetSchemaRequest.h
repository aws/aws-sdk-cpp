/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class BatchGetSchemaRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetSchema"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline BatchGetSchemaRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline BatchGetSchemaRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the schemas belong to.
     * Currently accepts collaboration ID.</p>
     */
    inline BatchGetSchemaRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline BatchGetSchemaRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline BatchGetSchemaRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline BatchGetSchemaRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline BatchGetSchemaRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The names for the schema objects to retrieve.&gt;</p>
     */
    inline BatchGetSchemaRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
