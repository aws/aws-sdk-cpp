/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/EncryptionAtRest.h>
#include <aws/kafka/model/EncryptionInTransit.h>
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
            <p>Includes encryption-related information, such as the AWS KMS key
   * used for encrypting data at rest and whether you want MSK to encrypt your data
   * in transit.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/EncryptionInfo">AWS
   * API Reference</a></p>
   */
  class EncryptionInfo
  {
  public:
    AWS_KAFKA_API EncryptionInfo();
    AWS_KAFKA_API EncryptionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API EncryptionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline const EncryptionAtRest& GetEncryptionAtRest() const{ return m_encryptionAtRest; }

    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline bool EncryptionAtRestHasBeenSet() const { return m_encryptionAtRestHasBeenSet; }

    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline void SetEncryptionAtRest(const EncryptionAtRest& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = value; }

    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline void SetEncryptionAtRest(EncryptionAtRest&& value) { m_encryptionAtRestHasBeenSet = true; m_encryptionAtRest = std::move(value); }

    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline EncryptionInfo& WithEncryptionAtRest(const EncryptionAtRest& value) { SetEncryptionAtRest(value); return *this;}

    /**
     * 
            <p>The data-volume encryption details.</p>
         
     */
    inline EncryptionInfo& WithEncryptionAtRest(EncryptionAtRest&& value) { SetEncryptionAtRest(std::move(value)); return *this;}


    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline const EncryptionInTransit& GetEncryptionInTransit() const{ return m_encryptionInTransit; }

    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline bool EncryptionInTransitHasBeenSet() const { return m_encryptionInTransitHasBeenSet; }

    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline void SetEncryptionInTransit(const EncryptionInTransit& value) { m_encryptionInTransitHasBeenSet = true; m_encryptionInTransit = value; }

    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline void SetEncryptionInTransit(EncryptionInTransit&& value) { m_encryptionInTransitHasBeenSet = true; m_encryptionInTransit = std::move(value); }

    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline EncryptionInfo& WithEncryptionInTransit(const EncryptionInTransit& value) { SetEncryptionInTransit(value); return *this;}

    /**
     * 
            <p>The details for encryption in transit.</p>
         
     */
    inline EncryptionInfo& WithEncryptionInTransit(EncryptionInTransit&& value) { SetEncryptionInTransit(std::move(value)); return *this;}

  private:

    EncryptionAtRest m_encryptionAtRest;
    bool m_encryptionAtRestHasBeenSet = false;

    EncryptionInTransit m_encryptionInTransit;
    bool m_encryptionInTransitHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
