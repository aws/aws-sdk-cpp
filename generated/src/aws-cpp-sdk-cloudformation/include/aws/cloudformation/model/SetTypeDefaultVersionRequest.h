/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class SetTypeDefaultVersionRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API SetTypeDefaultVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTypeDefaultVersion"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension for which you want version
     * summary information.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SetTypeDefaultVersionRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SetTypeDefaultVersionRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SetTypeDefaultVersionRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SetTypeDefaultVersionRequest& WithType(const RegistryType& value) { SetType(value); return *this;}
    inline SetTypeDefaultVersionRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline SetTypeDefaultVersionRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline SetTypeDefaultVersionRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline SetTypeDefaultVersionRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline SetTypeDefaultVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline SetTypeDefaultVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline SetTypeDefaultVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
