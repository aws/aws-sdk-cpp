/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DatapointInclusionAnnotation.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchPutDataQualityStatisticAnnotationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDataQualityStatisticAnnotation"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of <code>DatapointInclusionAnnotation</code>'s.</p>
     */
    inline const Aws::Vector<DatapointInclusionAnnotation>& GetInclusionAnnotations() const{ return m_inclusionAnnotations; }
    inline bool InclusionAnnotationsHasBeenSet() const { return m_inclusionAnnotationsHasBeenSet; }
    inline void SetInclusionAnnotations(const Aws::Vector<DatapointInclusionAnnotation>& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations = value; }
    inline void SetInclusionAnnotations(Aws::Vector<DatapointInclusionAnnotation>&& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations = std::move(value); }
    inline BatchPutDataQualityStatisticAnnotationRequest& WithInclusionAnnotations(const Aws::Vector<DatapointInclusionAnnotation>& value) { SetInclusionAnnotations(value); return *this;}
    inline BatchPutDataQualityStatisticAnnotationRequest& WithInclusionAnnotations(Aws::Vector<DatapointInclusionAnnotation>&& value) { SetInclusionAnnotations(std::move(value)); return *this;}
    inline BatchPutDataQualityStatisticAnnotationRequest& AddInclusionAnnotations(const DatapointInclusionAnnotation& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations.push_back(value); return *this; }
    inline BatchPutDataQualityStatisticAnnotationRequest& AddInclusionAnnotations(DatapointInclusionAnnotation&& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Client Token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline BatchPutDataQualityStatisticAnnotationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline BatchPutDataQualityStatisticAnnotationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline BatchPutDataQualityStatisticAnnotationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<DatapointInclusionAnnotation> m_inclusionAnnotations;
    bool m_inclusionAnnotationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
