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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>A rollback trigger AWS CloudFormation monitors during creation and updating
   * of stacks. If any of the alarms you specify goes to ALARM state during the stack
   * operation or within the specified monitoring period afterwards, CloudFormation
   * rolls back the entire stack operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackTrigger">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API RollbackTrigger
  {
  public:
    RollbackTrigger();
    RollbackTrigger(const Aws::Utils::Xml::XmlNode& xmlNode);
    RollbackTrigger& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackTrigger& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackTrigger& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rollback trigger.</p> <p>If a specified
     * trigger is missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackTrigger& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline RollbackTrigger& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline RollbackTrigger& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The resource type of the rollback trigger. Currently, <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-cw-alarm.html">AWS::CloudWatch::Alarm</a>
     * is the only supported resource type.</p>
     */
    inline RollbackTrigger& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
