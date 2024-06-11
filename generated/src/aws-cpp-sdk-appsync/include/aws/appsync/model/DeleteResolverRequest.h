/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class DeleteResolverRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API DeleteResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResolver"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline DeleteResolverRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline DeleteResolverRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline DeleteResolverRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resolver type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline DeleteResolverRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline DeleteResolverRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline DeleteResolverRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolver field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline DeleteResolverRequest& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline DeleteResolverRequest& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline DeleteResolverRequest& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
