/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DescribeTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline DescribeTypeRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline DescribeTypeRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline DescribeTypeRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a specific version of the extension. The version ID is the value at
     * the end of the Amazon Resource Name (ARN) assigned to the extension version when
     * it is registered.</p> <p>If you specify a <code>VersionId</code>,
     * <code>DescribeType</code> returns information about that specific extension
     * version. Otherwise, it returns information about the default extension
     * version.</p>
     */
    inline DescribeTypeRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline DescribeTypeRequest& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline DescribeTypeRequest& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions provided by
     * Amazon Web Services are not assigned a publisher ID.</p>
     */
    inline DescribeTypeRequest& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}


    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const{ return m_publicVersionNumber; }

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline void SetPublicVersionNumber(const Aws::String& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = value; }

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline void SetPublicVersionNumber(Aws::String&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::move(value); }

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline void SetPublicVersionNumber(const char* value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber.assign(value); }

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline DescribeTypeRequest& WithPublicVersionNumber(const Aws::String& value) { SetPublicVersionNumber(value); return *this;}

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline DescribeTypeRequest& WithPublicVersionNumber(Aws::String&& value) { SetPublicVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The version number of a public third-party extension.</p>
     */
    inline DescribeTypeRequest& WithPublicVersionNumber(const char* value) { SetPublicVersionNumber(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_publicVersionNumber;
    bool m_publicVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
