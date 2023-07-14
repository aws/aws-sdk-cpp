﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/IotEventsInputIdentifier.h>
#include <aws/iotevents/model/IotSiteWiseInputIdentifier.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p> The identifer of the input. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/InputIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API InputIdentifier
  {
  public:
    InputIdentifier();
    InputIdentifier(Aws::Utils::Json::JsonView jsonValue);
    InputIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline const IotEventsInputIdentifier& GetIotEventsInputIdentifier() const{ return m_iotEventsInputIdentifier; }

    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline bool IotEventsInputIdentifierHasBeenSet() const { return m_iotEventsInputIdentifierHasBeenSet; }

    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline void SetIotEventsInputIdentifier(const IotEventsInputIdentifier& value) { m_iotEventsInputIdentifierHasBeenSet = true; m_iotEventsInputIdentifier = value; }

    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline void SetIotEventsInputIdentifier(IotEventsInputIdentifier&& value) { m_iotEventsInputIdentifierHasBeenSet = true; m_iotEventsInputIdentifier = std::move(value); }

    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline InputIdentifier& WithIotEventsInputIdentifier(const IotEventsInputIdentifier& value) { SetIotEventsInputIdentifier(value); return *this;}

    /**
     * <p> The identifier of the input routed to AWS IoT Events. </p>
     */
    inline InputIdentifier& WithIotEventsInputIdentifier(IotEventsInputIdentifier&& value) { SetIotEventsInputIdentifier(std::move(value)); return *this;}


    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline const IotSiteWiseInputIdentifier& GetIotSiteWiseInputIdentifier() const{ return m_iotSiteWiseInputIdentifier; }

    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline bool IotSiteWiseInputIdentifierHasBeenSet() const { return m_iotSiteWiseInputIdentifierHasBeenSet; }

    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline void SetIotSiteWiseInputIdentifier(const IotSiteWiseInputIdentifier& value) { m_iotSiteWiseInputIdentifierHasBeenSet = true; m_iotSiteWiseInputIdentifier = value; }

    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline void SetIotSiteWiseInputIdentifier(IotSiteWiseInputIdentifier&& value) { m_iotSiteWiseInputIdentifierHasBeenSet = true; m_iotSiteWiseInputIdentifier = std::move(value); }

    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline InputIdentifier& WithIotSiteWiseInputIdentifier(const IotSiteWiseInputIdentifier& value) { SetIotSiteWiseInputIdentifier(value); return *this;}

    /**
     * <p> The identifer of the input routed from AWS IoT SiteWise. </p>
     */
    inline InputIdentifier& WithIotSiteWiseInputIdentifier(IotSiteWiseInputIdentifier&& value) { SetIotSiteWiseInputIdentifier(std::move(value)); return *this;}

  private:

    IotEventsInputIdentifier m_iotEventsInputIdentifier;
    bool m_iotEventsInputIdentifierHasBeenSet;

    IotSiteWiseInputIdentifier m_iotSiteWiseInputIdentifier;
    bool m_iotSiteWiseInputIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
