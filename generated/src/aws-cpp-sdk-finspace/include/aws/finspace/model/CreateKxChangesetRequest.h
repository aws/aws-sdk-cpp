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
    AWS_FINSPACE_API CreateKxChangesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxChangeset"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline CreateKxChangesetRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline CreateKxChangesetRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the kdb environment.</p>
     */
    inline CreateKxChangesetRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The name of the kdb database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline CreateKxChangesetRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline CreateKxChangesetRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline CreateKxChangesetRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline const Aws::Vector<ChangeRequest>& GetChangeRequests() const{ return m_changeRequests; }

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline bool ChangeRequestsHasBeenSet() const { return m_changeRequestsHasBeenSet; }

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline void SetChangeRequests(const Aws::Vector<ChangeRequest>& value) { m_changeRequestsHasBeenSet = true; m_changeRequests = value; }

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline void SetChangeRequests(Aws::Vector<ChangeRequest>&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests = std::move(value); }

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline CreateKxChangesetRequest& WithChangeRequests(const Aws::Vector<ChangeRequest>& value) { SetChangeRequests(value); return *this;}

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline CreateKxChangesetRequest& WithChangeRequests(Aws::Vector<ChangeRequest>&& value) { SetChangeRequests(std::move(value)); return *this;}

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline CreateKxChangesetRequest& AddChangeRequests(const ChangeRequest& value) { m_changeRequestsHasBeenSet = true; m_changeRequests.push_back(value); return *this; }

    /**
     * <p>A list of change request objects that are run in order. A change request
     * object consists of changeType , s3Path, and a dbPath. A changeType can has the
     * following values: </p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul> <p>All the change requests require a mandatory <i>dbPath</i> attribute
     * that defines the path within the database directory. The <i>s3Path</i> attribute
     * defines the s3 source file path and is required for a PUT change type.</p>
     * <p>Here is an example of how you can use the change request object:</p> <p>
     * <code>[ { "changeType": "PUT", "s3Path":"s3://bucket/db/2020.01.02/",
     * "dbPath":"/2020.01.02/"}, { "changeType": "PUT", "s3Path":"s3://bucket/db/sym",
     * "dbPath":"/"}, { "changeType": "DELETE", "dbPath": "/2020.01.01/"} ]</code> </p>
     * <p>In this example, the first request with <i>PUT</i> change type allows you to
     * add files in the given s3Path under the <i>2020.01.02</i> partition of the
     * database. The second request with <i>PUT</i> change type allows you to add a
     * single sym file at database root location. The last request with <i>DELETE</i>
     * change type allows you to delete the files under the <i>2020.01.01</i> partition
     * of the database. </p>
     */
    inline CreateKxChangesetRequest& AddChangeRequests(ChangeRequest&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxChangesetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxChangesetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateKxChangesetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<ChangeRequest> m_changeRequests;
    bool m_changeRequestsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
