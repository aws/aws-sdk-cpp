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

  /**
   * 
            <p>Details for IAM access control.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Iam">AWS API
   * Reference</a></p>
   */
  class Iam
  {
  public:
    AWS_KAFKA_API Iam();
    AWS_KAFKA_API Iam(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Iam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * 
            <p>Indicates whether IAM access control is enabled.</p>
         
     */
    inline Iam& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
