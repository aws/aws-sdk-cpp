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
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The summary of skills.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SkillSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API SkillSummary
  {
  public:
    SkillSummary();
    SkillSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    SkillSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline SkillSummary& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline SkillSummary& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill summary.</p>
     */
    inline SkillSummary& WithSkillId(const char* value) { SetSkillId(value); return *this;}


    /**
     * <p>The name of the skill.</p>
     */
    inline const Aws::String& GetSkillName() const{ return m_skillName; }

    /**
     * <p>The name of the skill.</p>
     */
    inline void SetSkillName(const Aws::String& value) { m_skillNameHasBeenSet = true; m_skillName = value; }

    /**
     * <p>The name of the skill.</p>
     */
    inline void SetSkillName(Aws::String&& value) { m_skillNameHasBeenSet = true; m_skillName = std::move(value); }

    /**
     * <p>The name of the skill.</p>
     */
    inline void SetSkillName(const char* value) { m_skillNameHasBeenSet = true; m_skillName.assign(value); }

    /**
     * <p>The name of the skill.</p>
     */
    inline SkillSummary& WithSkillName(const Aws::String& value) { SetSkillName(value); return *this;}

    /**
     * <p>The name of the skill.</p>
     */
    inline SkillSummary& WithSkillName(Aws::String&& value) { SetSkillName(std::move(value)); return *this;}

    /**
     * <p>The name of the skill.</p>
     */
    inline SkillSummary& WithSkillName(const char* value) { SetSkillName(value); return *this;}


    /**
     * <p>Linking support for a skill.</p>
     */
    inline bool GetSupportsLinking() const{ return m_supportsLinking; }

    /**
     * <p>Linking support for a skill.</p>
     */
    inline void SetSupportsLinking(bool value) { m_supportsLinkingHasBeenSet = true; m_supportsLinking = value; }

    /**
     * <p>Linking support for a skill.</p>
     */
    inline SkillSummary& WithSupportsLinking(bool value) { SetSupportsLinking(value); return *this;}

  private:

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;

    Aws::String m_skillName;
    bool m_skillNameHasBeenSet;

    bool m_supportsLinking;
    bool m_supportsLinkingHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
