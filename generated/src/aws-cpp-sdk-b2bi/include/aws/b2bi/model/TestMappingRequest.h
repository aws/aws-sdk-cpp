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
    AWS_B2BI_API TestMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMapping"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline const Aws::String& GetInputFileContent() const{ return m_inputFileContent; }

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline bool InputFileContentHasBeenSet() const { return m_inputFileContentHasBeenSet; }

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline void SetInputFileContent(const Aws::String& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = value; }

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline void SetInputFileContent(Aws::String&& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = std::move(value); }

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline void SetInputFileContent(const char* value) { m_inputFileContentHasBeenSet = true; m_inputFileContent.assign(value); }

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline TestMappingRequest& WithInputFileContent(const Aws::String& value) { SetInputFileContent(value); return *this;}

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline TestMappingRequest& WithInputFileContent(Aws::String&& value) { SetInputFileContent(std::move(value)); return *this;}

    /**
     * <p>Specify the contents of the EDI (electronic data interchange) XML or JSON
     * file that is used as input for the transform.</p>
     */
    inline TestMappingRequest& WithInputFileContent(const char* value) { SetInputFileContent(value); return *this;}


    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline bool MappingTemplateHasBeenSet() const { return m_mappingTemplateHasBeenSet; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = value; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::move(value); }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const char* value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate.assign(value); }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TestMappingRequest& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TestMappingRequest& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TestMappingRequest& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}


    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TestMappingRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TestMappingRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}

  private:

    Aws::String m_inputFileContent;
    bool m_inputFileContentHasBeenSet = false;

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
