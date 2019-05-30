/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KAFKA_API EncryptionInTransit
  {
  public:
    EncryptionInTransit();
    EncryptionInTransit(Aws::Utils::Json::JsonView jsonValue);
    EncryptionInTransit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const ClientBroker& GetClientBroker() const{ return m_clientBroker; }

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
    inline bool ClientBrokerHasBeenSet() const { return m_clientBrokerHasBeenSet; }

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
    inline void SetClientBroker(const ClientBroker& value) { m_clientBrokerHasBeenSet = true; m_clientBroker = value; }

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
    inline void SetClientBroker(ClientBroker&& value) { m_clientBrokerHasBeenSet = true; m_clientBroker = std::move(value); }

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
    inline EncryptionInTransit& WithClientBroker(const ClientBroker& value) { SetClientBroker(value); return *this;}

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
    inline EncryptionInTransit& WithClientBroker(ClientBroker&& value) { SetClientBroker(std::move(value)); return *this;}


    /**
     * 
            <p>When set to true, it indicates that data communication among the
     * broker nodes of the cluster is encrypted. When set to false, the communication
     * happens in plaintext.</p>
            <p>The default value is true.</p>
        
     * 
     */
    inline bool GetInCluster() const{ return m_inCluster; }

    /**
     * 
            <p>When set to true, it indicates that data communication among the
     * broker nodes of the cluster is encrypted. When set to false, the communication
     * happens in plaintext.</p>
            <p>The default value is true.</p>
        
     * 
     */
    inline bool InClusterHasBeenSet() const { return m_inClusterHasBeenSet; }

    /**
     * 
            <p>When set to true, it indicates that data communication among the
     * broker nodes of the cluster is encrypted. When set to false, the communication
     * happens in plaintext.</p>
            <p>The default value is true.</p>
        
     * 
     */
    inline void SetInCluster(bool value) { m_inClusterHasBeenSet = true; m_inCluster = value; }

    /**
     * 
            <p>When set to true, it indicates that data communication among the
     * broker nodes of the cluster is encrypted. When set to false, the communication
     * happens in plaintext.</p>
            <p>The default value is true.</p>
        
     * 
     */
    inline EncryptionInTransit& WithInCluster(bool value) { SetInCluster(value); return *this;}

  private:

    ClientBroker m_clientBroker;
    bool m_clientBrokerHasBeenSet;

    bool m_inCluster;
    bool m_inClusterHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
