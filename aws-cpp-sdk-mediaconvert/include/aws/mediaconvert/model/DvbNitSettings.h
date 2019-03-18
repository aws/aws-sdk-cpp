/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Inserts DVB Network Information Table (NIT) at the specified table repetition
   * interval.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbNitSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DvbNitSettings
  {
  public:
    DvbNitSettings();
    DvbNitSettings(Aws::Utils::Json::JsonView jsonValue);
    DvbNitSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline int GetNetworkId() const{ return m_networkId; }

    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline void SetNetworkId(int value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline DvbNitSettings& WithNetworkId(int value) { SetNetworkId(value); return *this;}


    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline bool NetworkNameHasBeenSet() const { return m_networkNameHasBeenSet; }

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}

    /**
     * The network name text placed in the network_name_descriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetNitInterval() const{ return m_nitInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool NitIntervalHasBeenSet() const { return m_nitIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetNitInterval(int value) { m_nitIntervalHasBeenSet = true; m_nitInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbNitSettings& WithNitInterval(int value) { SetNitInterval(value); return *this;}

  private:

    int m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet;

    int m_nitInterval;
    bool m_nitIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
