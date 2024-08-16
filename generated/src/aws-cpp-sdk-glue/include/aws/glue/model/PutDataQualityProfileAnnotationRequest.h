/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/InclusionAnnotationValue.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class PutDataQualityProfileAnnotationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API PutDataQualityProfileAnnotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataQualityProfileAnnotation"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the data quality monitoring profile to annotate.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline PutDataQualityProfileAnnotationRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline PutDataQualityProfileAnnotationRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline PutDataQualityProfileAnnotationRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation value to apply to the profile.</p>
     */
    inline const InclusionAnnotationValue& GetInclusionAnnotation() const{ return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    inline void SetInclusionAnnotation(const InclusionAnnotationValue& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = value; }
    inline void SetInclusionAnnotation(InclusionAnnotationValue&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::move(value); }
    inline PutDataQualityProfileAnnotationRequest& WithInclusionAnnotation(const InclusionAnnotationValue& value) { SetInclusionAnnotation(value); return *this;}
    inline PutDataQualityProfileAnnotationRequest& WithInclusionAnnotation(InclusionAnnotationValue&& value) { SetInclusionAnnotation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    InclusionAnnotationValue m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
