﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LogLevel.h>
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
  class AWS_IOTWIRELESS_API PutResourceLogLevelRequest : public IoTWirelessRequest
  {
  public:
    PutResourceLogLevelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceLogLevel"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    
    inline PutResourceLogLevelRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    
    inline PutResourceLogLevelRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    
    inline PutResourceLogLevelRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline PutResourceLogLevelRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline PutResourceLogLevelRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource, which can be <code>WirelessDevice</code> or
     * <code>WirelessGateway</code>.</p>
     */
    inline PutResourceLogLevelRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    
    inline PutResourceLogLevelRequest& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    
    inline PutResourceLogLevelRequest& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
