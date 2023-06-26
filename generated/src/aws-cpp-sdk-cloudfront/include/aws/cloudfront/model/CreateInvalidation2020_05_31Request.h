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
    AWS_CLOUDFRONT_API CreateInvalidation2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvalidation"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's id.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * <p>The distribution's id.</p>
     */
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }

    /**
     * <p>The distribution's id.</p>
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * <p>The distribution's id.</p>
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }

    /**
     * <p>The distribution's id.</p>
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * <p>The distribution's id.</p>
     */
    inline CreateInvalidation2020_05_31Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The distribution's id.</p>
     */
    inline CreateInvalidation2020_05_31Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The distribution's id.</p>
     */
    inline CreateInvalidation2020_05_31Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}


    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline const InvalidationBatch& GetInvalidationBatch() const{ return m_invalidationBatch; }

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline bool InvalidationBatchHasBeenSet() const { return m_invalidationBatchHasBeenSet; }

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline void SetInvalidationBatch(const InvalidationBatch& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline void SetInvalidationBatch(InvalidationBatch&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = std::move(value); }

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline CreateInvalidation2020_05_31Request& WithInvalidationBatch(const InvalidationBatch& value) { SetInvalidationBatch(value); return *this;}

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline CreateInvalidation2020_05_31Request& WithInvalidationBatch(InvalidationBatch&& value) { SetInvalidationBatch(std::move(value)); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
