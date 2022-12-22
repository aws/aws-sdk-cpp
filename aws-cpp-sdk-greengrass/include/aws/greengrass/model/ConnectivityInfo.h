/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a Greengrass core's connectivity.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class ConnectivityInfo
  {
  public:
    AWS_GREENGRASS_API ConnectivityInfo();
    AWS_GREENGRASS_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline const Aws::String& GetHostAddress() const{ return m_hostAddress; }

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline void SetHostAddress(const Aws::String& value) { m_hostAddressHasBeenSet = true; m_hostAddress = value; }

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline void SetHostAddress(Aws::String&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::move(value); }

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline void SetHostAddress(const char* value) { m_hostAddressHasBeenSet = true; m_hostAddress.assign(value); }

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(const Aws::String& value) { SetHostAddress(value); return *this;}

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(Aws::String&& value) { SetHostAddress(std::move(value)); return *this;}

    /**
     * The endpoint for the Greengrass core. Can be an IP address or DNS.
     */
    inline ConnectivityInfo& WithHostAddress(const char* value) { SetHostAddress(value); return *this;}


    /**
     * The ID of the connectivity information.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the connectivity information.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the connectivity information.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the connectivity information.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the connectivity information.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the connectivity information.
     */
    inline ConnectivityInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the connectivity information.
     */
    inline ConnectivityInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the connectivity information.
     */
    inline ConnectivityInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Metadata for this endpoint.
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * Metadata for this endpoint.
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

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
     * The port of the Greengrass core. Usually 8883.
     */
    inline int GetPortNumber() const{ return m_portNumber; }

    /**
     * The port of the Greengrass core. Usually 8883.
     */
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }

    /**
     * The port of the Greengrass core. Usually 8883.
     */
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }

    /**
     * The port of the Greengrass core. Usually 8883.
     */
    inline ConnectivityInfo& WithPortNumber(int value) { SetPortNumber(value); return *this;}

  private:

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    int m_portNumber;
    bool m_portNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
