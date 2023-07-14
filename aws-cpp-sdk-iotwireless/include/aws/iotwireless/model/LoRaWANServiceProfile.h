/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANServiceProfile object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANServiceProfile">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API LoRaWANServiceProfile
  {
  public:
    LoRaWANServiceProfile();
    LoRaWANServiceProfile(Aws::Utils::Json::JsonView jsonValue);
    LoRaWANServiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool GetAddGwMetadata() const{ return m_addGwMetadata; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool AddGwMetadataHasBeenSet() const { return m_addGwMetadataHasBeenSet; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline void SetAddGwMetadata(bool value) { m_addGwMetadataHasBeenSet = true; m_addGwMetadata = value; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline LoRaWANServiceProfile& WithAddGwMetadata(bool value) { SetAddGwMetadata(value); return *this;}

  private:

    bool m_addGwMetadata;
    bool m_addGwMetadataHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
