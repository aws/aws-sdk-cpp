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
  class AWS_KAFKA_API EncryptionInfo
  {
  public:
    EncryptionInfo();
    EncryptionInfo(Aws::Utils::Json::JsonView jsonValue);
    EncryptionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_encryptionAtRestHasBeenSet;

    EncryptionInTransit m_encryptionInTransit;
    bool m_encryptionInTransitHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
