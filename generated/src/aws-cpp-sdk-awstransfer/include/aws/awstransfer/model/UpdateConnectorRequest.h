/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/As2ConnectorConfig.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateConnectorRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline UpdateConnectorRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline UpdateConnectorRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline UpdateConnectorRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline UpdateConnectorRequest& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline UpdateConnectorRequest& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline UpdateConnectorRequest& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline const As2ConnectorConfig& GetAs2Config() const{ return m_as2Config; }

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline bool As2ConfigHasBeenSet() const { return m_as2ConfigHasBeenSet; }

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline void SetAs2Config(const As2ConnectorConfig& value) { m_as2ConfigHasBeenSet = true; m_as2Config = value; }

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline void SetAs2Config(As2ConnectorConfig&& value) { m_as2ConfigHasBeenSet = true; m_as2Config = std::move(value); }

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline UpdateConnectorRequest& WithAs2Config(const As2ConnectorConfig& value) { SetAs2Config(value); return *this;}

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline UpdateConnectorRequest& WithAs2Config(As2ConnectorConfig&& value) { SetAs2Config(std::move(value)); return *this;}


    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline const Aws::String& GetAccessRole() const{ return m_accessRole; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(const Aws::String& value) { m_accessRoleHasBeenSet = true; m_accessRole = value; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(Aws::String&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::move(value); }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(const char* value) { m_accessRoleHasBeenSet = true; m_accessRole.assign(value); }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline UpdateConnectorRequest& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline UpdateConnectorRequest& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline UpdateConnectorRequest& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline UpdateConnectorRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline UpdateConnectorRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline UpdateConnectorRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}

  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    As2ConnectorConfig m_as2Config;
    bool m_as2ConfigHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
