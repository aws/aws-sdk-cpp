/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class UpdateDistributionWithStagingConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateDistributionWithStagingConfig2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDistributionWithStagingConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the primary distribution to which you are copying a staging
     * distribution's configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDistributionWithStagingConfig2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the staging distribution whose configuration you are
     * copying to the primary distribution.</p>
     */
    inline const Aws::String& GetStagingDistributionId() const { return m_stagingDistributionId; }
    inline bool StagingDistributionIdHasBeenSet() const { return m_stagingDistributionIdHasBeenSet; }
    template<typename StagingDistributionIdT = Aws::String>
    void SetStagingDistributionId(StagingDistributionIdT&& value) { m_stagingDistributionIdHasBeenSet = true; m_stagingDistributionId = std::forward<StagingDistributionIdT>(value); }
    template<typename StagingDistributionIdT = Aws::String>
    UpdateDistributionWithStagingConfig2020_05_31Request& WithStagingDistributionId(StagingDistributionIdT&& value) { SetStagingDistributionId(std::forward<StagingDistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current versions (<code>ETag</code> values) of both primary and staging
     * distributions. Provide these in the following format:</p> <p> <code>&lt;primary
     * ETag&gt;, &lt;staging ETag&gt;</code> </p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateDistributionWithStagingConfig2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_stagingDistributionId;
    bool m_stagingDistributionIdHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
