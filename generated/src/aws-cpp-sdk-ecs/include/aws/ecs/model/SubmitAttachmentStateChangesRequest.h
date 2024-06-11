﻿/**
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
    AWS_ECS_API SubmitAttachmentStateChangesRequest();

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
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline SubmitAttachmentStateChangesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline SubmitAttachmentStateChangesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline SubmitAttachmentStateChangesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentStateChange>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentStateChange>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline SubmitAttachmentStateChangesRequest& WithAttachments(const Aws::Vector<AttachmentStateChange>& value) { SetAttachments(value); return *this;}
    inline SubmitAttachmentStateChangesRequest& WithAttachments(Aws::Vector<AttachmentStateChange>&& value) { SetAttachments(std::move(value)); return *this;}
    inline SubmitAttachmentStateChangesRequest& AddAttachments(const AttachmentStateChange& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline SubmitAttachmentStateChangesRequest& AddAttachments(AttachmentStateChange&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
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
