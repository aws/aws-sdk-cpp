﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Hints used to uniquely identify a machine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/IdentificationHints">AWS
   * API Reference</a></p>
   */
  class IdentificationHints
  {
  public:
    AWS_DRS_API IdentificationHints() = default;
    AWS_DRS_API IdentificationHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API IdentificationHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Instance ID identification hint.</p>
     */
    inline const Aws::String& GetAwsInstanceID() const { return m_awsInstanceID; }
    inline bool AwsInstanceIDHasBeenSet() const { return m_awsInstanceIDHasBeenSet; }
    template<typename AwsInstanceIDT = Aws::String>
    void SetAwsInstanceID(AwsInstanceIDT&& value) { m_awsInstanceIDHasBeenSet = true; m_awsInstanceID = std::forward<AwsInstanceIDT>(value); }
    template<typename AwsInstanceIDT = Aws::String>
    IdentificationHints& WithAwsInstanceID(AwsInstanceIDT&& value) { SetAwsInstanceID(std::forward<AwsInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully Qualified Domain Name identification hint.</p>
     */
    inline const Aws::String& GetFqdn() const { return m_fqdn; }
    inline bool FqdnHasBeenSet() const { return m_fqdnHasBeenSet; }
    template<typename FqdnT = Aws::String>
    void SetFqdn(FqdnT&& value) { m_fqdnHasBeenSet = true; m_fqdn = std::forward<FqdnT>(value); }
    template<typename FqdnT = Aws::String>
    IdentificationHints& WithFqdn(FqdnT&& value) { SetFqdn(std::forward<FqdnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hostname identification hint.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    IdentificationHints& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>vCenter VM path identification hint.</p>
     */
    inline const Aws::String& GetVmWareUuid() const { return m_vmWareUuid; }
    inline bool VmWareUuidHasBeenSet() const { return m_vmWareUuidHasBeenSet; }
    template<typename VmWareUuidT = Aws::String>
    void SetVmWareUuid(VmWareUuidT&& value) { m_vmWareUuidHasBeenSet = true; m_vmWareUuid = std::forward<VmWareUuidT>(value); }
    template<typename VmWareUuidT = Aws::String>
    IdentificationHints& WithVmWareUuid(VmWareUuidT&& value) { SetVmWareUuid(std::forward<VmWareUuidT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsInstanceID;
    bool m_awsInstanceIDHasBeenSet = false;

    Aws::String m_fqdn;
    bool m_fqdnHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_vmWareUuid;
    bool m_vmWareUuidHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
