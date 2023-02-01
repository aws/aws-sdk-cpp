/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>A skill group with attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SkillGroup">AWS
   * API Reference</a></p>
   */
  class SkillGroup
  {
  public:
    AWS_ALEXAFORBUSINESS_API SkillGroup();
    AWS_ALEXAFORBUSINESS_API SkillGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API SkillGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a skill group.</p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline bool SkillGroupArnHasBeenSet() const { return m_skillGroupArnHasBeenSet; }

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = value; }

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}


    /**
     * <p>The name of a skill group.</p>
     */
    inline const Aws::String& GetSkillGroupName() const{ return m_skillGroupName; }

    /**
     * <p>The name of a skill group.</p>
     */
    inline bool SkillGroupNameHasBeenSet() const { return m_skillGroupNameHasBeenSet; }

    /**
     * <p>The name of a skill group.</p>
     */
    inline void SetSkillGroupName(const Aws::String& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = value; }

    /**
     * <p>The name of a skill group.</p>
     */
    inline void SetSkillGroupName(Aws::String&& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = std::move(value); }

    /**
     * <p>The name of a skill group.</p>
     */
    inline void SetSkillGroupName(const char* value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName.assign(value); }

    /**
     * <p>The name of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupName(const Aws::String& value) { SetSkillGroupName(value); return *this;}

    /**
     * <p>The name of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupName(Aws::String&& value) { SetSkillGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a skill group.</p>
     */
    inline SkillGroup& WithSkillGroupName(const char* value) { SetSkillGroupName(value); return *this;}


    /**
     * <p>The description of a skill group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a skill group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a skill group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a skill group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a skill group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a skill group.</p>
     */
    inline SkillGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a skill group.</p>
     */
    inline SkillGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a skill group.</p>
     */
    inline SkillGroup& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_skillGroupArn;
    bool m_skillGroupArnHasBeenSet = false;

    Aws::String m_skillGroupName;
    bool m_skillGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
