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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Inspector application. This data type is
   * used as the response element in the <a>DescribeAssessmentTargets</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentTarget">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentTarget
  {
  public:
    AssessmentTarget();
    AssessmentTarget(Aws::Utils::Json::JsonView jsonValue);
    AssessmentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Inspector assessment target.</p>
     */
    inline AssessmentTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline AssessmentTarget& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline AssessmentTarget& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is associated with the
     * assessment target.</p>
     */
    inline AssessmentTarget& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}


    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline AssessmentTarget& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the assessment target is created.</p>
     */
    inline AssessmentTarget& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline AssessmentTarget& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which <a>UpdateAssessmentTarget</a> is called.</p>
     */
    inline AssessmentTarget& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
