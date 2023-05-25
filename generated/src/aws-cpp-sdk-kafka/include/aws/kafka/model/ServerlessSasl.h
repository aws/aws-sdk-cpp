/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ServerlessSasl">AWS
   * API Reference</a></p>
   */
  class ServerlessSasl
  {
  public:
    AWS_KAFKA_API ServerlessSasl();
    AWS_KAFKA_API ServerlessSasl(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ServerlessSasl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ServerlessSasl& WithIam(const Iam& value) { SetIam(value); return *this;}

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline ServerlessSasl& WithIam(Iam&& value) { SetIam(std::move(value)); return *this;}

  private:

    Iam m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
