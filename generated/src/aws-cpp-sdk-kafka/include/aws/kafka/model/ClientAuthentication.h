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
    AWS_KAFKA_API ClientAuthentication();
    AWS_KAFKA_API ClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline const Sasl& GetSasl() const{ return m_sasl; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline void SetSasl(const Sasl& value) { m_saslHasBeenSet = true; m_sasl = value; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline void SetSasl(Sasl&& value) { m_saslHasBeenSet = true; m_sasl = std::move(value); }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline ClientAuthentication& WithSasl(const Sasl& value) { SetSasl(value); return *this;}

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline ClientAuthentication& WithSasl(Sasl&& value) { SetSasl(std::move(value)); return *this;}


    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline const Tls& GetTls() const{ return m_tls; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline void SetTls(const Tls& value) { m_tlsHasBeenSet = true; m_tls = value; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline void SetTls(Tls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline ClientAuthentication& WithTls(const Tls& value) { SetTls(value); return *this;}

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline ClientAuthentication& WithTls(Tls&& value) { SetTls(std::move(value)); return *this;}


    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline const Unauthenticated& GetUnauthenticated() const{ return m_unauthenticated; }

    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline bool UnauthenticatedHasBeenSet() const { return m_unauthenticatedHasBeenSet; }

    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline void SetUnauthenticated(const Unauthenticated& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = value; }

    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline void SetUnauthenticated(Unauthenticated&& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = std::move(value); }

    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline ClientAuthentication& WithUnauthenticated(const Unauthenticated& value) { SetUnauthenticated(value); return *this;}

    /**
     * 
            <p>Contains information about unauthenticated traffic to the
     * cluster.</p>
         
     */
    inline ClientAuthentication& WithUnauthenticated(Unauthenticated&& value) { SetUnauthenticated(std::move(value)); return *this;}

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
