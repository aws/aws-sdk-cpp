/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create an invalidation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateInvalidationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateInvalidation2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreateInvalidation2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvalidation"; }

    Aws::String SerializePayload() const override;


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
    inline CreateInvalidation2019_03_26Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The distribution's id.</p>
     */
    inline CreateInvalidation2019_03_26Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The distribution's id.</p>
     */
    inline CreateInvalidation2019_03_26Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}


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
    inline CreateInvalidation2019_03_26Request& WithInvalidationBatch(const InvalidationBatch& value) { SetInvalidationBatch(value); return *this;}

    /**
     * <p>The batch information for the invalidation.</p>
     */
    inline CreateInvalidation2019_03_26Request& WithInvalidationBatch(InvalidationBatch&& value) { SetInvalidationBatch(std::move(value)); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet;

    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
