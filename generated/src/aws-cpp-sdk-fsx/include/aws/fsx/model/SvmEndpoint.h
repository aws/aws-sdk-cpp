/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>An Amazon FSx for NetApp ONTAP storage virtual machine (SVM) has four
   * endpoints that are used to access data or to manage the SVM using the NetApp
   * ONTAP CLI, REST API, or NetApp CloudManager. They are the <code>Iscsi</code>,
   * <code>Management</code>, <code>Nfs</code>, and <code>Smb</code>
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SvmEndpoint">AWS API
   * Reference</a></p>
   */
  class SvmEndpoint
  {
  public:
    AWS_FSX_API SvmEndpoint();
    AWS_FSX_API SvmEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SvmEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    
    inline SvmEndpoint& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    
    inline SvmEndpoint& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    
    inline SvmEndpoint& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline SvmEndpoint& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline SvmEndpoint& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline SvmEndpoint& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline SvmEndpoint& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The SVM endpoint's IP addresses.</p>
     */
    inline SvmEndpoint& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

  private:

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
