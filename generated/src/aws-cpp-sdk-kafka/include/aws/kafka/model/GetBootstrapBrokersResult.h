/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{
  class GetBootstrapBrokersResult
  {
  public:
    AWS_KAFKA_API GetBootstrapBrokersResult() = default;
    AWS_KAFKA_API GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API GetBootstrapBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>A string containing one or more hostname:port pairs.</p>
       
     *  
     */
    inline const Aws::String& GetBootstrapBrokerString() const { return m_bootstrapBrokerString; }
    template<typename BootstrapBrokerStringT = Aws::String>
    void SetBootstrapBrokerString(BootstrapBrokerStringT&& value) { m_bootstrapBrokerStringHasBeenSet = true; m_bootstrapBrokerString = std::forward<BootstrapBrokerStringT>(value); }
    template<typename BootstrapBrokerStringT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerString(BootstrapBrokerStringT&& value) { SetBootstrapBrokerString(std::forward<BootstrapBrokerStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringTls() const { return m_bootstrapBrokerStringTls; }
    template<typename BootstrapBrokerStringTlsT = Aws::String>
    void SetBootstrapBrokerStringTls(BootstrapBrokerStringTlsT&& value) { m_bootstrapBrokerStringTlsHasBeenSet = true; m_bootstrapBrokerStringTls = std::forward<BootstrapBrokerStringTlsT>(value); }
    template<typename BootstrapBrokerStringTlsT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringTls(BootstrapBrokerStringTlsT&& value) { SetBootstrapBrokerStringTls(std::forward<BootstrapBrokerStringTlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and Sasl Scram
     * port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringSaslScram() const { return m_bootstrapBrokerStringSaslScram; }
    template<typename BootstrapBrokerStringSaslScramT = Aws::String>
    void SetBootstrapBrokerStringSaslScram(BootstrapBrokerStringSaslScramT&& value) { m_bootstrapBrokerStringSaslScramHasBeenSet = true; m_bootstrapBrokerStringSaslScram = std::forward<BootstrapBrokerStringSaslScramT>(value); }
    template<typename BootstrapBrokerStringSaslScramT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslScram(BootstrapBrokerStringSaslScramT&& value) { SetBootstrapBrokerStringSaslScram(std::forward<BootstrapBrokerStringSaslScramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string that contains one or more DNS names (or IP addresses)
     * and SASL IAM port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringSaslIam() const { return m_bootstrapBrokerStringSaslIam; }
    template<typename BootstrapBrokerStringSaslIamT = Aws::String>
    void SetBootstrapBrokerStringSaslIam(BootstrapBrokerStringSaslIamT&& value) { m_bootstrapBrokerStringSaslIamHasBeenSet = true; m_bootstrapBrokerStringSaslIam = std::forward<BootstrapBrokerStringSaslIamT>(value); }
    template<typename BootstrapBrokerStringSaslIamT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslIam(BootstrapBrokerStringSaslIamT&& value) { SetBootstrapBrokerStringSaslIam(std::forward<BootstrapBrokerStringSaslIamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicTls() const { return m_bootstrapBrokerStringPublicTls; }
    template<typename BootstrapBrokerStringPublicTlsT = Aws::String>
    void SetBootstrapBrokerStringPublicTls(BootstrapBrokerStringPublicTlsT&& value) { m_bootstrapBrokerStringPublicTlsHasBeenSet = true; m_bootstrapBrokerStringPublicTls = std::forward<BootstrapBrokerStringPublicTlsT>(value); }
    template<typename BootstrapBrokerStringPublicTlsT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicTls(BootstrapBrokerStringPublicTlsT&& value) { SetBootstrapBrokerStringPublicTls(std::forward<BootstrapBrokerStringPublicTlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and Sasl Scram
     * port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicSaslScram() const { return m_bootstrapBrokerStringPublicSaslScram; }
    template<typename BootstrapBrokerStringPublicSaslScramT = Aws::String>
    void SetBootstrapBrokerStringPublicSaslScram(BootstrapBrokerStringPublicSaslScramT&& value) { m_bootstrapBrokerStringPublicSaslScramHasBeenSet = true; m_bootstrapBrokerStringPublicSaslScram = std::forward<BootstrapBrokerStringPublicSaslScramT>(value); }
    template<typename BootstrapBrokerStringPublicSaslScramT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslScram(BootstrapBrokerStringPublicSaslScramT&& value) { SetBootstrapBrokerStringPublicSaslScram(std::forward<BootstrapBrokerStringPublicSaslScramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string that contains one or more DNS names (or IP addresses)
     * and SASL IAM port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicSaslIam() const { return m_bootstrapBrokerStringPublicSaslIam; }
    template<typename BootstrapBrokerStringPublicSaslIamT = Aws::String>
    void SetBootstrapBrokerStringPublicSaslIam(BootstrapBrokerStringPublicSaslIamT&& value) { m_bootstrapBrokerStringPublicSaslIamHasBeenSet = true; m_bootstrapBrokerStringPublicSaslIam = std::forward<BootstrapBrokerStringPublicSaslIamT>(value); }
    template<typename BootstrapBrokerStringPublicSaslIamT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslIam(BootstrapBrokerStringPublicSaslIamT&& value) { SetBootstrapBrokerStringPublicSaslIam(std::forward<BootstrapBrokerStringPublicSaslIamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivityTls() const { return m_bootstrapBrokerStringVpcConnectivityTls; }
    template<typename BootstrapBrokerStringVpcConnectivityTlsT = Aws::String>
    void SetBootstrapBrokerStringVpcConnectivityTls(BootstrapBrokerStringVpcConnectivityTlsT&& value) { m_bootstrapBrokerStringVpcConnectivityTlsHasBeenSet = true; m_bootstrapBrokerStringVpcConnectivityTls = std::forward<BootstrapBrokerStringVpcConnectivityTlsT>(value); }
    template<typename BootstrapBrokerStringVpcConnectivityTlsT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivityTls(BootstrapBrokerStringVpcConnectivityTlsT&& value) { SetBootstrapBrokerStringVpcConnectivityTls(std::forward<BootstrapBrokerStringVpcConnectivityTlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and SASL/SCRAM
     * port pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivitySaslScram() const { return m_bootstrapBrokerStringVpcConnectivitySaslScram; }
    template<typename BootstrapBrokerStringVpcConnectivitySaslScramT = Aws::String>
    void SetBootstrapBrokerStringVpcConnectivitySaslScram(BootstrapBrokerStringVpcConnectivitySaslScramT&& value) { m_bootstrapBrokerStringVpcConnectivitySaslScramHasBeenSet = true; m_bootstrapBrokerStringVpcConnectivitySaslScram = std::forward<BootstrapBrokerStringVpcConnectivitySaslScramT>(value); }
    template<typename BootstrapBrokerStringVpcConnectivitySaslScramT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslScram(BootstrapBrokerStringVpcConnectivitySaslScramT&& value) { SetBootstrapBrokerStringVpcConnectivitySaslScram(std::forward<BootstrapBrokerStringVpcConnectivitySaslScramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and SASL/IAM
     * port pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivitySaslIam() const { return m_bootstrapBrokerStringVpcConnectivitySaslIam; }
    template<typename BootstrapBrokerStringVpcConnectivitySaslIamT = Aws::String>
    void SetBootstrapBrokerStringVpcConnectivitySaslIam(BootstrapBrokerStringVpcConnectivitySaslIamT&& value) { m_bootstrapBrokerStringVpcConnectivitySaslIamHasBeenSet = true; m_bootstrapBrokerStringVpcConnectivitySaslIam = std::forward<BootstrapBrokerStringVpcConnectivitySaslIamT>(value); }
    template<typename BootstrapBrokerStringVpcConnectivitySaslIamT = Aws::String>
    GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslIam(BootstrapBrokerStringVpcConnectivitySaslIamT&& value) { SetBootstrapBrokerStringVpcConnectivitySaslIam(std::forward<BootstrapBrokerStringVpcConnectivitySaslIamT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBootstrapBrokersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bootstrapBrokerString;
    bool m_bootstrapBrokerStringHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringTls;
    bool m_bootstrapBrokerStringTlsHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringSaslScram;
    bool m_bootstrapBrokerStringSaslScramHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringSaslIam;
    bool m_bootstrapBrokerStringSaslIamHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringPublicTls;
    bool m_bootstrapBrokerStringPublicTlsHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringPublicSaslScram;
    bool m_bootstrapBrokerStringPublicSaslScramHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringPublicSaslIam;
    bool m_bootstrapBrokerStringPublicSaslIamHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringVpcConnectivityTls;
    bool m_bootstrapBrokerStringVpcConnectivityTlsHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringVpcConnectivitySaslScram;
    bool m_bootstrapBrokerStringVpcConnectivitySaslScramHasBeenSet = false;

    Aws::String m_bootstrapBrokerStringVpcConnectivitySaslIam;
    bool m_bootstrapBrokerStringVpcConnectivitySaslIamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
