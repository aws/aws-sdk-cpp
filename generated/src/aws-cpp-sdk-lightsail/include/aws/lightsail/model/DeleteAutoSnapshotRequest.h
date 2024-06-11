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
  class DeleteAutoSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteAutoSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAutoSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the source instance or disk from which to delete the automatic
     * snapshot.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline DeleteAutoSnapshotRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline DeleteAutoSnapshotRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline DeleteAutoSnapshotRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the automatic snapshot to delete in <code>YYYY-MM-DD</code>
     * format. Use the <code>get auto snapshots</code> operation to get the available
     * automatic snapshots for a resource.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }
    inline DeleteAutoSnapshotRequest& WithDate(const Aws::String& value) { SetDate(value); return *this;}
    inline DeleteAutoSnapshotRequest& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}
    inline DeleteAutoSnapshotRequest& WithDate(const char* value) { SetDate(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_date;
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
