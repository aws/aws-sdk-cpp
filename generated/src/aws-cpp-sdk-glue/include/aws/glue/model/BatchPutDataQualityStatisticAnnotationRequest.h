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
    AWS_GLUE_API BatchPutDataQualityStatisticAnnotationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDataQualityStatisticAnnotation"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of <code>DatapointInclusionAnnotation</code>'s. The
     * InclusionAnnotations must contain a profileId and statisticId. If there are
     * multiple InclusionAnnotations, the list must refer to a single statisticId
     * across multiple profileIds.</p>
     */
    inline const Aws::Vector<DatapointInclusionAnnotation>& GetInclusionAnnotations() const { return m_inclusionAnnotations; }
    inline bool InclusionAnnotationsHasBeenSet() const { return m_inclusionAnnotationsHasBeenSet; }
    template<typename InclusionAnnotationsT = Aws::Vector<DatapointInclusionAnnotation>>
    void SetInclusionAnnotations(InclusionAnnotationsT&& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations = std::forward<InclusionAnnotationsT>(value); }
    template<typename InclusionAnnotationsT = Aws::Vector<DatapointInclusionAnnotation>>
    BatchPutDataQualityStatisticAnnotationRequest& WithInclusionAnnotations(InclusionAnnotationsT&& value) { SetInclusionAnnotations(std::forward<InclusionAnnotationsT>(value)); return *this;}
    template<typename InclusionAnnotationsT = DatapointInclusionAnnotation>
    BatchPutDataQualityStatisticAnnotationRequest& AddInclusionAnnotations(InclusionAnnotationsT&& value) { m_inclusionAnnotationsHasBeenSet = true; m_inclusionAnnotations.emplace_back(std::forward<InclusionAnnotationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Client Token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    BatchPutDataQualityStatisticAnnotationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
