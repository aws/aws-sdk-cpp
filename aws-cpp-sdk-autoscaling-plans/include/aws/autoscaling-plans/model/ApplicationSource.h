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
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents an application source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ApplicationSource">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API ApplicationSource
  {
  public:
    ApplicationSource();
    ApplicationSource(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationSource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline const Aws::String& GetCloudFormationStackARN() const{ return m_cloudFormationStackARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline void SetCloudFormationStackARN(const Aws::String& value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline void SetCloudFormationStackARN(Aws::String&& value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline void SetCloudFormationStackARN(const char* value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline ApplicationSource& WithCloudFormationStackARN(const Aws::String& value) { SetCloudFormationStackARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline ApplicationSource& WithCloudFormationStackARN(Aws::String&& value) { SetCloudFormationStackARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a CloudFormation stack.</p>
     */
    inline ApplicationSource& WithCloudFormationStackARN(const char* value) { SetCloudFormationStackARN(value); return *this;}

  private:

    Aws::String m_cloudFormationStackARN;
    bool m_cloudFormationStackARNHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
