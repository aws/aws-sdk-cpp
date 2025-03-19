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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{
  /**
   * <p>Identifies the user, the server they belong to, and the identifier of the SSH
   * public key associated with that user. A user can have more than one key on each
   * server that they are associated with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportSshPublicKeyResponse">AWS
   * API Reference</a></p>
   */
  class ImportSshPublicKeyResult
  {
  public:
    AWS_TRANSFER_API ImportSshPublicKeyResult() = default;
    AWS_TRANSFER_API ImportSshPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ImportSshPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A system-assigned unique identifier for a server.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ImportSshPublicKeyResult& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given to a public key by the system that was imported.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const { return m_sshPublicKeyId; }
    template<typename SshPublicKeyIdT = Aws::String>
    void SetSshPublicKeyId(SshPublicKeyIdT&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::forward<SshPublicKeyIdT>(value); }
    template<typename SshPublicKeyIdT = Aws::String>
    ImportSshPublicKeyResult& WithSshPublicKeyId(SshPublicKeyIdT&& value) { SetSshPublicKeyId(std::forward<SshPublicKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    ImportSshPublicKeyResult& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportSshPublicKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
