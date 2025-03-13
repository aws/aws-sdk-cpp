/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class UpdateServerCertificateRequest : public IAMRequest
  {
  public:
    AWS_IAM_API UpdateServerCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServerCertificate"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the server certificate that you want to update.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetServerCertificateName() const { return m_serverCertificateName; }
    inline bool ServerCertificateNameHasBeenSet() const { return m_serverCertificateNameHasBeenSet; }
    template<typename ServerCertificateNameT = Aws::String>
    void SetServerCertificateName(ServerCertificateNameT&& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = std::forward<ServerCertificateNameT>(value); }
    template<typename ServerCertificateNameT = Aws::String>
    UpdateServerCertificateRequest& WithServerCertificateName(ServerCertificateNameT&& value) { SetServerCertificateName(std::forward<ServerCertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new path for the server certificate. Include this only if you are
     * updating the server certificate's path.</p> <p>This parameter allows (through
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of either a forward slash (/) by itself or a string that
     * must begin and end with forward slashes. In addition, it can contain any ASCII
     * character from the ! (<code>\u0021</code>) through the DEL character
     * (<code>\u007F</code>), including most punctuation characters, digits, and upper
     * and lowercased letters.</p>
     */
    inline const Aws::String& GetNewPath() const { return m_newPath; }
    inline bool NewPathHasBeenSet() const { return m_newPathHasBeenSet; }
    template<typename NewPathT = Aws::String>
    void SetNewPath(NewPathT&& value) { m_newPathHasBeenSet = true; m_newPath = std::forward<NewPathT>(value); }
    template<typename NewPathT = Aws::String>
    UpdateServerCertificateRequest& WithNewPath(NewPathT&& value) { SetNewPath(std::forward<NewPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the server certificate. Include this only if you are
     * updating the server certificate's name. The name of the certificate cannot
     * contain any spaces.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetNewServerCertificateName() const { return m_newServerCertificateName; }
    inline bool NewServerCertificateNameHasBeenSet() const { return m_newServerCertificateNameHasBeenSet; }
    template<typename NewServerCertificateNameT = Aws::String>
    void SetNewServerCertificateName(NewServerCertificateNameT&& value) { m_newServerCertificateNameHasBeenSet = true; m_newServerCertificateName = std::forward<NewServerCertificateNameT>(value); }
    template<typename NewServerCertificateNameT = Aws::String>
    UpdateServerCertificateRequest& WithNewServerCertificateName(NewServerCertificateNameT&& value) { SetNewServerCertificateName(std::forward<NewServerCertificateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverCertificateName;
    bool m_serverCertificateNameHasBeenSet = false;

    Aws::String m_newPath;
    bool m_newPathHasBeenSet = false;

    Aws::String m_newServerCertificateName;
    bool m_newServerCertificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
