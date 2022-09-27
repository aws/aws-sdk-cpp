﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class AWS_KEYSPACES_API GetKeyspaceRequest : public KeyspacesRequest
  {
  public:
    GetKeyspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKeyspace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}

  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
