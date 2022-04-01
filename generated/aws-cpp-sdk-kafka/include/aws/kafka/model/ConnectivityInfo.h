/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/PublicAccess.h>
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
            <p>Information about the broker access configuration.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API ConnectivityInfo
  {
  public:
    ConnectivityInfo();
    ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline const PublicAccess& GetPublicAccess() const{ return m_publicAccess; }

    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }

    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline void SetPublicAccess(const PublicAccess& value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }

    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline void SetPublicAccess(PublicAccess&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::move(value); }

    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline ConnectivityInfo& WithPublicAccess(const PublicAccess& value) { SetPublicAccess(value); return *this;}

    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline ConnectivityInfo& WithPublicAccess(PublicAccess&& value) { SetPublicAccess(std::move(value)); return *this;}

  private:

    PublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
