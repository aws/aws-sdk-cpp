/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
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
  class PublishTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API PublishTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The type of the extension.</p> <p>Conditional: You must specify
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PublishTypeRequest& WithType(const ThirdPartyType& value) { SetType(value); return *this;}
    inline PublishTypeRequest& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PublishTypeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PublishTypeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PublishTypeRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline PublishTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline PublishTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline PublishTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number to assign to this version of the extension.</p> <p>Use the
     * following format, and adhere to semantic versioning when assigning a version
     * number to your extension:</p> <p> <code>MAJOR.MINOR.PATCH</code> </p> <p>For
     * more information, see <a href="https://semver.org/">Semantic Versioning
     * 2.0.0</a>.</p> <p>If you don't specify a version number, CloudFormation
     * increments the version number by one minor version release.</p> <p>You cannot
     * specify a version number the first time you publish a type. CloudFormation
     * automatically sets the first version number to be <code>1.0.0</code>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const{ return m_publicVersionNumber; }
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }
    inline void SetPublicVersionNumber(const Aws::String& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = value; }
    inline void SetPublicVersionNumber(Aws::String&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::move(value); }
    inline void SetPublicVersionNumber(const char* value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber.assign(value); }
    inline PublishTypeRequest& WithPublicVersionNumber(const Aws::String& value) { SetPublicVersionNumber(value); return *this;}
    inline PublishTypeRequest& WithPublicVersionNumber(Aws::String&& value) { SetPublicVersionNumber(std::move(value)); return *this;}
    inline PublishTypeRequest& WithPublicVersionNumber(const char* value) { SetPublicVersionNumber(value); return *this;}
    ///@}
  private:

    ThirdPartyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_publicVersionNumber;
    bool m_publicVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
