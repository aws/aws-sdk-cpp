/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Sasl.h>
#include <aws/kafka/model/Tls.h>
#include <aws/kafka/model/Unauthenticated.h>
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
            <p>Includes all client authentication information.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClientAuthentication">AWS
   * API Reference</a></p>
   */
  class ClientAuthentication
  {
  public:
    AWS_KAFKA_API ClientAuthentication() = default;
    AWS_KAFKA_API ClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline const Sasl& GetSasl() const { return m_sasl; }
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }
    template<typename SaslT = Sasl>
    void SetSasl(SaslT&& value) { m_saslHasBeenSet = true; m_sasl = std::forward<SaslT>(value); }
    template<typename SaslT = Sasl>
    ClientAuthentication& WithSasl(SaslT&& value) { SetSasl(std::forward<SaslT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline const Tls& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = Tls>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = Tls>
    ClientAuthentication& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline const Unauthenticated& GetUnauthenticated() const { return m_unauthenticated; }
    inline bool UnauthenticatedHasBeenSet() const { return m_unauthenticatedHasBeenSet; }
    template<typename UnauthenticatedT = Unauthenticated>
    void SetUnauthenticated(UnauthenticatedT&& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = std::forward<UnauthenticatedT>(value); }
    template<typename UnauthenticatedT = Unauthenticated>
    ClientAuthentication& WithUnauthenticated(UnauthenticatedT&& value) { SetUnauthenticated(std::forward<UnauthenticatedT>(value)); return *this;}
    ///@}
  private:

    Sasl m_sasl;
    bool m_saslHasBeenSet = false;

    Tls m_tls;
    bool m_tlsHasBeenSet = false;

    Unauthenticated m_unauthenticated;
    bool m_unauthenticatedHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
