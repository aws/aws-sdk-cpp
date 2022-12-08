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
  class DeleteWorkspaceApiKeyResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult();
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline DeleteWorkspaceApiKeyResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_keyName;

    Aws::String m_workspaceId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
