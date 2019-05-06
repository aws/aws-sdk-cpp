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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API DeleteRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    DeleteRelationalDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRelationalDatabase"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>Determines whether a final database snapshot is created before your database
     * is deleted. If <code>true</code> is specified, no database snapshot is created.
     * If <code>false</code> is specified, a database snapshot is created before your
     * database is deleted.</p> <p>You must specify the <code>final relational database
     * snapshot name</code> parameter if the <code>skip final snapshot</code> parameter
     * is <code>false</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p>Determines whether a final database snapshot is created before your database
     * is deleted. If <code>true</code> is specified, no database snapshot is created.
     * If <code>false</code> is specified, a database snapshot is created before your
     * database is deleted.</p> <p>You must specify the <code>final relational database
     * snapshot name</code> parameter if the <code>skip final snapshot</code> parameter
     * is <code>false</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }

    /**
     * <p>Determines whether a final database snapshot is created before your database
     * is deleted. If <code>true</code> is specified, no database snapshot is created.
     * If <code>false</code> is specified, a database snapshot is created before your
     * database is deleted.</p> <p>You must specify the <code>final relational database
     * snapshot name</code> parameter if the <code>skip final snapshot</code> parameter
     * is <code>false</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p>Determines whether a final database snapshot is created before your database
     * is deleted. If <code>true</code> is specified, no database snapshot is created.
     * If <code>false</code> is specified, a database snapshot is created before your
     * database is deleted.</p> <p>You must specify the <code>final relational database
     * snapshot name</code> parameter if the <code>skip final snapshot</code> parameter
     * is <code>false</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline DeleteRelationalDatabaseRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}


    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalRelationalDatabaseSnapshotName() const{ return m_finalRelationalDatabaseSnapshotName; }

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline bool FinalRelationalDatabaseSnapshotNameHasBeenSet() const { return m_finalRelationalDatabaseSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetFinalRelationalDatabaseSnapshotName(const Aws::String& value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName = value; }

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetFinalRelationalDatabaseSnapshotName(Aws::String&& value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName = std::move(value); }

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetFinalRelationalDatabaseSnapshotName(const char* value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName.assign(value); }

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(const Aws::String& value) { SetFinalRelationalDatabaseSnapshotName(value); return *this;}

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(Aws::String&& value) { SetFinalRelationalDatabaseSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> <note>
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> </note>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(const char* value) { SetFinalRelationalDatabaseSnapshotName(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet;

    Aws::String m_finalRelationalDatabaseSnapshotName;
    bool m_finalRelationalDatabaseSnapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
