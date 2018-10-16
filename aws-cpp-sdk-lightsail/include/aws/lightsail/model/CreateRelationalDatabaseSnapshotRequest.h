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
  class AWS_LIGHTSAIL_API CreateRelationalDatabaseSnapshotRequest : public LightsailRequest
  {
  public:
    CreateRelationalDatabaseSnapshotRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelationalDatabaseSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database on which to base your new snapshot.</p>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const{ return m_relationalDatabaseSnapshotName; }

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseSnapshotName(const Aws::String& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = value; }

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseSnapshotName(Aws::String&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::move(value); }

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseSnapshotName(const char* value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName.assign(value); }

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(const Aws::String& value) { SetRelationalDatabaseSnapshotName(value); return *this;}

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(Aws::String&& value) { SetRelationalDatabaseSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name for your new database snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 2 to 255 alphanumeric characters, or hyphens.</p> </li>
     * <li> <p>The first and last character must be a letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(const char* value) { SetRelationalDatabaseSnapshotName(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
