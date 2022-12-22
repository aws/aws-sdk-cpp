/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class CreateWorkspaceApiKeyResult
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult();
    AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
     * to the workspace.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The name of the key that was created.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key that was created.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The name of the key that was created.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The name of the key that was created.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The name of the key that was created.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key that was created.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key that was created.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that the key is valid for.</p>
     */
    inline CreateWorkspaceApiKeyResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_key;

    Aws::String m_keyName;

    Aws::String m_workspaceId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
