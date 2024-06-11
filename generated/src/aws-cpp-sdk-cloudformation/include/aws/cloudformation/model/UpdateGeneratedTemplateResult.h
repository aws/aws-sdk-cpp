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
  class UpdateGeneratedTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API UpdateGeneratedTemplateResult();
    AWS_CLOUDFORMATION_API UpdateGeneratedTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API UpdateGeneratedTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline const Aws::String& GetGeneratedTemplateId() const{ return m_generatedTemplateId; }
    inline void SetGeneratedTemplateId(const Aws::String& value) { m_generatedTemplateId = value; }
    inline void SetGeneratedTemplateId(Aws::String&& value) { m_generatedTemplateId = std::move(value); }
    inline void SetGeneratedTemplateId(const char* value) { m_generatedTemplateId.assign(value); }
    inline UpdateGeneratedTemplateResult& WithGeneratedTemplateId(const Aws::String& value) { SetGeneratedTemplateId(value); return *this;}
    inline UpdateGeneratedTemplateResult& WithGeneratedTemplateId(Aws::String&& value) { SetGeneratedTemplateId(std::move(value)); return *this;}
    inline UpdateGeneratedTemplateResult& WithGeneratedTemplateId(const char* value) { SetGeneratedTemplateId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline UpdateGeneratedTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline UpdateGeneratedTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
