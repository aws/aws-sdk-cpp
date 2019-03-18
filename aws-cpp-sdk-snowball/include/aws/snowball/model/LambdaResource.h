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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/EventTriggerDefinition.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Identifies </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/LambdaResource">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API LambdaResource
  {
  public:
    LambdaResource();
    LambdaResource(Aws::Utils::Json::JsonView jsonValue);
    LambdaResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline LambdaResource& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline LambdaResource& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that represents an AWS Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline LambdaResource& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}


    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline const Aws::Vector<EventTriggerDefinition>& GetEventTriggers() const{ return m_eventTriggers; }

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline bool EventTriggersHasBeenSet() const { return m_eventTriggersHasBeenSet; }

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline void SetEventTriggers(const Aws::Vector<EventTriggerDefinition>& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers = value; }

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline void SetEventTriggers(Aws::Vector<EventTriggerDefinition>&& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers = std::move(value); }

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline LambdaResource& WithEventTriggers(const Aws::Vector<EventTriggerDefinition>& value) { SetEventTriggers(value); return *this;}

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline LambdaResource& WithEventTriggers(Aws::Vector<EventTriggerDefinition>&& value) { SetEventTriggers(std::move(value)); return *this;}

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline LambdaResource& AddEventTriggers(const EventTriggerDefinition& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers.push_back(value); return *this; }

    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline LambdaResource& AddEventTriggers(EventTriggerDefinition&& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet;

    Aws::Vector<EventTriggerDefinition> m_eventTriggers;
    bool m_eventTriggersHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
