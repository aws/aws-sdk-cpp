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
    AWS_KAFKA_API Sasl() = default;
    AWS_KAFKA_API Sasl(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Sasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Details for SASL/SCRAM client authentication.</p>
         
     */
    inline const Scram& GetScram() const { return m_scram; }
    inline bool ScramHasBeenSet() const { return m_scramHasBeenSet; }
    template<typename ScramT = Scram>
    void SetScram(ScramT&& value) { m_scramHasBeenSet = true; m_scram = std::forward<ScramT>(value); }
    template<typename ScramT = Scram>
    Sasl& WithScram(ScramT&& value) { SetScram(std::forward<ScramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline const Iam& GetIam() const { return m_iam; }
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }
    template<typename IamT = Iam>
    void SetIam(IamT&& value) { m_iamHasBeenSet = true; m_iam = std::forward<IamT>(value); }
    template<typename IamT = Iam>
    Sasl& WithIam(IamT&& value) { SetIam(std::forward<IamT>(value)); return *this;}
    ///@}
  private:

    Scram m_scram;
    bool m_scramHasBeenSet = false;

    Iam m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
