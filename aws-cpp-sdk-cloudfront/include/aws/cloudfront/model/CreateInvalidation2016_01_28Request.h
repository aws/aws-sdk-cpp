/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/InvalidationBatch.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * The request to create an invalidation.
   */
  class AWS_CLOUDFRONT_API CreateInvalidation2016_01_28Request : public CloudFrontRequest
  {
  public:
    CreateInvalidation2016_01_28Request();
    Aws::String SerializePayload() const override;

    /**
     * The distribution's id.
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * The distribution's id.
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * The distribution's id.
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * The distribution's id.
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * The distribution's id.
     */
    inline CreateInvalidation2016_01_28Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * The distribution's id.
     */
    inline CreateInvalidation2016_01_28Request& WithDistributionId(Aws::String&& value) { SetDistributionId(value); return *this;}

    /**
     * The distribution's id.
     */
    inline CreateInvalidation2016_01_28Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}

    /**
     * The batch information for the invalidation.
     */
    inline const InvalidationBatch& GetInvalidationBatch() const{ return m_invalidationBatch; }

    /**
     * The batch information for the invalidation.
     */
    inline void SetInvalidationBatch(const InvalidationBatch& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * The batch information for the invalidation.
     */
    inline void SetInvalidationBatch(InvalidationBatch&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * The batch information for the invalidation.
     */
    inline CreateInvalidation2016_01_28Request& WithInvalidationBatch(const InvalidationBatch& value) { SetInvalidationBatch(value); return *this;}

    /**
     * The batch information for the invalidation.
     */
    inline CreateInvalidation2016_01_28Request& WithInvalidationBatch(InvalidationBatch&& value) { SetInvalidationBatch(value); return *this;}

  private:
    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet;
    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
