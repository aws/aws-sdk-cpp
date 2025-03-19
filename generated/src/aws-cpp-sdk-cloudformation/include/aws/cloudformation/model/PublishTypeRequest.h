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
    AWS_CLOUDFORMATION_API PublishTypeRequest() = default;

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
    inline ThirdPartyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ThirdPartyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PublishTypeRequest& WithType(ThirdPartyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PublishTypeRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    PublishTypeRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
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
    inline const Aws::String& GetPublicVersionNumber() const { return m_publicVersionNumber; }
    inline bool PublicVersionNumberHasBeenSet() const { return m_publicVersionNumberHasBeenSet; }
    template<typename PublicVersionNumberT = Aws::String>
    void SetPublicVersionNumber(PublicVersionNumberT&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::forward<PublicVersionNumberT>(value); }
    template<typename PublicVersionNumberT = Aws::String>
    PublishTypeRequest& WithPublicVersionNumber(PublicVersionNumberT&& value) { SetPublicVersionNumber(std::forward<PublicVersionNumberT>(value)); return *this;}
    ///@}
  private:

    ThirdPartyType m_type{ThirdPartyType::NOT_SET};
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
