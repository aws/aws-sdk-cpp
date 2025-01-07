/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
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
   * Request to GetAttachedFile API.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetAttachedFileRequest">AWS
   * API Reference</a></p>
   */
  class GetAttachedFileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetAttachedFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAttachedFile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline GetAttachedFileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetAttachedFileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetAttachedFileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the attached file resource.</p>
     */
    inline const Aws::String& GetFileId() const{ return m_fileId; }
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }
    inline void SetFileId(const Aws::String& value) { m_fileIdHasBeenSet = true; m_fileId = value; }
    inline void SetFileId(Aws::String&& value) { m_fileIdHasBeenSet = true; m_fileId = std::move(value); }
    inline void SetFileId(const char* value) { m_fileIdHasBeenSet = true; m_fileId.assign(value); }
    inline GetAttachedFileRequest& WithFileId(const Aws::String& value) { SetFileId(value); return *this;}
    inline GetAttachedFileRequest& WithFileId(Aws::String&& value) { SetFileId(std::move(value)); return *this;}
    inline GetAttachedFileRequest& WithFileId(const char* value) { SetFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional override for the expiry of the pre-signed S3 URL in seconds. The
     * default value is 300.</p>
     */
    inline int GetUrlExpiryInSeconds() const{ return m_urlExpiryInSeconds; }
    inline bool UrlExpiryInSecondsHasBeenSet() const { return m_urlExpiryInSecondsHasBeenSet; }
    inline void SetUrlExpiryInSeconds(int value) { m_urlExpiryInSecondsHasBeenSet = true; m_urlExpiryInSeconds = value; }
    inline GetAttachedFileRequest& WithUrlExpiryInSeconds(int value) { SetUrlExpiryInSeconds(value); return *this;}
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
    inline GetAttachedFileRequest& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}
    inline GetAttachedFileRequest& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}
    inline GetAttachedFileRequest& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_fileId;
    bool m_fileIdHasBeenSet = false;

    int m_urlExpiryInSeconds;
    bool m_urlExpiryInSecondsHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
