/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Scram.h>
#include <aws/kafka/model/Iam.h>
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
            <p>Details for client authentication using SASL.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Sasl">AWS API
   * Reference</a></p>
   */
  class Sasl
  {
  public:
    AWS_KAFKA_API Sasl();
    AWS_KAFKA_API Sasl(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Sasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline const Scram& GetScram() const{ return m_scram; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline bool ScramHasBeenSet() const { return m_scramHasBeenSet; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline void SetScram(const Scram& value) { m_scramHasBeenSet = true; m_scram = value; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline void SetScram(Scram&& value) { m_scramHasBeenSet = true; m_scram = std::move(value); }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline Sasl& WithScram(const Scram& value) { SetScram(value); return *this;}

    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline Sasl& WithScram(Scram&& value) { SetScram(std::move(value)); return *this;}


    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline const Iam& GetIam() const{ return m_iam; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline void SetIam(const Iam& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline void SetIam(Iam&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline Sasl& WithIam(const Iam& value) { SetIam(value); return *this;}

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline Sasl& WithIam(Iam&& value) { SetIam(std::move(value)); return *this;}

  private:

    Scram m_scram;
    bool m_scramHasBeenSet = false;

    Iam m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
