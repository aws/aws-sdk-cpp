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
    AWS_B2BI_API CreateStarterMappingTemplateRequest();

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
    inline const S3Location& GetOutputSampleLocation() const{ return m_outputSampleLocation; }
    inline bool OutputSampleLocationHasBeenSet() const { return m_outputSampleLocationHasBeenSet; }
    inline void SetOutputSampleLocation(const S3Location& value) { m_outputSampleLocationHasBeenSet = true; m_outputSampleLocation = value; }
    inline void SetOutputSampleLocation(S3Location&& value) { m_outputSampleLocationHasBeenSet = true; m_outputSampleLocation = std::move(value); }
    inline CreateStarterMappingTemplateRequest& WithOutputSampleLocation(const S3Location& value) { SetOutputSampleLocation(value); return *this;}
    inline CreateStarterMappingTemplateRequest& WithOutputSampleLocation(S3Location&& value) { SetOutputSampleLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format for the mapping template: either JSONATA or XSLT.</p>
     */
    inline const MappingType& GetMappingType() const{ return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(const MappingType& value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline void SetMappingType(MappingType&& value) { m_mappingTypeHasBeenSet = true; m_mappingType = std::move(value); }
    inline CreateStarterMappingTemplateRequest& WithMappingType(const MappingType& value) { SetMappingType(value); return *this;}
    inline CreateStarterMappingTemplateRequest& WithMappingType(MappingType&& value) { SetMappingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the details needed for generating the template. Specify the X12
     * transaction set and version for which the template is used: currently, we only
     * support X12. </p>
     */
    inline const TemplateDetails& GetTemplateDetails() const{ return m_templateDetails; }
    inline bool TemplateDetailsHasBeenSet() const { return m_templateDetailsHasBeenSet; }
    inline void SetTemplateDetails(const TemplateDetails& value) { m_templateDetailsHasBeenSet = true; m_templateDetails = value; }
    inline void SetTemplateDetails(TemplateDetails&& value) { m_templateDetailsHasBeenSet = true; m_templateDetails = std::move(value); }
    inline CreateStarterMappingTemplateRequest& WithTemplateDetails(const TemplateDetails& value) { SetTemplateDetails(value); return *this;}
    inline CreateStarterMappingTemplateRequest& WithTemplateDetails(TemplateDetails&& value) { SetTemplateDetails(std::move(value)); return *this;}
    ///@}
  private:

    S3Location m_outputSampleLocation;
    bool m_outputSampleLocationHasBeenSet = false;

    MappingType m_mappingType;
    bool m_mappingTypeHasBeenSet = false;

    TemplateDetails m_templateDetails;
    bool m_templateDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
