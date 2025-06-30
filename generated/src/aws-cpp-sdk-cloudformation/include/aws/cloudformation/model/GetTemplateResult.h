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
    AWS_CLOUDFORMATION_API GetTemplateResult() = default;
    AWS_CLOUDFORMATION_API GetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Structure that contains the template body.</p> <p>CloudFormation returns the
     * same template that was used when the stack was created.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    GetTemplateResult& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the template that you can retrieve. For stacks, the
     * <code>Original</code> and <code>Processed</code> templates are always available.
     * For change sets, the <code>Original</code> template is always available. After
     * CloudFormation finishes creating the change set, the <code>Processed</code>
     * template becomes available.</p>
     */
    inline const Aws::Vector<TemplateStage>& GetStagesAvailable() const { return m_stagesAvailable; }
    template<typename StagesAvailableT = Aws::Vector<TemplateStage>>
    void SetStagesAvailable(StagesAvailableT&& value) { m_stagesAvailableHasBeenSet = true; m_stagesAvailable = std::forward<StagesAvailableT>(value); }
    template<typename StagesAvailableT = Aws::Vector<TemplateStage>>
    GetTemplateResult& WithStagesAvailable(StagesAvailableT&& value) { SetStagesAvailable(std::forward<StagesAvailableT>(value)); return *this;}
    inline GetTemplateResult& AddStagesAvailable(TemplateStage value) { m_stagesAvailableHasBeenSet = true; m_stagesAvailable.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetTemplateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::Vector<TemplateStage> m_stagesAvailable;
    bool m_stagesAvailableHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
