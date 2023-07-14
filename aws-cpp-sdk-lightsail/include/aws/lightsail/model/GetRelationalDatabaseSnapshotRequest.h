﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotRequest : public LightsailRequest
  {
  public:
    GetRelationalDatabaseSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const{ return m_relationalDatabaseSnapshotName; }

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const Aws::String& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = value; }

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(Aws::String&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::move(value); }

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline void SetRelationalDatabaseSnapshotName(const char* value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName.assign(value); }

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline GetRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(const Aws::String& value) { SetRelationalDatabaseSnapshotName(value); return *this;}

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline GetRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(Aws::String&& value) { SetRelationalDatabaseSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the database snapshot for which to get information.</p>
     */
    inline GetRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(const char* value) { SetRelationalDatabaseSnapshotName(value); return *this;}

  private:

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
