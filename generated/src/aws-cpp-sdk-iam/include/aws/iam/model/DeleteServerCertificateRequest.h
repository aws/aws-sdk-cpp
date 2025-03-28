﻿/**
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
  class DeleteServerCertificateRequest : public IAMRequest
  {
  public:
    AWS_IAM_API DeleteServerCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServerCertificate"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the server certificate you want to delete.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline const Aws::String& GetServerCertificateName() const { return m_serverCertificateName; }
    inline bool ServerCertificateNameHasBeenSet() const { return m_serverCertificateNameHasBeenSet; }
    template<typename ServerCertificateNameT = Aws::String>
    void SetServerCertificateName(ServerCertificateNameT&& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = std::forward<ServerCertificateNameT>(value); }
    template<typename ServerCertificateNameT = Aws::String>
    DeleteServerCertificateRequest& WithServerCertificateName(ServerCertificateNameT&& value) { SetServerCertificateName(std::forward<ServerCertificateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverCertificateName;
    bool m_serverCertificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
