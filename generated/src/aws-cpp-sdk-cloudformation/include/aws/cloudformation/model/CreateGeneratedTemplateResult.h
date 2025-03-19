/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
  class CreateGeneratedTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API CreateGeneratedTemplateResult() = default;
    AWS_CLOUDFORMATION_API CreateGeneratedTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API CreateGeneratedTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateId() const { return m_generatedTemplateId; }
    template<typename GeneratedTemplateIdT = Aws::String>
    void SetGeneratedTemplateId(GeneratedTemplateIdT&& value) { m_generatedTemplateIdHasBeenSet = true; m_generatedTemplateId = std::forward<GeneratedTemplateIdT>(value); }
    template<typename GeneratedTemplateIdT = Aws::String>
    CreateGeneratedTemplateResult& WithGeneratedTemplateId(GeneratedTemplateIdT&& value) { SetGeneratedTemplateId(std::forward<GeneratedTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateGeneratedTemplateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateId;
    bool m_generatedTemplateIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
