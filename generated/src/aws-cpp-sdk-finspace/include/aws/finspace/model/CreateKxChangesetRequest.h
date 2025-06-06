﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/ChangeRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateKxChangesetRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateKxChangesetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxChangeset"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateKxChangesetRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the kdb database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    CreateKxChangesetRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of <code>changeType</code> , <code>s3Path</code>, and
     * <code>dbPath</code>. A changeType can have the following values: </p> <ul> <li>
     * <p>PUT – Adds or updates files in a database.</p> </li> <li> <p>DELETE – Deletes
     * files in a database.</p> </li> </ul> <p>All the change requests require a
     * mandatory <code>dbPath</code> attribute that defines the path within the
     * database directory. All database paths must start with a leading / and end with
     * a trailing /. The <code>s3Path</code> attribute defines the s3 source file path
     * and is required for a PUT change type. The <code>s3path</code> must end with a
     * trailing / if it is a directory and must end without a trailing / if it is a
     * file. </p> <p>Here are few examples of how you can use the change request
     * object:</p> <ol> <li> <p>This request adds a single sym file at database root
     * location. </p> <p> <code>{ "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}</code> </p> </li> <li> <p>This request adds files in the given
     * <code>s3Path</code> under the 2020.01.02 partition of the database.</p> <p>
     * <code>{ "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}</code> </p> </li> <li> <p>This request adds files in
     * the given <code>s3Path</code> under the <i>taq</i> table partition of the
     * database.</p> <p> <code>[ { "changeType": "PUT",
     * "s3Path":"s3://bucket/db/2020.01.02/taq/", "dbPath":"/2020.01.02/taq/"}]</code>
     * </p> </li> <li> <p>This request deletes the 2020.01.02 partition of the
     * database.</p> <p> <code>[{ "changeType": "DELETE", "dbPath": "/2020.01.02/"}
     * ]</code> </p> </li> <li> <p>The <i>DELETE</i> request allows you to delete the
     * existing files under the 2020.01.02 partition of the database, and the
     * <i>PUT</i> request adds a new taq table under it.</p> <p> <code>[ {"changeType":
     * "DELETE", "dbPath":"/2020.01.02/"}, {"changeType": "PUT",
     * "s3Path":"s3://bucket/db/2020.01.02/taq/", "dbPath":"/2020.01.02/taq/"}]</code>
     * </p> </li> </ol>
     */
    inline const Aws::Vector<ChangeRequest>& GetChangeRequests() const { return m_changeRequests; }
    inline bool ChangeRequestsHasBeenSet() const { return m_changeRequestsHasBeenSet; }
    template<typename ChangeRequestsT = Aws::Vector<ChangeRequest>>
    void SetChangeRequests(ChangeRequestsT&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests = std::forward<ChangeRequestsT>(value); }
    template<typename ChangeRequestsT = Aws::Vector<ChangeRequest>>
    CreateKxChangesetRequest& WithChangeRequests(ChangeRequestsT&& value) { SetChangeRequests(std::forward<ChangeRequestsT>(value)); return *this;}
    template<typename ChangeRequestsT = ChangeRequest>
    CreateKxChangesetRequest& AddChangeRequests(ChangeRequestsT&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests.emplace_back(std::forward<ChangeRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateKxChangesetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<ChangeRequest> m_changeRequests;
    bool m_changeRequestsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
