/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KAFKA_API DescribeConfigurationRevisionRequest : public KafkaRequest
  {
  public:
    DescribeConfigurationRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRevision"; }

    Aws::String SerializePayload() const override;


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
    bool m_arnHasBeenSet;

    long long m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
