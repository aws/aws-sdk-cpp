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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>The request parameters to get cluster credentials.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetClusterCredentialsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API GetClusterCredentialsRequest : public RedshiftRequest
  {
  public:
    GetClusterCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClusterCredentials"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain only lowercase letters, numbers, underscore, plus sign, period (dot), at
     * symbol (@), or hyphen.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li>
     * <p>Cannot be a reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::String& GetDbName() const{ return m_dbName; }

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbName(const Aws::String& value) { m_dbNameHasBeenSet = true; m_dbName = value; }

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbName(Aws::String&& value) { m_dbNameHasBeenSet = true; m_dbName = std::move(value); }

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbName(const char* value) { m_dbNameHasBeenSet = true; m_dbName.assign(value); }

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbName(const Aws::String& value) { SetDbName(value); return *this;}

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbName(Aws::String&& value) { SetDbName(std::move(value)); return *this;}

    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbName(const char* value) { SetDbName(value); return *this;}


    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline GetClusterCredentialsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline GetClusterCredentialsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster that contains the database for which
     * your are requesting credentials. This parameter is case sensitive.</p>
     */
    inline GetClusterCredentialsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Constraint: minimum 900, maximum 3600.</p> <p>Default: 900</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Constraint: minimum 900, maximum 3600.</p> <p>Default: 900</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Constraint: minimum 900, maximum 3600.</p> <p>Default: 900</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Constraint: minimum 900, maximum 3600.</p> <p>Default: 900</p>
     */
    inline GetClusterCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>Create a database user with the name specified for the user named in
     * <code>DbUser</code> if one does not exist.</p>
     */
    inline bool GetAutoCreate() const{ return m_autoCreate; }

    /**
     * <p>Create a database user with the name specified for the user named in
     * <code>DbUser</code> if one does not exist.</p>
     */
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }

    /**
     * <p>Create a database user with the name specified for the user named in
     * <code>DbUser</code> if one does not exist.</p>
     */
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }

    /**
     * <p>Create a database user with the name specified for the user named in
     * <code>DbUser</code> if one does not exist.</p>
     */
    inline GetClusterCredentialsRequest& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}


    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDbGroups() const{ return m_dbGroups; }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline bool DbGroupsHasBeenSet() const { return m_dbGroupsHasBeenSet; }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbGroups(const Aws::Vector<Aws::String>& value) { m_dbGroupsHasBeenSet = true; m_dbGroups = value; }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline void SetDbGroups(Aws::Vector<Aws::String>&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups = std::move(value); }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbGroups(const Aws::Vector<Aws::String>& value) { SetDbGroups(value); return *this;}

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& WithDbGroups(Aws::Vector<Aws::String>&& value) { SetDbGroups(std::move(value)); return *this;}

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& AddDbGroups(const Aws::String& value) { m_dbGroupsHasBeenSet = true; m_dbGroups.push_back(value); return *this; }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& AddDbGroups(Aws::String&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline GetClusterCredentialsRequest& AddDbGroups(const char* value) { m_dbGroupsHasBeenSet = true; m_dbGroups.push_back(value); return *this; }

  private:

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet;

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;

    bool m_autoCreate;
    bool m_autoCreateHasBeenSet;

    Aws::Vector<Aws::String> m_dbGroups;
    bool m_dbGroupsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
