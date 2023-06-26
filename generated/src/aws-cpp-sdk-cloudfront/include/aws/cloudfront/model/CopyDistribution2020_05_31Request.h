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
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CopyDistribution2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CopyDistribution2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDistribution"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline const Aws::String& GetPrimaryDistributionId() const{ return m_primaryDistributionId; }

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline bool PrimaryDistributionIdHasBeenSet() const { return m_primaryDistributionIdHasBeenSet; }

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline void SetPrimaryDistributionId(const Aws::String& value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId = value; }

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline void SetPrimaryDistributionId(Aws::String&& value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId = std::move(value); }

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline void SetPrimaryDistributionId(const char* value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId.assign(value); }

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(const Aws::String& value) { SetPrimaryDistributionId(value); return *this;}

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(Aws::String&& value) { SetPrimaryDistributionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(const char* value) { SetPrimaryDistributionId(value); return *this;}


    /**
     * <p>The type of distribution that your primary distribution will be copied to.
     * The only valid value is <code>True</code>, indicating that you are copying to a
     * staging distribution.</p>
     */
    inline bool GetStaging() const{ return m_staging; }

    /**
     * <p>The type of distribution that your primary distribution will be copied to.
     * The only valid value is <code>True</code>, indicating that you are copying to a
     * staging distribution.</p>
     */
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }

    /**
     * <p>The type of distribution that your primary distribution will be copied to.
     * The only valid value is <code>True</code>, indicating that you are copying to a
     * staging distribution.</p>
     */
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }

    /**
     * <p>The type of distribution that your primary distribution will be copied to.
     * The only valid value is <code>True</code>, indicating that you are copying to a
     * staging distribution.</p>
     */
    inline CopyDistribution2020_05_31Request& WithStaging(bool value) { SetStaging(value); return *this;}


    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline CopyDistribution2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}


    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline CopyDistribution2020_05_31Request& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline CopyDistribution2020_05_31Request& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline CopyDistribution2020_05_31Request& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

  private:

    Aws::String m_primaryDistributionId;
    bool m_primaryDistributionIdHasBeenSet = false;

    bool m_staging;
    bool m_stagingHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
