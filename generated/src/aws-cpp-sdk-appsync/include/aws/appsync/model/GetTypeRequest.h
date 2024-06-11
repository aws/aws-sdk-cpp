/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/TypeDefinitionFormat.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppSync
{
namespace Model
{

  /**
   */
  class GetTypeRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API GetTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetType"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;

    AWS_APPSYNC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline GetTypeRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline GetTypeRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline GetTypeRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type name.</p>
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

    ///@{
    /**
     * <p>The type format: SDL or JSON.</p>
     */
    inline const TypeDefinitionFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const TypeDefinitionFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(TypeDefinitionFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline GetTypeRequest& WithFormat(const TypeDefinitionFormat& value) { SetFormat(value); return *this;}
    inline GetTypeRequest& WithFormat(TypeDefinitionFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    TypeDefinitionFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
