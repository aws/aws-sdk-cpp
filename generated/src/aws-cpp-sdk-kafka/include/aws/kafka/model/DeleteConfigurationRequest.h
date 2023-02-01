/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class DeleteConfigurationRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API DeleteConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfiguration"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
