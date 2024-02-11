/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>A list of DNS server name and server IP. This is used to set up Route-53
   * outbound resolvers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CustomDNSServer">AWS
   * API Reference</a></p>
   */
  class CustomDNSServer
  {
  public:
    AWS_FINSPACE_API CustomDNSServer();
    AWS_FINSPACE_API CustomDNSServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API CustomDNSServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DNS server.</p>
     */
    inline const Aws::String& GetCustomDNSServerName() const{ return m_customDNSServerName; }

    /**
     * <p>The name of the DNS server.</p>
     */
    inline bool CustomDNSServerNameHasBeenSet() const { return m_customDNSServerNameHasBeenSet; }

    /**
     * <p>The name of the DNS server.</p>
     */
    inline void SetCustomDNSServerName(const Aws::String& value) { m_customDNSServerNameHasBeenSet = true; m_customDNSServerName = value; }

    /**
     * <p>The name of the DNS server.</p>
     */
    inline void SetCustomDNSServerName(Aws::String&& value) { m_customDNSServerNameHasBeenSet = true; m_customDNSServerName = std::move(value); }

    /**
     * <p>The name of the DNS server.</p>
     */
    inline void SetCustomDNSServerName(const char* value) { m_customDNSServerNameHasBeenSet = true; m_customDNSServerName.assign(value); }

    /**
     * <p>The name of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerName(const Aws::String& value) { SetCustomDNSServerName(value); return *this;}

    /**
     * <p>The name of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerName(Aws::String&& value) { SetCustomDNSServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerName(const char* value) { SetCustomDNSServerName(value); return *this;}


    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline const Aws::String& GetCustomDNSServerIP() const{ return m_customDNSServerIP; }

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline bool CustomDNSServerIPHasBeenSet() const { return m_customDNSServerIPHasBeenSet; }

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline void SetCustomDNSServerIP(const Aws::String& value) { m_customDNSServerIPHasBeenSet = true; m_customDNSServerIP = value; }

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline void SetCustomDNSServerIP(Aws::String&& value) { m_customDNSServerIPHasBeenSet = true; m_customDNSServerIP = std::move(value); }

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline void SetCustomDNSServerIP(const char* value) { m_customDNSServerIPHasBeenSet = true; m_customDNSServerIP.assign(value); }

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerIP(const Aws::String& value) { SetCustomDNSServerIP(value); return *this;}

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerIP(Aws::String&& value) { SetCustomDNSServerIP(std::move(value)); return *this;}

    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline CustomDNSServer& WithCustomDNSServerIP(const char* value) { SetCustomDNSServerIP(value); return *this;}

  private:

    Aws::String m_customDNSServerName;
    bool m_customDNSServerNameHasBeenSet = false;

    Aws::String m_customDNSServerIP;
    bool m_customDNSServerIPHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
