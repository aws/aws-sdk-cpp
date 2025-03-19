/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/Reason.h>
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
   * <p>Contains information on suspicious IP addresses identified as indicators of
   * compromise. This indicator is derived from Amazon Web Services threat
   * intelligence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/FlaggedIpAddressDetail">AWS
   * API Reference</a></p>
   */
  class FlaggedIpAddressDetail
  {
  public:
    AWS_DETECTIVE_API FlaggedIpAddressDetail() = default;
    AWS_DETECTIVE_API FlaggedIpAddressDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API FlaggedIpAddressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    FlaggedIpAddressDetail& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline Reason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(Reason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline FlaggedIpAddressDetail& WithReason(Reason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Reason m_reason{Reason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
