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
  class DeleteRelationalDatabaseSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteRelationalDatabaseSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRelationalDatabaseSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the database snapshot that you are deleting.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const { return m_relationalDatabaseSnapshotName; }
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    void SetRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::forward<RelationalDatabaseSnapshotNameT>(value); }
    template<typename RelationalDatabaseSnapshotNameT = Aws::String>
    DeleteRelationalDatabaseSnapshotRequest& WithRelationalDatabaseSnapshotName(RelationalDatabaseSnapshotNameT&& value) { SetRelationalDatabaseSnapshotName(std::forward<RelationalDatabaseSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
