/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Contains the details for an SFTP connector connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/SftpConnectorConnectionDetails">AWS
   * API Reference</a></p>
   */
  class SftpConnectorConnectionDetails
  {
  public:
    AWS_TRANSFER_API SftpConnectorConnectionDetails() = default;
    AWS_TRANSFER_API SftpConnectorConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API SftpConnectorConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SSH public key of the remote SFTP server. This is returned during the
     * initial connection attempt when you call <code>TestConnection</code>. It allows
     * you to retrieve the valid server host key to update the connector when you are
     * unable to obtain it in advance.</p>
     */
    inline const Aws::String& GetHostKey() const { return m_hostKey; }
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }
    template<typename HostKeyT = Aws::String>
    void SetHostKey(HostKeyT&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::forward<HostKeyT>(value); }
    template<typename HostKeyT = Aws::String>
    SftpConnectorConnectionDetails& WithHostKey(HostKeyT&& value) { SetHostKey(std::forward<HostKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
