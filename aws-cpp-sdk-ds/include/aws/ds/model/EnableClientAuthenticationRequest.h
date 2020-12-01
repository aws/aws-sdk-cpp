/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ClientAuthenticationType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API EnableClientAuthenticationRequest : public DirectoryServiceRequest
  {
  public:
    EnableClientAuthenticationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableClientAuthentication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline EnableClientAuthenticationRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline EnableClientAuthenticationRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Enable client authentication in a specified directory for smart cards. </p>
     */
    inline EnableClientAuthenticationRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline const ClientAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline void SetType(const ClientAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline void SetType(ClientAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline EnableClientAuthenticationRequest& WithType(const ClientAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>Enable the type of client authentication request. </p>
     */
    inline EnableClientAuthenticationRequest& WithType(ClientAuthenticationType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    ClientAuthenticationType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
