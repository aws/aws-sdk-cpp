/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/InvalidationBatch.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create an invalidation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidationRequest">AWS
   * API Reference</a></p>
   */
  class CreateInvalidation2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateInvalidation2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvalidation"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The distribution's id.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    CreateInvalidation2020_05_31Request& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline const InvalidationBatch& GetInvalidationBatch() const { return m_invalidationBatch; }
    inline bool InvalidationBatchHasBeenSet() const { return m_invalidationBatchHasBeenSet; }
    template<typename InvalidationBatchT = InvalidationBatch>
    void SetInvalidationBatch(InvalidationBatchT&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = std::forward<InvalidationBatchT>(value); }
    template<typename InvalidationBatchT = InvalidationBatch>
    CreateInvalidation2020_05_31Request& WithInvalidationBatch(InvalidationBatchT&& value) { SetInvalidationBatch(std::forward<InvalidationBatchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
