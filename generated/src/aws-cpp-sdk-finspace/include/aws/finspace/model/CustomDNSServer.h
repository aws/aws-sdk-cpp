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
    AWS_FINSPACE_API CustomDNSServer() = default;
    AWS_FINSPACE_API CustomDNSServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API CustomDNSServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DNS server.</p>
     */
    inline const Aws::String& GetCustomDNSServerName() const { return m_customDNSServerName; }
    inline bool CustomDNSServerNameHasBeenSet() const { return m_customDNSServerNameHasBeenSet; }
    template<typename CustomDNSServerNameT = Aws::String>
    void SetCustomDNSServerName(CustomDNSServerNameT&& value) { m_customDNSServerNameHasBeenSet = true; m_customDNSServerName = std::forward<CustomDNSServerNameT>(value); }
    template<typename CustomDNSServerNameT = Aws::String>
    CustomDNSServer& WithCustomDNSServerName(CustomDNSServerNameT&& value) { SetCustomDNSServerName(std::forward<CustomDNSServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the DNS server.</p>
     */
    inline const Aws::String& GetCustomDNSServerIP() const { return m_customDNSServerIP; }
    inline bool CustomDNSServerIPHasBeenSet() const { return m_customDNSServerIPHasBeenSet; }
    template<typename CustomDNSServerIPT = Aws::String>
    void SetCustomDNSServerIP(CustomDNSServerIPT&& value) { m_customDNSServerIPHasBeenSet = true; m_customDNSServerIP = std::forward<CustomDNSServerIPT>(value); }
    template<typename CustomDNSServerIPT = Aws::String>
    CustomDNSServer& WithCustomDNSServerIP(CustomDNSServerIPT&& value) { SetCustomDNSServerIP(std::forward<CustomDNSServerIPT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customDNSServerName;
    bool m_customDNSServerNameHasBeenSet = false;

    Aws::String m_customDNSServerIP;
    bool m_customDNSServerIPHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
