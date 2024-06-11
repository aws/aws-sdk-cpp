﻿/**
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
  class GetResourcePositionRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetResourcePositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourcePosition"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the resource for which position information is retrieved.
     * It can be the wireless device ID or the wireless gateway ID, depending on the
     * resource type.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline GetResourcePositionRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline GetResourcePositionRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline GetResourcePositionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for which position information is retrieved, which can
     * be a wireless device or a wireless gateway.</p>
     */
    inline const PositionResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const PositionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(PositionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline GetResourcePositionRequest& WithResourceType(const PositionResourceType& value) { SetResourceType(value); return *this;}
    inline GetResourcePositionRequest& WithResourceType(PositionResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    PositionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
