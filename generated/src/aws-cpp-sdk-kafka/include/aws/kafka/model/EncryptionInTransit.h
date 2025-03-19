/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClientBroker.h>
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
            <p>The settings for encrypting data in transit.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/EncryptionInTransit">AWS
   * API Reference</a></p>
   */
  class EncryptionInTransit
  {
  public:
    AWS_KAFKA_API EncryptionInTransit() = default;
    AWS_KAFKA_API EncryptionInTransit(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API EncryptionInTransit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Indicates the encryption setting for data in transit between
     * clients and brokers. The following are the possible values.</p>
            <p>

     * TLS means that client-broker communication is enabled with TLS only.</p>
       
     * <p>
               TLS_PLAINTEXT means that client-broker communication is
     * enabled for both TLS-encrypted, as well as plaintext data.</p>
            <p>
 
     * PLAINTEXT means that client-broker communication is enabled in plaintext
     * only.</p>
            <p>The default value is TLS_PLAINTEXT.</p>
         
     */
    inline ClientBroker GetClientBroker() const { return m_clientBroker; }
    inline bool ClientBrokerHasBeenSet() const { return m_clientBrokerHasBeenSet; }
    inline void SetClientBroker(ClientBroker value) { m_clientBrokerHasBeenSet = true; m_clientBroker = value; }
    inline EncryptionInTransit& WithClientBroker(ClientBroker value) { SetClientBroker(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>When set to true, it indicates that data communication among the
     * broker nodes of the cluster is encrypted. When set to false, the communication
     * happens in plaintext.</p>
            <p>The default value is true.</p>
        
     * 
     */
    inline bool GetInCluster() const { return m_inCluster; }
    inline bool InClusterHasBeenSet() const { return m_inClusterHasBeenSet; }
    inline void SetInCluster(bool value) { m_inClusterHasBeenSet = true; m_inCluster = value; }
    inline EncryptionInTransit& WithInCluster(bool value) { SetInCluster(value); return *this;}
    ///@}
  private:

    ClientBroker m_clientBroker{ClientBroker::NOT_SET};
    bool m_clientBrokerHasBeenSet = false;

    bool m_inCluster{false};
    bool m_inClusterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
