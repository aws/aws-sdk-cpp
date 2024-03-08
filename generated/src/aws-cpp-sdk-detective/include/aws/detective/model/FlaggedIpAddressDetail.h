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
    AWS_DETECTIVE_API FlaggedIpAddressDetail();
    AWS_DETECTIVE_API FlaggedIpAddressDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API FlaggedIpAddressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline FlaggedIpAddressDetail& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline FlaggedIpAddressDetail& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the suspicious entity.</p>
     */
    inline FlaggedIpAddressDetail& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline const Reason& GetReason() const{ return m_reason; }

    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline void SetReason(const Reason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline void SetReason(Reason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline FlaggedIpAddressDetail& WithReason(const Reason& value) { SetReason(value); return *this;}

    /**
     * <p>Details the reason the IP address was flagged as suspicious.</p>
     */
    inline FlaggedIpAddressDetail& WithReason(Reason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Reason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
