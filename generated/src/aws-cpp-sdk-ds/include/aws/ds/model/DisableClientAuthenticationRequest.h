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
  class DisableClientAuthenticationRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DisableClientAuthenticationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableClientAuthentication"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory </p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory </p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory </p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory </p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory </p>
     */
    inline DisableClientAuthenticationRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory </p>
     */
    inline DisableClientAuthenticationRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory </p>
     */
    inline DisableClientAuthenticationRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline const ClientAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline void SetType(const ClientAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline void SetType(ClientAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline DisableClientAuthenticationRequest& WithType(const ClientAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of client authentication to disable. Currently, only the parameter,
     * <code>SmartCard</code> is supported.</p>
     */
    inline DisableClientAuthenticationRequest& WithType(ClientAuthenticationType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    ClientAuthenticationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
