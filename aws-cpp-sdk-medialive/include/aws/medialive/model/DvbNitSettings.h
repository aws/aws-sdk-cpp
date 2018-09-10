﻿/*
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
   * DVB Network Information Table (NIT)<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbNitSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DvbNitSettings
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
    inline void SetNetworkId(int value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * The numeric value placed in the Network Information Table (NIT).
     */
    inline DvbNitSettings& WithNetworkId(int value) { SetNetworkId(value); return *this;}


    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetNetworkName() const{ return m_networkName; }

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(const Aws::String& value) { m_networkNameHasBeenSet = true; m_networkName = value; }

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(Aws::String&& value) { m_networkNameHasBeenSet = true; m_networkName = std::move(value); }

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline void SetNetworkName(const char* value) { m_networkNameHasBeenSet = true; m_networkName.assign(value); }

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(const Aws::String& value) { SetNetworkName(value); return *this;}

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(Aws::String&& value) { SetNetworkName(std::move(value)); return *this;}

    /**
     * The network name text placed in the networkNameDescriptor inside the Network
     * Information Table. Maximum length is 256 characters.
     */
    inline DvbNitSettings& WithNetworkName(const char* value) { SetNetworkName(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetRepInterval() const{ return m_repInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetRepInterval(int value) { m_repIntervalHasBeenSet = true; m_repInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbNitSettings& WithRepInterval(int value) { SetRepInterval(value); return *this;}

  private:

    int m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_networkName;
    bool m_networkNameHasBeenSet;

    int m_repInterval;
    bool m_repIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
