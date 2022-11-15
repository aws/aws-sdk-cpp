/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PositionResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AWS_IOTWIRELESS_API GetPositionConfigurationRequest : public IoTWirelessRequest
  {
  public:
    GetPositionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPositionConfiguration"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline GetPositionConfigurationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline GetPositionConfigurationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier used in a position configuration.</p>
     */
    inline GetPositionConfigurationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline const PositionResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline void SetResourceType(const PositionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline void SetResourceType(PositionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline GetPositionConfigurationRequest& WithResourceType(const PositionResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type of the resource for which position configuration is
     * retrieved.</p>
     */
    inline GetPositionConfigurationRequest& WithResourceType(PositionResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    PositionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
