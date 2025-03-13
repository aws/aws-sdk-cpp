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
    AWS_ECS_API AttachmentStateChange() = default;
    AWS_ECS_API AttachmentStateChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AttachmentStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentArn() const { return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    template<typename AttachmentArnT = Aws::String>
    void SetAttachmentArn(AttachmentArnT&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::forward<AttachmentArnT>(value); }
    template<typename AttachmentArnT = Aws::String>
    AttachmentStateChange& WithAttachmentArn(AttachmentArnT&& value) { SetAttachmentArn(std::forward<AttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the attachment.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AttachmentStateChange& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
