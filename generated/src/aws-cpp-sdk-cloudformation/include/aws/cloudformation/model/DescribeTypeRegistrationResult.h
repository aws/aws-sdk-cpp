/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeTypeRegistrationResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult() = default;
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current status of the extension registration request.</p>
     */
    inline RegistrationStatus GetProgressStatus() const { return m_progressStatus; }
    inline void SetProgressStatus(RegistrationStatus value) { m_progressStatusHasBeenSet = true; m_progressStatus = value; }
    inline DescribeTypeRegistrationResult& WithProgressStatus(RegistrationStatus value) { SetProgressStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the extension registration request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeTypeRegistrationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension being registered.</p> <p>For
     * registration requests with a <code>ProgressStatus</code> of other than
     * <code>COMPLETE</code>, this will be <code>null</code>.</p>
     */
    inline const Aws::String& GetTypeArn() const { return m_typeArn; }
    template<typename TypeArnT = Aws::String>
    void SetTypeArn(TypeArnT&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::forward<TypeArnT>(value); }
    template<typename TypeArnT = Aws::String>
    DescribeTypeRegistrationResult& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this specific version of the extension
     * being registered.</p> <p>For registration requests with a
     * <code>ProgressStatus</code> of other than <code>COMPLETE</code>, this will be
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetTypeVersionArn() const { return m_typeVersionArn; }
    template<typename TypeVersionArnT = Aws::String>
    void SetTypeVersionArn(TypeVersionArnT&& value) { m_typeVersionArnHasBeenSet = true; m_typeVersionArn = std::forward<TypeVersionArnT>(value); }
    template<typename TypeVersionArnT = Aws::String>
    DescribeTypeRegistrationResult& WithTypeVersionArn(TypeVersionArnT&& value) { SetTypeVersionArn(std::forward<TypeVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTypeRegistrationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RegistrationStatus m_progressStatus{RegistrationStatus::NOT_SET};
    bool m_progressStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_typeVersionArn;
    bool m_typeVersionArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
