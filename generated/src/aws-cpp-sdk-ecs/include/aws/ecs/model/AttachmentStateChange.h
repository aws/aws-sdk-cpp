/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing a change in state for a task attachment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AttachmentStateChange">AWS
   * API Reference</a></p>
   */
  class AttachmentStateChange
  {
  public:
    AWS_ECS_API AttachmentStateChange();
    AWS_ECS_API AttachmentStateChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AttachmentStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }
    inline AttachmentStateChange& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}
    inline AttachmentStateChange& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}
    inline AttachmentStateChange& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the attachment.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AttachmentStateChange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AttachmentStateChange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AttachmentStateChange& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
