/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Scram.h>
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
  class AWS_KAFKA_API Sasl
  {
  public:
    Sasl();
    Sasl(Aws::Utils::Json::JsonView jsonValue);
    Sasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Scram m_scram;
    bool m_scramHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
