/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/VpcConnectivityScram.h>
#include <aws/kafka/model/VpcConnectivityIam.h>
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
            <p>Details for SASL client authentication for VPC
   * connectivity.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnectivitySasl">AWS
   * API Reference</a></p>
   */
  class VpcConnectivitySasl
  {
  public:
    AWS_KAFKA_API VpcConnectivitySasl();
    AWS_KAFKA_API VpcConnectivitySasl(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectivitySasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline const VpcConnectivityScram& GetScram() const{ return m_scram; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline bool ScramHasBeenSet() const { return m_scramHasBeenSet; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline void SetScram(const VpcConnectivityScram& value) { m_scramHasBeenSet = true; m_scram = value; }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline void SetScram(VpcConnectivityScram&& value) { m_scramHasBeenSet = true; m_scram = std::move(value); }

    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivitySasl& WithScram(const VpcConnectivityScram& value) { SetScram(value); return *this;}

    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivitySasl& WithScram(VpcConnectivityScram&& value) { SetScram(std::move(value)); return *this;}


    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline const VpcConnectivityIam& GetIam() const{ return m_iam; }

    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline void SetIam(const VpcConnectivityIam& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline void SetIam(VpcConnectivityIam&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivitySasl& WithIam(const VpcConnectivityIam& value) { SetIam(value); return *this;}

    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivitySasl& WithIam(VpcConnectivityIam&& value) { SetIam(std::move(value)); return *this;}

  private:

    VpcConnectivityScram m_scram;
    bool m_scramHasBeenSet = false;

    VpcConnectivityIam m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
