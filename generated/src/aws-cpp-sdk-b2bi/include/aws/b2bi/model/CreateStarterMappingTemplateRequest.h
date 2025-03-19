/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/MappingType.h>
#include <aws/b2bi/model/TemplateDetails.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class CreateStarterMappingTemplateRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreateStarterMappingTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStarterMappingTemplate"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the location of the sample EDI file that is used to generate the
     * mapping template.</p>
     */
    inline const S3Location& GetOutputSampleLocation() const { return m_outputSampleLocation; }
    inline bool OutputSampleLocationHasBeenSet() const { return m_outputSampleLocationHasBeenSet; }
    template<typename OutputSampleLocationT = S3Location>
    void SetOutputSampleLocation(OutputSampleLocationT&& value) { m_outputSampleLocationHasBeenSet = true; m_outputSampleLocation = std::forward<OutputSampleLocationT>(value); }
    template<typename OutputSampleLocationT = S3Location>
    CreateStarterMappingTemplateRequest& WithOutputSampleLocation(OutputSampleLocationT&& value) { SetOutputSampleLocation(std::forward<OutputSampleLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format for the mapping template: either JSONATA or XSLT.</p>
     */
    inline MappingType GetMappingType() const { return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(MappingType value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline CreateStarterMappingTemplateRequest& WithMappingType(MappingType value) { SetMappingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the details needed for generating the template. Specify the X12
     * transaction set and version for which the template is used: currently, we only
     * support X12. </p>
     */
    inline const TemplateDetails& GetTemplateDetails() const { return m_templateDetails; }
    inline bool TemplateDetailsHasBeenSet() const { return m_templateDetailsHasBeenSet; }
    template<typename TemplateDetailsT = TemplateDetails>
    void SetTemplateDetails(TemplateDetailsT&& value) { m_templateDetailsHasBeenSet = true; m_templateDetails = std::forward<TemplateDetailsT>(value); }
    template<typename TemplateDetailsT = TemplateDetails>
    CreateStarterMappingTemplateRequest& WithTemplateDetails(TemplateDetailsT&& value) { SetTemplateDetails(std::forward<TemplateDetailsT>(value)); return *this;}
    ///@}
  private:

    S3Location m_outputSampleLocation;
    bool m_outputSampleLocationHasBeenSet = false;

    MappingType m_mappingType{MappingType::NOT_SET};
    bool m_mappingTypeHasBeenSet = false;

    TemplateDetails m_templateDetails;
    bool m_templateDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
