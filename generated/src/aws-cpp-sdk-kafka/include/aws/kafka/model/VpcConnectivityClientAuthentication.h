/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/VpcConnectivitySasl.h>
#include <aws/kafka/model/VpcConnectivityTls.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Includes all client authentication information for VPC
   * connectivity.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnectivityClientAuthentication">AWS
   * API Reference</a></p>
   */
  class VpcConnectivityClientAuthentication
  {
  public:
    AWS_KAFKA_API VpcConnectivityClientAuthentication();
    AWS_KAFKA_API VpcConnectivityClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectivityClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>SASL authentication type details for VPC connectivity.</p>
     
     *    
     */
    inline const VpcConnectivitySasl& GetSasl() const{ return m_sasl; }
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }
    inline void SetSasl(const VpcConnectivitySasl& value) { m_saslHasBeenSet = true; m_sasl = value; }
    inline void SetSasl(VpcConnectivitySasl&& value) { m_saslHasBeenSet = true; m_sasl = std::move(value); }
    inline VpcConnectivityClientAuthentication& WithSasl(const VpcConnectivitySasl& value) { SetSasl(value); return *this;}
    inline VpcConnectivityClientAuthentication& WithSasl(VpcConnectivitySasl&& value) { SetSasl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>TLS authentication type details for VPC connectivity.</p>
      
     *   
     */
    inline const VpcConnectivityTls& GetTls() const{ return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    inline void SetTls(const VpcConnectivityTls& value) { m_tlsHasBeenSet = true; m_tls = value; }
    inline void SetTls(VpcConnectivityTls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }
    inline VpcConnectivityClientAuthentication& WithTls(const VpcConnectivityTls& value) { SetTls(value); return *this;}
    inline VpcConnectivityClientAuthentication& WithTls(VpcConnectivityTls&& value) { SetTls(std::move(value)); return *this;}
    ///@}
  private:

    VpcConnectivitySasl m_sasl;
    bool m_saslHasBeenSet = false;

    VpcConnectivityTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
