﻿/**
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
  class AWS_LIGHTSAIL_API GetDistributionLatestCacheResetRequest : public LightsailRequest
  {
  public:
    GetDistributionLatestCacheResetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDistributionLatestCacheReset"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline GetDistributionLatestCacheResetRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline GetDistributionLatestCacheResetRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution for which to return the timestamp of the last
     * cache reset.</p> <p>Use the <code>GetDistributions</code> action to get a list
     * of distribution names that you can specify.</p> <p>When omitted, the response
     * includes the latest cache reset timestamp of all your distributions.</p>
     */
    inline GetDistributionLatestCacheResetRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}

  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
