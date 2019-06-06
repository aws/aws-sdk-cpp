/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ECS_API SubmitAttachmentStateChangesRequest : public ECSRequest
  {
  public:
    SubmitAttachmentStateChangesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitAttachmentStateChanges"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline SubmitAttachmentStateChangesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline SubmitAttachmentStateChangesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full ARN of the cluster that hosts the container instance
     * the attachment belongs to.</p>
     */
    inline SubmitAttachmentStateChangesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentStateChange>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentStateChange>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitAttachmentStateChangesRequest& WithAttachments(const Aws::Vector<AttachmentStateChange>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitAttachmentStateChangesRequest& WithAttachments(Aws::Vector<AttachmentStateChange>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitAttachmentStateChangesRequest& AddAttachments(const AttachmentStateChange& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitAttachmentStateChangesRequest& AddAttachments(AttachmentStateChange&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::Vector<AttachmentStateChange> m_attachments;
    bool m_attachmentsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
