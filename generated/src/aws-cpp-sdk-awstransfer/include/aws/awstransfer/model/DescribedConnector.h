/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/As2ConnectorConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the parameters for the connector, as identified by the
   * <code>ConnectorId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedConnector">AWS
   * API Reference</a></p>
   */
  class DescribedConnector
  {
  public:
    AWS_TRANSFER_API DescribedConnector();
    AWS_TRANSFER_API DescribedConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline DescribedConnector& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline DescribedConnector& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline DescribedConnector& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DescribedConnector& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline DescribedConnector& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline DescribedConnector& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


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
    inline DescribedConnector& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline DescribedConnector& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the partner's AS2 endpoint.</p>
     */
    inline DescribedConnector& WithUrl(const char* value) { SetUrl(value); return *this;}


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
    inline DescribedConnector& WithAs2Config(const As2ConnectorConfig& value) { SetAs2Config(value); return *this;}

    /**
     * <p>A structure that contains the parameters for a connector object.</p>
     */
    inline DescribedConnector& WithAs2Config(As2ConnectorConfig&& value) { SetAs2Config(std::move(value)); return *this;}


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
    inline DescribedConnector& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}

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
    inline DescribedConnector& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}

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
    inline DescribedConnector& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}


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
    inline DescribedConnector& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline DescribedConnector& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline DescribedConnector& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline DescribedConnector& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline DescribedConnector& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline DescribedConnector& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline DescribedConnector& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
