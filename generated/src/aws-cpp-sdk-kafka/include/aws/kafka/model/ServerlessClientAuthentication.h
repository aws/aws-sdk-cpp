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
    AWS_KAFKA_API ServerlessClientAuthentication() = default;
    AWS_KAFKA_API ServerlessClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ServerlessClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Details for ClientAuthentication using SASL.</p>
         
     */
    inline const ServerlessSasl& GetSasl() const { return m_sasl; }
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }
    template<typename SaslT = ServerlessSasl>
    void SetSasl(SaslT&& value) { m_saslHasBeenSet = true; m_sasl = std::forward<SaslT>(value); }
    template<typename SaslT = ServerlessSasl>
    ServerlessClientAuthentication& WithSasl(SaslT&& value) { SetSasl(std::forward<SaslT>(value)); return *this;}
    ///@}
  private:

    ServerlessSasl m_sasl;
    bool m_saslHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
