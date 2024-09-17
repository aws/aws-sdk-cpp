/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class DeleteCrossAccountAttachmentRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API DeleteCrossAccountAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCrossAccountAttachment"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cross-account attachment to
     * delete.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }
    inline DeleteCrossAccountAttachmentRequest& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}
    inline DeleteCrossAccountAttachmentRequest& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}
    inline DeleteCrossAccountAttachmentRequest& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
