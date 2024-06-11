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
    AWS_KAFKA_API GetBootstrapBrokersResult();
    AWS_KAFKA_API GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API GetBootstrapBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>A string containing one or more hostname:port pairs.</p>
       
     *  
     */
    inline const Aws::String& GetBootstrapBrokerString() const{ return m_bootstrapBrokerString; }
    inline void SetBootstrapBrokerString(const Aws::String& value) { m_bootstrapBrokerString = value; }
    inline void SetBootstrapBrokerString(Aws::String&& value) { m_bootstrapBrokerString = std::move(value); }
    inline void SetBootstrapBrokerString(const char* value) { m_bootstrapBrokerString.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(const Aws::String& value) { SetBootstrapBrokerString(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(Aws::String&& value) { SetBootstrapBrokerString(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(const char* value) { SetBootstrapBrokerString(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringTls() const{ return m_bootstrapBrokerStringTls; }
    inline void SetBootstrapBrokerStringTls(const Aws::String& value) { m_bootstrapBrokerStringTls = value; }
    inline void SetBootstrapBrokerStringTls(Aws::String&& value) { m_bootstrapBrokerStringTls = std::move(value); }
    inline void SetBootstrapBrokerStringTls(const char* value) { m_bootstrapBrokerStringTls.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringTls(const Aws::String& value) { SetBootstrapBrokerStringTls(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringTls(Aws::String&& value) { SetBootstrapBrokerStringTls(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringTls(const char* value) { SetBootstrapBrokerStringTls(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and Sasl Scram
     * port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringSaslScram() const{ return m_bootstrapBrokerStringSaslScram; }
    inline void SetBootstrapBrokerStringSaslScram(const Aws::String& value) { m_bootstrapBrokerStringSaslScram = value; }
    inline void SetBootstrapBrokerStringSaslScram(Aws::String&& value) { m_bootstrapBrokerStringSaslScram = std::move(value); }
    inline void SetBootstrapBrokerStringSaslScram(const char* value) { m_bootstrapBrokerStringSaslScram.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslScram(const Aws::String& value) { SetBootstrapBrokerStringSaslScram(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslScram(Aws::String&& value) { SetBootstrapBrokerStringSaslScram(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslScram(const char* value) { SetBootstrapBrokerStringSaslScram(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string that contains one or more DNS names (or IP addresses)
     * and SASL IAM port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringSaslIam() const{ return m_bootstrapBrokerStringSaslIam; }
    inline void SetBootstrapBrokerStringSaslIam(const Aws::String& value) { m_bootstrapBrokerStringSaslIam = value; }
    inline void SetBootstrapBrokerStringSaslIam(Aws::String&& value) { m_bootstrapBrokerStringSaslIam = std::move(value); }
    inline void SetBootstrapBrokerStringSaslIam(const char* value) { m_bootstrapBrokerStringSaslIam.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslIam(const Aws::String& value) { SetBootstrapBrokerStringSaslIam(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslIam(Aws::String&& value) { SetBootstrapBrokerStringSaslIam(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringSaslIam(const char* value) { SetBootstrapBrokerStringSaslIam(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicTls() const{ return m_bootstrapBrokerStringPublicTls; }
    inline void SetBootstrapBrokerStringPublicTls(const Aws::String& value) { m_bootstrapBrokerStringPublicTls = value; }
    inline void SetBootstrapBrokerStringPublicTls(Aws::String&& value) { m_bootstrapBrokerStringPublicTls = std::move(value); }
    inline void SetBootstrapBrokerStringPublicTls(const char* value) { m_bootstrapBrokerStringPublicTls.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicTls(const Aws::String& value) { SetBootstrapBrokerStringPublicTls(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicTls(Aws::String&& value) { SetBootstrapBrokerStringPublicTls(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicTls(const char* value) { SetBootstrapBrokerStringPublicTls(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and Sasl Scram
     * port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicSaslScram() const{ return m_bootstrapBrokerStringPublicSaslScram; }
    inline void SetBootstrapBrokerStringPublicSaslScram(const Aws::String& value) { m_bootstrapBrokerStringPublicSaslScram = value; }
    inline void SetBootstrapBrokerStringPublicSaslScram(Aws::String&& value) { m_bootstrapBrokerStringPublicSaslScram = std::move(value); }
    inline void SetBootstrapBrokerStringPublicSaslScram(const char* value) { m_bootstrapBrokerStringPublicSaslScram.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslScram(const Aws::String& value) { SetBootstrapBrokerStringPublicSaslScram(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslScram(Aws::String&& value) { SetBootstrapBrokerStringPublicSaslScram(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslScram(const char* value) { SetBootstrapBrokerStringPublicSaslScram(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string that contains one or more DNS names (or IP addresses)
     * and SASL IAM port pairs.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringPublicSaslIam() const{ return m_bootstrapBrokerStringPublicSaslIam; }
    inline void SetBootstrapBrokerStringPublicSaslIam(const Aws::String& value) { m_bootstrapBrokerStringPublicSaslIam = value; }
    inline void SetBootstrapBrokerStringPublicSaslIam(Aws::String&& value) { m_bootstrapBrokerStringPublicSaslIam = std::move(value); }
    inline void SetBootstrapBrokerStringPublicSaslIam(const char* value) { m_bootstrapBrokerStringPublicSaslIam.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslIam(const Aws::String& value) { SetBootstrapBrokerStringPublicSaslIam(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslIam(Aws::String&& value) { SetBootstrapBrokerStringPublicSaslIam(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringPublicSaslIam(const char* value) { SetBootstrapBrokerStringPublicSaslIam(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and TLS port
     * pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivityTls() const{ return m_bootstrapBrokerStringVpcConnectivityTls; }
    inline void SetBootstrapBrokerStringVpcConnectivityTls(const Aws::String& value) { m_bootstrapBrokerStringVpcConnectivityTls = value; }
    inline void SetBootstrapBrokerStringVpcConnectivityTls(Aws::String&& value) { m_bootstrapBrokerStringVpcConnectivityTls = std::move(value); }
    inline void SetBootstrapBrokerStringVpcConnectivityTls(const char* value) { m_bootstrapBrokerStringVpcConnectivityTls.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivityTls(const Aws::String& value) { SetBootstrapBrokerStringVpcConnectivityTls(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivityTls(Aws::String&& value) { SetBootstrapBrokerStringVpcConnectivityTls(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivityTls(const char* value) { SetBootstrapBrokerStringVpcConnectivityTls(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and SASL/SCRAM
     * port pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivitySaslScram() const{ return m_bootstrapBrokerStringVpcConnectivitySaslScram; }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslScram(const Aws::String& value) { m_bootstrapBrokerStringVpcConnectivitySaslScram = value; }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslScram(Aws::String&& value) { m_bootstrapBrokerStringVpcConnectivitySaslScram = std::move(value); }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslScram(const char* value) { m_bootstrapBrokerStringVpcConnectivitySaslScram.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslScram(const Aws::String& value) { SetBootstrapBrokerStringVpcConnectivitySaslScram(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslScram(Aws::String&& value) { SetBootstrapBrokerStringVpcConnectivitySaslScram(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslScram(const char* value) { SetBootstrapBrokerStringVpcConnectivitySaslScram(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A string containing one or more DNS names (or IP) and SASL/IAM
     * port pairs for VPC connectivity.</p>
         
     */
    inline const Aws::String& GetBootstrapBrokerStringVpcConnectivitySaslIam() const{ return m_bootstrapBrokerStringVpcConnectivitySaslIam; }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslIam(const Aws::String& value) { m_bootstrapBrokerStringVpcConnectivitySaslIam = value; }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslIam(Aws::String&& value) { m_bootstrapBrokerStringVpcConnectivitySaslIam = std::move(value); }
    inline void SetBootstrapBrokerStringVpcConnectivitySaslIam(const char* value) { m_bootstrapBrokerStringVpcConnectivitySaslIam.assign(value); }
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslIam(const Aws::String& value) { SetBootstrapBrokerStringVpcConnectivitySaslIam(value); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslIam(Aws::String&& value) { SetBootstrapBrokerStringVpcConnectivitySaslIam(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithBootstrapBrokerStringVpcConnectivitySaslIam(const char* value) { SetBootstrapBrokerStringVpcConnectivitySaslIam(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBootstrapBrokersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBootstrapBrokersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBootstrapBrokersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_bootstrapBrokerString;

    Aws::String m_bootstrapBrokerStringTls;

    Aws::String m_bootstrapBrokerStringSaslScram;

    Aws::String m_bootstrapBrokerStringSaslIam;

    Aws::String m_bootstrapBrokerStringPublicTls;

    Aws::String m_bootstrapBrokerStringPublicSaslScram;

    Aws::String m_bootstrapBrokerStringPublicSaslIam;

    Aws::String m_bootstrapBrokerStringVpcConnectivityTls;

    Aws::String m_bootstrapBrokerStringVpcConnectivitySaslScram;

    Aws::String m_bootstrapBrokerStringVpcConnectivitySaslIam;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
