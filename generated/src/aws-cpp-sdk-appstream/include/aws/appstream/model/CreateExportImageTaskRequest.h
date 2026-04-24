/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppStream {
namespace Model {

/**
 */
class CreateExportImageTaskRequest : public AppStreamRequest {
 public:
  AWS_APPSTREAM_API CreateExportImageTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExportImageTask"; }

  AWS_APPSTREAM_API Aws::String SerializePayload() const override;

  AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the WorkSpaces Applications image to export. The image must be in
   * an available state and owned by your account.</p>
   */
  inline const Aws::String& GetImageName() const { return m_imageName; }
  inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
  template <typename ImageNameT = Aws::String>
  void SetImageName(ImageNameT&& value) {
    m_imageNameHasBeenSet = true;
    m_imageName = std::forward<ImageNameT>(value);
  }
  template <typename ImageNameT = Aws::String>
  CreateExportImageTaskRequest& WithImageName(ImageNameT&& value) {
    SetImageName(std::forward<ImageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the exported EC2 AMI. This is a required field that must be
   * unique within your account and region.</p>
   */
  inline const Aws::String& GetAmiName() const { return m_amiName; }
  inline bool AmiNameHasBeenSet() const { return m_amiNameHasBeenSet; }
  template <typename AmiNameT = Aws::String>
  void SetAmiName(AmiNameT&& value) {
    m_amiNameHasBeenSet = true;
    m_amiName = std::forward<AmiNameT>(value);
  }
  template <typename AmiNameT = Aws::String>
  CreateExportImageTaskRequest& WithAmiName(AmiNameT&& value) {
    SetAmiName(std::forward<AmiNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that allows WorkSpaces Applications to create the
   * AMI. The role must have permissions to copy images, describe images, and create
   * tags, with a trust relationship allowing appstream.amazonaws.com to assume the
   * role.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  CreateExportImageTaskRequest& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the exported AMI. These tags help you organize and
   * manage your EC2 AMIs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Map<Aws::String, Aws::String>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Map<Aws::String, Aws::String>>
  CreateExportImageTaskRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsKeyT = Aws::String, typename TagSpecificationsValueT = Aws::String>
  CreateExportImageTaskRequest& AddTagSpecifications(TagSpecificationsKeyT&& key, TagSpecificationsValueT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace(std::forward<TagSpecificationsKeyT>(key), std::forward<TagSpecificationsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the exported AMI. This description will be
   * applied to the resulting EC2 AMI.</p>
   */
  inline const Aws::String& GetAmiDescription() const { return m_amiDescription; }
  inline bool AmiDescriptionHasBeenSet() const { return m_amiDescriptionHasBeenSet; }
  template <typename AmiDescriptionT = Aws::String>
  void SetAmiDescription(AmiDescriptionT&& value) {
    m_amiDescriptionHasBeenSet = true;
    m_amiDescription = std::forward<AmiDescriptionT>(value);
  }
  template <typename AmiDescriptionT = Aws::String>
  CreateExportImageTaskRequest& WithAmiDescription(AmiDescriptionT&& value) {
    SetAmiDescription(std::forward<AmiDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageName;

  Aws::String m_amiName;

  Aws::String m_iamRoleArn;

  Aws::Map<Aws::String, Aws::String> m_tagSpecifications;

  Aws::String m_amiDescription;
  bool m_imageNameHasBeenSet = false;
  bool m_amiNameHasBeenSet = false;
  bool m_iamRoleArnHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_amiDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
