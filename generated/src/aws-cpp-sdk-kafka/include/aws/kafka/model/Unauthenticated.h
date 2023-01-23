/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>

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

  class Unauthenticated
  {
  public:
    AWS_KAFKA_API Unauthenticated();
    AWS_KAFKA_API Unauthenticated(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Unauthenticated& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Specifies whether you want to turn on or turn off
     * unauthenticated traffic to your cluster.</p>
         
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * 
            <p>Specifies whether you want to turn on or turn off
     * unauthenticated traffic to your cluster.</p>
         
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * 
            <p>Specifies whether you want to turn on or turn off
     * unauthenticated traffic to your cluster.</p>
         
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * 
            <p>Specifies whether you want to turn on or turn off
     * unauthenticated traffic to your cluster.</p>
         
     */
    inline Unauthenticated& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
