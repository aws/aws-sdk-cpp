/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Multiplex MediaConnect output destination settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexMediaConnectOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexMediaConnectOutputDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexMediaConnectOutputDestinationSettings();
    AWS_MEDIALIVE_API MultiplexMediaConnectOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexMediaConnectOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}

  private:

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
