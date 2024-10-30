/**
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
  class GetTypeRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API GetTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetType"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the keyspace that contains this type. </p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }
    inline GetTypeRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline GetTypeRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline GetTypeRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The formatted name of the type. For example, if the name of the type was
     * created without double quotes, Amazon Keyspaces saved the name in lower-case
     * characters. If the name was created in double quotes, you must use double quotes
     * to specify the type name. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline GetTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline GetTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline GetTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
