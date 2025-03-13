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
    AWS_CONNECT_API BatchGetAttachedFileMetadataRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetFileIds() const { return m_fileIds; }
    inline bool FileIdsHasBeenSet() const { return m_fileIdsHasBeenSet; }
    template<typename FileIdsT = Aws::Vector<Aws::String>>
    void SetFileIds(FileIdsT&& value) { m_fileIdsHasBeenSet = true; m_fileIds = std::forward<FileIdsT>(value); }
    template<typename FileIdsT = Aws::Vector<Aws::String>>
    BatchGetAttachedFileMetadataRequest& WithFileIds(FileIdsT&& value) { SetFileIds(std::forward<FileIdsT>(value)); return *this;}
    template<typename FileIdsT = Aws::String>
    BatchGetAttachedFileMetadataRequest& AddFileIds(FileIdsT&& value) { m_fileIdsHasBeenSet = true; m_fileIds.emplace_back(std::forward<FileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    BatchGetAttachedFileMetadataRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
    template<typename AssociatedResourceArnT = Aws::String>
    void SetAssociatedResourceArn(AssociatedResourceArnT&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value); }
    template<typename AssociatedResourceArnT = Aws::String>
    BatchGetAttachedFileMetadataRequest& WithAssociatedResourceArn(AssociatedResourceArnT&& value) { SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value)); return *this;}
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
