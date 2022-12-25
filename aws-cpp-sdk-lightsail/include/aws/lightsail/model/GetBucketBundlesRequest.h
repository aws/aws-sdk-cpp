/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetBucketBundlesRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetBucketBundlesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBucketBundles"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A Boolean value that indicates whether to include inactive (unavailable)
     * bundles in the response of your request.</p>
     */
    inline bool GetIncludeInactive() const{ return m_includeInactive; }

    /**
     * <p>A Boolean value that indicates whether to include inactive (unavailable)
     * bundles in the response of your request.</p>
     */
    inline bool IncludeInactiveHasBeenSet() const { return m_includeInactiveHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether to include inactive (unavailable)
     * bundles in the response of your request.</p>
     */
    inline void SetIncludeInactive(bool value) { m_includeInactiveHasBeenSet = true; m_includeInactive = value; }

    /**
     * <p>A Boolean value that indicates whether to include inactive (unavailable)
     * bundles in the response of your request.</p>
     */
    inline GetBucketBundlesRequest& WithIncludeInactive(bool value) { SetIncludeInactive(value); return *this;}

  private:

    bool m_includeInactive;
    bool m_includeInactiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
