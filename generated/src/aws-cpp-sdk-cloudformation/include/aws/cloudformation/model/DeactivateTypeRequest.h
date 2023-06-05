/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DeactivateTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DeactivateTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeactivateType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The type name of the extension, in this account and Region. If you specified
     * a type name alias when enabling the extension, use the type name alias.</p>
     * <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithType(const ThirdPartyType& value) { SetType(value); return *this;}

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify either
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>Conditional: You must specify either <code>Arn</code>, or
     * <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline DeactivateTypeRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    ThirdPartyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
