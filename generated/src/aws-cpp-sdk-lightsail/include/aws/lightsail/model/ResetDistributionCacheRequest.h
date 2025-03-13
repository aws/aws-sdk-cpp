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
  class ResetDistributionCacheRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API ResetDistributionCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetDistributionCache"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the distribution for which to reset cache.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const { return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    template<typename DistributionNameT = Aws::String>
    void SetDistributionName(DistributionNameT&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::forward<DistributionNameT>(value); }
    template<typename DistributionNameT = Aws::String>
    ResetDistributionCacheRequest& WithDistributionName(DistributionNameT&& value) { SetDistributionName(std::forward<DistributionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
