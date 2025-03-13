/**
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
  class StopRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API StopRelationalDatabaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopRelationalDatabase"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your database to stop.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    StopRelationalDatabaseRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your new database snapshot to be created before stopping your
     * database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const { return m_relationalDatabaseSnapshotName; }
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    void SetRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::forward<RelationalDatabaseSnapshotNameT>(value); }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    StopRelationalDatabaseRequest& WithRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { SetRelationalDatabaseSnapshotName(std::forward<RelationalDatabaseSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
