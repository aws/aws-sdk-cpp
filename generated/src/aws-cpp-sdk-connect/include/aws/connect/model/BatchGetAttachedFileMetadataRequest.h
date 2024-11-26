/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class BatchGetAttachedFileMetadataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API BatchGetAttachedFileMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAttachedFileMetadata"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifiers of the attached file resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileIds() const{ return m_fileIds; }
    inline bool FileIdsHasBeenSet() const { return m_fileIdsHasBeenSet; }
    inline void SetFileIds(const Aws::Vector<Aws::String>& value) { m_fileIdsHasBeenSet = true; m_fileIds = value; }
    inline void SetFileIds(Aws::Vector<Aws::String>&& value) { m_fileIdsHasBeenSet = true; m_fileIds = std::move(value); }
    inline BatchGetAttachedFileMetadataRequest& WithFileIds(const Aws::Vector<Aws::String>& value) { SetFileIds(value); return *this;}
    inline BatchGetAttachedFileMetadataRequest& WithFileIds(Aws::Vector<Aws::String>&& value) { SetFileIds(std::move(value)); return *this;}
    inline BatchGetAttachedFileMetadataRequest& AddFileIds(const Aws::String& value) { m_fileIdsHasBeenSet = true; m_fileIds.push_back(value); return *this; }
    inline BatchGetAttachedFileMetadataRequest& AddFileIds(Aws::String&& value) { m_fileIdsHasBeenSet = true; m_fileIds.push_back(std::move(value)); return *this; }
    inline BatchGetAttachedFileMetadataRequest& AddFileIds(const char* value) { m_fileIdsHasBeenSet = true; m_fileIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline BatchGetAttachedFileMetadataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline BatchGetAttachedFileMetadataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline BatchGetAttachedFileMetadataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the attached file is (being) uploaded to. The supported
     * resources are <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/cases.html">Cases</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-email-channel.html">Email</a>.</p>
     *  <p>This value must be a valid ARN.</p> 
     */
    inline const Aws::String& GetAssociatedResourceArn() const{ return m_associatedResourceArn; }
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
    inline void SetAssociatedResourceArn(const Aws::String& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = value; }
    inline void SetAssociatedResourceArn(Aws::String&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::move(value); }
    inline void SetAssociatedResourceArn(const char* value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn.assign(value); }
    inline BatchGetAttachedFileMetadataRequest& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}
    inline BatchGetAttachedFileMetadataRequest& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}
    inline BatchGetAttachedFileMetadataRequest& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fileIds;
    bool m_fileIdsHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
