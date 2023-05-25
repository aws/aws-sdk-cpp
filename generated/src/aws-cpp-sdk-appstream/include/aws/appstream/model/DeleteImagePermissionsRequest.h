/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DeleteImagePermissionsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DeleteImagePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImagePermissions"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the private image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the private image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the private image.</p>
     */
    inline DeleteImagePermissionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the private image.</p>
     */
    inline DeleteImagePermissionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the private image.</p>
     */
    inline DeleteImagePermissionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline DeleteImagePermissionsRequest& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline DeleteImagePermissionsRequest& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit identifier of the AWS account for which to delete image
     * permissions.</p>
     */
    inline DeleteImagePermissionsRequest& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
