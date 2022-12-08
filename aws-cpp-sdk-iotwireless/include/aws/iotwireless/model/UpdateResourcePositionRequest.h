/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/PositionResourceType.h>
#include <aws/core/utils/Array.h>
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
  class UpdateResourcePositionRequest : public StreamingIoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateResourcePositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourcePosition"; }

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline UpdateResourcePositionRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline UpdateResourcePositionRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource for which position information is updated. It
     * can be the wireless device ID or the wireless gateway ID depending on the
     * resource type.</p>
     */
    inline UpdateResourcePositionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline const PositionResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline void SetResourceType(const PositionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline void SetResourceType(PositionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline UpdateResourcePositionRequest& WithResourceType(const PositionResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource for which position information is updated, which can be
     * a wireless device or a wireless gateway.</p>
     */
    inline UpdateResourcePositionRequest& WithResourceType(PositionResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    PositionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
