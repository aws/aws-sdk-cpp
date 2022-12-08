/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ServerlessSasl.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ServerlessClientAuthentication">AWS
   * API Reference</a></p>
   */
  class ServerlessClientAuthentication
  {
  public:
    AWS_KAFKA_API ServerlessClientAuthentication();
    AWS_KAFKA_API ServerlessClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ServerlessClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline const ServerlessSasl& GetSasl() const{ return m_sasl; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline void SetSasl(const ServerlessSasl& value) { m_saslHasBeenSet = true; m_sasl = value; }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline void SetSasl(ServerlessSasl&& value) { m_saslHasBeenSet = true; m_sasl = std::move(value); }

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline ServerlessClientAuthentication& WithSasl(const ServerlessSasl& value) { SetSasl(value); return *this;}

    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline ServerlessClientAuthentication& WithSasl(ServerlessSasl&& value) { SetSasl(std::move(value)); return *this;}

  private:

    ServerlessSasl m_sasl;
    bool m_saslHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
