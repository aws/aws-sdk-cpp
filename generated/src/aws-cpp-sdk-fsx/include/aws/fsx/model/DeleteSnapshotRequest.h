/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DeleteSnapshotRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSnapshot"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteSnapshotRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteSnapshotRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteSnapshotRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline DeleteSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline DeleteSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot that you want to delete.</p>
     */
    inline DeleteSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
