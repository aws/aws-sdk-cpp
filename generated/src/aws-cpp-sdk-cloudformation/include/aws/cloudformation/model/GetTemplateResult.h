/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TemplateStage.h>
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
  /**
   * <p>The output for <a>GetTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateOutput">AWS
   * API Reference</a></p>
   */
  class GetTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API GetTemplateResult();
    AWS_CLOUDFORMATION_API GetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Structure containing the template body.</p> <p>CloudFormation returns the
     * same template that was used when the stack was created.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }
    inline GetTemplateResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline GetTemplateResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline GetTemplateResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the template that you can retrieve. For stacks, the
     * <code>Original</code> and <code>Processed</code> templates are always available.
     * For change sets, the <code>Original</code> template is always available. After
     * CloudFormation finishes creating the change set, the <code>Processed</code>
     * template becomes available.</p>
     */
    inline const Aws::Vector<TemplateStage>& GetStagesAvailable() const{ return m_stagesAvailable; }
    inline void SetStagesAvailable(const Aws::Vector<TemplateStage>& value) { m_stagesAvailable = value; }
    inline void SetStagesAvailable(Aws::Vector<TemplateStage>&& value) { m_stagesAvailable = std::move(value); }
    inline GetTemplateResult& WithStagesAvailable(const Aws::Vector<TemplateStage>& value) { SetStagesAvailable(value); return *this;}
    inline GetTemplateResult& WithStagesAvailable(Aws::Vector<TemplateStage>&& value) { SetStagesAvailable(std::move(value)); return *this;}
    inline GetTemplateResult& AddStagesAvailable(const TemplateStage& value) { m_stagesAvailable.push_back(value); return *this; }
    inline GetTemplateResult& AddStagesAvailable(TemplateStage&& value) { m_stagesAvailable.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateBody;

    Aws::Vector<TemplateStage> m_stagesAvailable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
