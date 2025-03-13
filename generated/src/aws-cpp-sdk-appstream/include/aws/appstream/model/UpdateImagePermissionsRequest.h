/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImagePermissions.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateImagePermissionsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateImagePermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImagePermissions"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the private image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateImagePermissionsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit identifier of the AWS account for which you want add or update
     * image permissions.</p>
     */
    inline const Aws::String& GetSharedAccountId() const { return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    template<typename SharedAccountIdT = Aws::String>
    void SetSharedAccountId(SharedAccountIdT&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::forward<SharedAccountIdT>(value); }
    template<typename SharedAccountIdT = Aws::String>
    UpdateImagePermissionsRequest& WithSharedAccountId(SharedAccountIdT&& value) { SetSharedAccountId(std::forward<SharedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions for the image.</p>
     */
    inline const ImagePermissions& GetImagePermissions() const { return m_imagePermissions; }
    inline bool ImagePermissionsHasBeenSet() const { return m_imagePermissionsHasBeenSet; }
    template<typename ImagePermissionsT = ImagePermissions>
    void SetImagePermissions(ImagePermissionsT&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::forward<ImagePermissionsT>(value); }
    template<typename ImagePermissionsT = ImagePermissions>
    UpdateImagePermissionsRequest& WithImagePermissions(ImagePermissionsT&& value) { SetImagePermissions(std::forward<ImagePermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;

    ImagePermissions m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
