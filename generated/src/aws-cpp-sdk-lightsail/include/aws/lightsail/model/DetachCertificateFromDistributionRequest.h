/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DetachCertificateFromDistributionRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DetachCertificateFromDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachCertificateFromDistribution"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline DetachCertificateFromDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline DetachCertificateFromDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution from which to detach the certificate.</p> <p>Use
     * the <code>GetDistributions</code> action to get a list of distribution names
     * that you can specify.</p>
     */
    inline DetachCertificateFromDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}

  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
