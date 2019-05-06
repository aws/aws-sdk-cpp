/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloud9/model/Permissions.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class AWS_CLOUD9_API DescribeEnvironmentMembershipsRequest : public Cloud9Request
  {
  public:
    DescribeEnvironmentMembershipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEnvironmentMemberships"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an individual environment member to get
     * information about. If no value is specified, information about all environment
     * members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment to get environment member information about.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline const Aws::Vector<Permissions>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permissions>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline void SetPermissions(Aws::Vector<Permissions>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithPermissions(const Aws::Vector<Permissions>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithPermissions(Aws::Vector<Permissions>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& AddPermissions(const Permissions& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The type of environment member permissions to get information about.
     * Available values include:</p> <ul> <li> <p> <code>owner</code>: Owns the
     * environment.</p> </li> <li> <p> <code>read-only</code>: Has read-only access to
     * the environment.</p> </li> <li> <p> <code>read-write</code>: Has read-write
     * access to the environment.</p> </li> </ul> <p>If no value is specified,
     * information about all environment members are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& AddPermissions(Permissions&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>During a previous call, if there are more than 25 items in the list, only the
     * first 25 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of environment members to get information about.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of environment members to get information about.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of environment members to get information about.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of environment members to get information about.</p>
     */
    inline DescribeEnvironmentMembershipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;

    Aws::Vector<Permissions> m_permissions;
    bool m_permissionsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
