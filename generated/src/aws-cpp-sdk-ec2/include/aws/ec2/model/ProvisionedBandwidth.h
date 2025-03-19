/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Reserved. If you need to sustain traffic greater than the <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-gateways">documented
   * limits</a>, contact Amazon Web Services Support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionedBandwidth">AWS
   * API Reference</a></p>
   */
  class ProvisionedBandwidth
  {
  public:
    AWS_EC2_API ProvisionedBandwidth() = default;
    AWS_EC2_API ProvisionedBandwidth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ProvisionedBandwidth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::Utils::DateTime& GetProvisionTime() const { return m_provisionTime; }
    inline bool ProvisionTimeHasBeenSet() const { return m_provisionTimeHasBeenSet; }
    template<typename ProvisionTimeT = Aws::Utils::DateTime>
    void SetProvisionTime(ProvisionTimeT&& value) { m_provisionTimeHasBeenSet = true; m_provisionTime = std::forward<ProvisionTimeT>(value); }
    template<typename ProvisionTimeT = Aws::Utils::DateTime>
    ProvisionedBandwidth& WithProvisionTime(ProvisionTimeT&& value) { SetProvisionTime(std::forward<ProvisionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetProvisioned() const { return m_provisioned; }
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }
    template<typename ProvisionedT = Aws::String>
    void SetProvisioned(ProvisionedT&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::forward<ProvisionedT>(value); }
    template<typename ProvisionedT = Aws::String>
    ProvisionedBandwidth& WithProvisioned(ProvisionedT&& value) { SetProvisioned(std::forward<ProvisionedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    ProvisionedBandwidth& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetRequested() const { return m_requested; }
    inline bool RequestedHasBeenSet() const { return m_requestedHasBeenSet; }
    template<typename RequestedT = Aws::String>
    void SetRequested(RequestedT&& value) { m_requestedHasBeenSet = true; m_requested = std::forward<RequestedT>(value); }
    template<typename RequestedT = Aws::String>
    ProvisionedBandwidth& WithRequested(RequestedT&& value) { SetRequested(std::forward<RequestedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ProvisionedBandwidth& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_provisionTime{};
    bool m_provisionTimeHasBeenSet = false;

    Aws::String m_provisioned;
    bool m_provisionedHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Aws::String m_requested;
    bool m_requestedHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
