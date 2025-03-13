/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/AttachmentStateChange.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class SubmitAttachmentStateChangesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API SubmitAttachmentStateChangesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitAttachmentStateChanges"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    SubmitAttachmentStateChangesRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AttachmentStateChange>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AttachmentStateChange>>
    SubmitAttachmentStateChangesRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AttachmentStateChange>
    SubmitAttachmentStateChangesRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<AttachmentStateChange> m_attachments;
    bool m_attachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
