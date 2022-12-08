/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>Network time protocol (NTP) server settings. Use this option to connect to
   * local NTP servers instead of <code>pool.ntp.org</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NtpPayload">AWS
   * API Reference</a></p>
   */
  class NtpPayload
  {
  public:
    AWS_PANORAMA_API NtpPayload();
    AWS_PANORAMA_API NtpPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NtpPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNtpServers() const{ return m_ntpServers; }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline bool NtpServersHasBeenSet() const { return m_ntpServersHasBeenSet; }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline void SetNtpServers(const Aws::Vector<Aws::String>& value) { m_ntpServersHasBeenSet = true; m_ntpServers = value; }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline void SetNtpServers(Aws::Vector<Aws::String>&& value) { m_ntpServersHasBeenSet = true; m_ntpServers = std::move(value); }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline NtpPayload& WithNtpServers(const Aws::Vector<Aws::String>& value) { SetNtpServers(value); return *this;}

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline NtpPayload& WithNtpServers(Aws::Vector<Aws::String>&& value) { SetNtpServers(std::move(value)); return *this;}

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline NtpPayload& AddNtpServers(const Aws::String& value) { m_ntpServersHasBeenSet = true; m_ntpServers.push_back(value); return *this; }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline NtpPayload& AddNtpServers(Aws::String&& value) { m_ntpServersHasBeenSet = true; m_ntpServers.push_back(std::move(value)); return *this; }

    /**
     * <p>NTP servers to use, in order of preference.</p>
     */
    inline NtpPayload& AddNtpServers(const char* value) { m_ntpServersHasBeenSet = true; m_ntpServers.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ntpServers;
    bool m_ntpServersHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
