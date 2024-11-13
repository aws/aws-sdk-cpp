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
    AWS_B2BI_API GenerateMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMapping"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provide the contents of a sample X12 EDI file (for inbound EDI) or JSON/XML
     * file (for outbound EDI) to use as a starting point for the mapping.</p>
     */
    inline const Aws::String& GetInputFileContent() const{ return m_inputFileContent; }
    inline bool InputFileContentHasBeenSet() const { return m_inputFileContentHasBeenSet; }
    inline void SetInputFileContent(const Aws::String& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = value; }
    inline void SetInputFileContent(Aws::String&& value) { m_inputFileContentHasBeenSet = true; m_inputFileContent = std::move(value); }
    inline void SetInputFileContent(const char* value) { m_inputFileContentHasBeenSet = true; m_inputFileContent.assign(value); }
    inline GenerateMappingRequest& WithInputFileContent(const Aws::String& value) { SetInputFileContent(value); return *this;}
    inline GenerateMappingRequest& WithInputFileContent(Aws::String&& value) { SetInputFileContent(std::move(value)); return *this;}
    inline GenerateMappingRequest& WithInputFileContent(const char* value) { SetInputFileContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide the contents of a sample X12 EDI file (for outbound EDI) or JSON/XML
     * file (for inbound EDI) to use as a target for the mapping.</p>
     */
    inline const Aws::String& GetOutputFileContent() const{ return m_outputFileContent; }
    inline bool OutputFileContentHasBeenSet() const { return m_outputFileContentHasBeenSet; }
    inline void SetOutputFileContent(const Aws::String& value) { m_outputFileContentHasBeenSet = true; m_outputFileContent = value; }
    inline void SetOutputFileContent(Aws::String&& value) { m_outputFileContentHasBeenSet = true; m_outputFileContent = std::move(value); }
    inline void SetOutputFileContent(const char* value) { m_outputFileContentHasBeenSet = true; m_outputFileContent.assign(value); }
    inline GenerateMappingRequest& WithOutputFileContent(const Aws::String& value) { SetOutputFileContent(value); return *this;}
    inline GenerateMappingRequest& WithOutputFileContent(Aws::String&& value) { SetOutputFileContent(std::move(value)); return *this;}
    inline GenerateMappingRequest& WithOutputFileContent(const char* value) { SetOutputFileContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the mapping type: either <code>JSONATA</code> or <code>XSLT.</code>
     * </p>
     */
    inline const MappingType& GetMappingType() const{ return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(const MappingType& value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline void SetMappingType(MappingType&& value) { m_mappingTypeHasBeenSet = true; m_mappingType = std::move(value); }
    inline GenerateMappingRequest& WithMappingType(const MappingType& value) { SetMappingType(value); return *this;}
    inline GenerateMappingRequest& WithMappingType(MappingType&& value) { SetMappingType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputFileContent;
    bool m_inputFileContentHasBeenSet = false;

    Aws::String m_outputFileContent;
    bool m_outputFileContentHasBeenSet = false;

    MappingType m_mappingType;
    bool m_mappingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
