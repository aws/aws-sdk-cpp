/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details new geolocations used either at the resource or account level. For
   * example, lists an observed geolocation that is an infrequent or unused location
   * based on previous user activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/NewGeolocationDetail">AWS
   * API Reference</a></p>
   */
  class NewGeolocationDetail
  {
  public:
    AWS_DETECTIVE_API NewGeolocationDetail();
    AWS_DETECTIVE_API NewGeolocationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API NewGeolocationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Location where the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address using which the resource was accessed.</p>
     */
    inline NewGeolocationDetail& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>Checks if the geolocation is new for the entire account.</p>
     */
    inline bool GetIsNewForEntireAccount() const{ return m_isNewForEntireAccount; }

    /**
     * <p>Checks if the geolocation is new for the entire account.</p>
     */
    inline bool IsNewForEntireAccountHasBeenSet() const { return m_isNewForEntireAccountHasBeenSet; }

    /**
     * <p>Checks if the geolocation is new for the entire account.</p>
     */
    inline void SetIsNewForEntireAccount(bool value) { m_isNewForEntireAccountHasBeenSet = true; m_isNewForEntireAccount = value; }

    /**
     * <p>Checks if the geolocation is new for the entire account.</p>
     */
    inline NewGeolocationDetail& WithIsNewForEntireAccount(bool value) { SetIsNewForEntireAccount(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    bool m_isNewForEntireAccount;
    bool m_isNewForEntireAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
