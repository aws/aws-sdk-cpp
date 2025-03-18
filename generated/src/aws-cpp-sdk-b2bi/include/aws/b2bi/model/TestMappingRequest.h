/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/FileFormat.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class TestMappingRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API TestMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMapping"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline const Aws::String& GetInputFileContent() const { return m_inputFileContent; }
    inline bool InputFileContentHasBeenSet() const { return m_inputFileContentHasBeenSet; }
    template<typename InputFileContentT = Aws::String>
    void SetInputFileContent(InputFileContentT&& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = std::forward<InputFileContentT>(value); }
    template<typename InputFileContentT = Aws::String>
    TestMappingRequest& WithInputFileContent(InputFileContentT&& value) { SetInputFileContent(std::forward<InputFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mapping template for the transformer. This template is used to
     * map the parsed EDI file using JSONata or XSLT.</p>  <p>This parameter is
     * available for backwards compatibility. Use the <a
     * href="https://docs.aws.amazon.com/b2bi/latest/APIReference/API_Mapping.html">Mapping</a>
     * data type instead.</p> 
     */
    inline const Aws::String& GetMappingTemplate() const { return m_mappingTemplate; }
    inline bool MappingTemplateHasBeenSet() const { return m_mappingTemplateHasBeenSet; }
    template<typename MappingTemplateT = Aws::String>
    void SetMappingTemplate(MappingTemplateT&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::forward<MappingTemplateT>(value); }
    template<typename MappingTemplateT = Aws::String>
    TestMappingRequest& WithMappingTemplate(MappingTemplateT&& value) { SetMappingTemplate(std::forward<MappingTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline FileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(FileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline TestMappingRequest& WithFileFormat(FileFormat value) { SetFileFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_inputFileContent;
    bool m_inputFileContentHasBeenSet = false;

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    FileFormat m_fileFormat{FileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
