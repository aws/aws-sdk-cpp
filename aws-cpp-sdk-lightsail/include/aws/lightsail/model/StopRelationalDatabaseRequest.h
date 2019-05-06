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
  class AWS_LIGHTSAIL_API StopRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    StopRelationalDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopRelationalDatabase"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database to stop.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database to stop.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database to stop.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database to stop.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database to stop.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database to stop.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database to stop.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database to stop.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const{ return m_relationalDatabaseSnapshotName; }

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const Aws::String& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = value; }

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(Aws::String&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::move(value); }

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const char* value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName.assign(value); }

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseSnapshotName(const Aws::String& value) { SetRelationalDatabaseSnapshotName(value); return *this;}

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseSnapshotName(Aws::String&& value) { SetRelationalDatabaseSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline StopRelationalDatabaseRequest& WithRelationalDatabaseSnapshotName(const char* value) { SetRelationalDatabaseSnapshotName(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
