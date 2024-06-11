﻿/**
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


    ///@{
    /**
     * <p>The identifier of the primary distribution whose configuration you are
     * copying. To get a distribution ID, use <code>ListDistributions</code>.</p>
     */
    inline const Aws::String& GetPrimaryDistributionId() const{ return m_primaryDistributionId; }
    inline bool PrimaryDistributionIdHasBeenSet() const { return m_primaryDistributionIdHasBeenSet; }
    inline void SetPrimaryDistributionId(const Aws::String& value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId = value; }
    inline void SetPrimaryDistributionId(Aws::String&& value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId = std::move(value); }
    inline void SetPrimaryDistributionId(const char* value) { m_primaryDistributionIdHasBeenSet = true; m_primaryDistributionId.assign(value); }
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(const Aws::String& value) { SetPrimaryDistributionId(value); return *this;}
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(Aws::String&& value) { SetPrimaryDistributionId(std::move(value)); return *this;}
    inline CopyDistribution2020_05_31Request& WithPrimaryDistributionId(const char* value) { SetPrimaryDistributionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of distribution that your primary distribution will be copied to.
     * The only valid value is <code>True</code>, indicating that you are copying to a
     * staging distribution.</p>
     */
    inline bool GetStaging() const{ return m_staging; }
    inline bool StagingHasBeenSet() const { return m_stagingHasBeenSet; }
    inline void SetStaging(bool value) { m_stagingHasBeenSet = true; m_staging = value; }
    inline CopyDistribution2020_05_31Request& WithStaging(bool value) { SetStaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the primary distribution whose configuration you
     * are copying. This is the <code>ETag</code> value returned in the response to
     * <code>GetDistribution</code> and <code>GetDistributionConfig</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline CopyDistribution2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline CopyDistribution2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline CopyDistribution2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that uniquely identifies a request to create a resource. This helps
     * to prevent CloudFront from creating a duplicate resource if you accidentally
     * resubmit an identical request.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }
    inline CopyDistribution2020_05_31Request& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}
    inline CopyDistribution2020_05_31Request& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}
    inline CopyDistribution2020_05_31Request& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to specify the state of the staging distribution when it's
     * created. When you set this value to <code>True</code>, the staging distribution
     * is enabled. When you set this value to <code>False</code>, the staging
     * distribution is disabled.</p> <p>If you omit this field, the default value is
     * <code>True</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CopyDistribution2020_05_31Request& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryDistributionId;
    bool m_primaryDistributionIdHasBeenSet = false;

    bool m_staging;
    bool m_stagingHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
