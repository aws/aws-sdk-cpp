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
    AWS_APPSTREAM_API SharedImagePermissions() = default;
    AWS_APPSTREAM_API SharedImagePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API SharedImagePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit identifier of the AWS account with which the image is
     * shared.</p>
     */
    inline const Aws::String& GetSharedAccountId() const { return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    template<typename SharedAccountIdT = Aws::String>
    void SetSharedAccountId(SharedAccountIdT&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::forward<SharedAccountIdT>(value); }
    template<typename SharedAccountIdT = Aws::String>
    SharedImagePermissions& WithSharedAccountId(SharedAccountIdT&& value) { SetSharedAccountId(std::forward<SharedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the permissions for a shared image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const { return m_imagePermissions; }
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }
    template<typename ImagePermissionsT = ImagePermissions>
    void SetImagePermissions(ImagePermissionsT&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::forward<ImagePermissionsT>(value); }
    template<typename ImagePermissionsT = ImagePermissions>
    SharedImagePermissions& WithImagePermissions(ImagePermissionsT&& value) { SetImagePermissions(std::forward<ImagePermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
