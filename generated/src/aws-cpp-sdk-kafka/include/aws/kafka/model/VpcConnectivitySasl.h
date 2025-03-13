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
    AWS_KAFKA_API VpcConnectivitySasl() = default;
    AWS_KAFKA_API VpcConnectivitySasl(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectivitySasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Details for SASL/SCRAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline const VpcConnectivityScram& GetScram() const { return m_scram; }
    inline bool ScramHasBeenSet() const { return m_scramHasBeenSet; }
    template<typename ScramT = VpcConnectivityScram>
    void SetScram(ScramT&& value) { m_scramHasBeenSet = true; m_scram = std::forward<ScramT>(value); }
    template<typename ScramT = VpcConnectivityScram>
    VpcConnectivitySasl& WithScram(ScramT&& value) { SetScram(std::forward<ScramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Details for SASL/IAM client authentication for VPC
     * connectivity.</p>
         
     */
    inline const VpcConnectivityIam& GetIam() const { return m_iam; }
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
    template<typename IamT = VpcConnectivityIam>
    void SetIam(IamT&& value) { m_iamHasBeenSet = true; m_iam = std::forward<IamT>(value); }
    template<typename IamT = VpcConnectivityIam>
    VpcConnectivitySasl& WithIam(IamT&& value) { SetIam(std::forward<IamT>(value)); return *this;}
    ///@}
  private:

    VpcConnectivityScram m_scram;
    bool m_scramHasBeenSet = false;

    VpcConnectivityIam m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
