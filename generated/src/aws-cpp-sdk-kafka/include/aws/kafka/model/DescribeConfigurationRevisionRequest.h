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
  class DescribeConfigurationRevisionRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API DescribeConfigurationRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRevision"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline DescribeConfigurationRevisionRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline DescribeConfigurationRevisionRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration and all of its revisions.</p>
         
     */
    inline DescribeConfigurationRevisionRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>A string that uniquely identifies a revision of an MSK
     * configuration.</p>
         
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * 
            <p>A string that uniquely identifies a revision of an MSK
     * configuration.</p>
         
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * 
            <p>A string that uniquely identifies a revision of an MSK
     * configuration.</p>
         
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * 
            <p>A string that uniquely identifies a revision of an MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationRevisionRequest& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
