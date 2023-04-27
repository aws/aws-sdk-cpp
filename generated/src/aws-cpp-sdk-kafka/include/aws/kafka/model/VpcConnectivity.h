/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/VpcConnectivityClientAuthentication.h>
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
   * VPC connectivity access control for brokers.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnectivity">AWS
   * API Reference</a></p>
   */
  class VpcConnectivity
  {
  public:
    AWS_KAFKA_API VpcConnectivity();
    AWS_KAFKA_API VpcConnectivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline const VpcConnectivityClientAuthentication& GetClientAuthentication() const{ return m_clientAuthentication; }

    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }

    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline void SetClientAuthentication(const VpcConnectivityClientAuthentication& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = value; }

    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline void SetClientAuthentication(VpcConnectivityClientAuthentication&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::move(value); }

    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivity& WithClientAuthentication(const VpcConnectivityClientAuthentication& value) { SetClientAuthentication(value); return *this;}

    /**
     * 
            <p>Includes all client authentication information for VPC
     * connectivity.</p>
         
     */
    inline VpcConnectivity& WithClientAuthentication(VpcConnectivityClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}

  private:

    VpcConnectivityClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
