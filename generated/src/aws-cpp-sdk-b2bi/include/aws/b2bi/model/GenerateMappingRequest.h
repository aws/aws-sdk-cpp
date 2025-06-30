/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/MappingType.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class GenerateMappingRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API GenerateMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMapping"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provide the contents of a sample X12 EDI file, either in JSON or XML format,
     * to use as a starting point for the mapping.</p>
     */
    inline const Aws::String& GetInputFileContent() const { return m_inputFileContent; }
    inline bool InputFileContentHasBeenSet() const { return m_inputFileContentHasBeenSet; }
    template<typename InputFileContentT = Aws::String>
    void SetInputFileContent(InputFileContentT&& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = std::forward<InputFileContentT>(value); }
    template<typename InputFileContentT = Aws::String>
    GenerateMappingRequest& WithInputFileContent(InputFileContentT&& value) { SetInputFileContent(std::forward<InputFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide the contents of a sample X12 EDI file, either in JSON or XML format,
     * to use as a target for the mapping.</p>
     */
    inline const Aws::String& GetOutputFileContent() const { return m_outputFileContent; }
    inline bool OutputFileContentHasBeenSet() const { return m_outputFileContentHasBeenSet; }
    template<typename OutputFileContentT = Aws::String>
    void SetOutputFileContent(OutputFileContentT&& value) { m_outputFileContentHasBeenSet = true; m_outputFileContent = std::forward<OutputFileContentT>(value); }
    template<typename OutputFileContentT = Aws::String>
    GenerateMappingRequest& WithOutputFileContent(OutputFileContentT&& value) { SetOutputFileContent(std::forward<OutputFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the mapping type: either <code>JSONATA</code> or <code>XSLT.</code>
     * </p>
     */
    inline MappingType GetMappingType() const { return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(MappingType value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline GenerateMappingRequest& WithMappingType(MappingType value) { SetMappingType(value); return *this;}
    ///@}
  private:

    Aws::String m_inputFileContent;
    bool m_inputFileContentHasBeenSet = false;

    Aws::String m_outputFileContent;
    bool m_outputFileContentHasBeenSet = false;

    MappingType m_mappingType{MappingType::NOT_SET};
    bool m_mappingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
