/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class DeleteAttachmentRequest : public GlueRequest {
 public:
  AWS_GLUE_API DeleteAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAttachment"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the asset from which to delete the attachment.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  DeleteAttachmentRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attachment to delete.</p>
   */
  inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
  inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
  template <typename AttachmentNameT = Aws::String>
  void SetAttachmentName(AttachmentNameT&& value) {
    m_attachmentNameHasBeenSet = true;
    m_attachmentName = std::forward<AttachmentNameT>(value);
  }
  template <typename AttachmentNameT = Aws::String>
  DeleteAttachmentRequest& WithAttachmentName(AttachmentNameT&& value) {
    SetAttachmentName(std::forward<AttachmentNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_attachmentName;
  bool m_identifierHasBeenSet = false;
  bool m_attachmentNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
