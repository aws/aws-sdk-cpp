/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/IotSiteWiseAssetModelPropertyIdentifier.h>
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
   * <p> The identifer of the input routed from AWS IoT SiteWise. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotSiteWiseInputIdentifier">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseInputIdentifier
  {
  public:
    AWS_IOTEVENTS_API IotSiteWiseInputIdentifier() = default;
    AWS_IOTEVENTS_API IotSiteWiseInputIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotSiteWiseInputIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the AWS IoT SiteWise asset model property. </p>
     */
    inline const IotSiteWiseAssetModelPropertyIdentifier& GetIotSiteWiseAssetModelPropertyIdentifier() const { return m_iotSiteWiseAssetModelPropertyIdentifier; }
    inline bool IotSiteWiseAssetModelPropertyIdentifierHasBeenSet() const { return m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet; }
    template<typename IotSiteWiseAssetModelPropertyIdentifierT = IotSiteWiseAssetModelPropertyIdentifier>
    void SetIotSiteWiseAssetModelPropertyIdentifier(IotSiteWiseAssetModelPropertyIdentifierT&& value) { m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet = true; m_iotSiteWiseAssetModelPropertyIdentifier = std::forward<IotSiteWiseAssetModelPropertyIdentifierT>(value); }
    template<typename IotSiteWiseAssetModelPropertyIdentifierT = IotSiteWiseAssetModelPropertyIdentifier>
    IotSiteWiseInputIdentifier& WithIotSiteWiseAssetModelPropertyIdentifier(IotSiteWiseAssetModelPropertyIdentifierT&& value) { SetIotSiteWiseAssetModelPropertyIdentifier(std::forward<IotSiteWiseAssetModelPropertyIdentifierT>(value)); return *this;}
    ///@}
  private:

    IotSiteWiseAssetModelPropertyIdentifier m_iotSiteWiseAssetModelPropertyIdentifier;
    bool m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
