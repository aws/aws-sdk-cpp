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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Connectivity Info<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API ConnectivityInfo
  {
  public:
    ConnectivityInfo();
    ConnectivityInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ConnectivityInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline const Aws::String& GetHostAddress() const{ return m_hostAddress; }

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline void SetHostAddress(const Aws::String& value) { m_hostAddressHasBeenSet = true; m_hostAddress = value; }

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline void SetHostAddress(Aws::String&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::move(value); }

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline void SetHostAddress(const char* value) { m_hostAddressHasBeenSet = true; m_hostAddress.assign(value); }

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(const Aws::String& value) { SetHostAddress(value); return *this;}

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(Aws::String&& value) { SetHostAddress(std::move(value)); return *this;}

    /**
     * Endpoint for the GGC. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(const char* value) { SetHostAddress(value); return *this;}


    /**
     * Element Id for this entry in the list.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline ConnectivityInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline ConnectivityInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline ConnectivityInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Metadata for this endpoint.
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * Metadata for this endpoint.
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * Metadata for this endpoint.
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * Metadata for this endpoint.
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * Metadata for this endpoint.
     */
    inline ConnectivityInfo& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * Metadata for this endpoint.
     */
    inline ConnectivityInfo& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * Metadata for this endpoint.
     */
    inline ConnectivityInfo& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * Port of the GGC. Usually 8883.
     */
    inline int GetPortNumber() const{ return m_portNumber; }

    /**
     * Port of the GGC. Usually 8883.
     */
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }

    /**
     * Port of the GGC. Usually 8883.
     */
    inline ConnectivityInfo& WithPortNumber(int value) { SetPortNumber(value); return *this;}

  private:

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet;

    int m_portNumber;
    bool m_portNumberHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
