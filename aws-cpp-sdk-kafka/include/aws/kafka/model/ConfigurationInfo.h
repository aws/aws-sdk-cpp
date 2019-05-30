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
#include <aws/core/utils/memory/stl/AWSString.h>
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
            <p>Specifies the configuration to use for the brokers.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API ConfigurationInfo
  {
  public:
    ConfigurationInfo();
    ConfigurationInfo(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline ConfigurationInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline ConfigurationInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>ARN of the configuration to use.</p>
         
     */
    inline ConfigurationInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The revision of the configuration to use.</p>
         
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * 
            <p>The revision of the configuration to use.</p>
         
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * 
            <p>The revision of the configuration to use.</p>
         
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * 
            <p>The revision of the configuration to use.</p>
         
     */
    inline ConfigurationInfo& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    long long m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
