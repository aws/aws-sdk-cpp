/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImagePermissions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the permissions that are available to the specified AWS account for
   * a shared image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/SharedImagePermissions">AWS
   * API Reference</a></p>
   */
  class SharedImagePermissions
  {
  public:
    AWS_APPSTREAM_API SharedImagePermissions();
    AWS_APPSTREAM_API SharedImagePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API SharedImagePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline SharedImagePermissions& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline SharedImagePermissions& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline SharedImagePermissions& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}


    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const{ return m_imagePermissions; }

    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }

    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline void SetImagePermissions(const ImagePermissions& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = value; }

    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline void SetImagePermissions(ImagePermissions&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::move(value); }

    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline SharedImagePermissions& WithImagePermissions(const ImagePermissions& value) { SetImagePermissions(value); return *this;}

    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline SharedImagePermissions& WithImagePermissions(ImagePermissions&& value) { SetImagePermissions(std::move(value)); return *this;}

  private:

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
