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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/SkillDetails.h>
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
   * <p>The detailed information about an Alexa skill.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SkillsStoreSkill">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API SkillsStoreSkill
  {
  public:
    SkillsStoreSkill();
    SkillsStoreSkill(Aws::Utils::Json::JsonView jsonValue);
    SkillsStoreSkill& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the skill.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The ARN of the skill.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The ARN of the skill.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The ARN of the skill.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The ARN of the skill.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The ARN of the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The ARN of the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillId(const char* value) { SetSkillId(value); return *this;}


    /**
     * <p>The name of the skill.</p>
     */
    inline const Aws::String& GetSkillName() const{ return m_skillName; }

    /**
     * <p>The name of the skill.</p>
     */
    inline bool SkillNameHasBeenSet() const { return m_skillNameHasBeenSet; }

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
    inline SkillsStoreSkill& WithSkillName(const Aws::String& value) { SetSkillName(value); return *this;}

    /**
     * <p>The name of the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillName(Aws::String&& value) { SetSkillName(std::move(value)); return *this;}

    /**
     * <p>The name of the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillName(const char* value) { SetSkillName(value); return *this;}


    /**
     * <p>Short description about the skill.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>Short description about the skill.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>Short description about the skill.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>Short description about the skill.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>Short description about the skill.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>Short description about the skill.</p>
     */
    inline SkillsStoreSkill& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>Short description about the skill.</p>
     */
    inline SkillsStoreSkill& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>Short description about the skill.</p>
     */
    inline SkillsStoreSkill& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline const Aws::String& GetIconUrl() const{ return m_iconUrl; }

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline void SetIconUrl(const Aws::String& value) { m_iconUrlHasBeenSet = true; m_iconUrl = value; }

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline void SetIconUrl(Aws::String&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::move(value); }

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline void SetIconUrl(const char* value) { m_iconUrlHasBeenSet = true; m_iconUrl.assign(value); }

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline SkillsStoreSkill& WithIconUrl(const Aws::String& value) { SetIconUrl(value); return *this;}

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline SkillsStoreSkill& WithIconUrl(Aws::String&& value) { SetIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL where the skill icon resides.</p>
     */
    inline SkillsStoreSkill& WithIconUrl(const char* value) { SetIconUrl(value); return *this;}


    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline SkillsStoreSkill& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline SkillsStoreSkill& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline SkillsStoreSkill& AddSampleUtterances(const Aws::String& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline SkillsStoreSkill& AddSampleUtterances(Aws::String&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }

    /**
     * <p>Sample utterances that interact with the skill.</p>
     */
    inline SkillsStoreSkill& AddSampleUtterances(const char* value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }


    /**
     * <p>Information about the skill.</p>
     */
    inline const SkillDetails& GetSkillDetails() const{ return m_skillDetails; }

    /**
     * <p>Information about the skill.</p>
     */
    inline bool SkillDetailsHasBeenSet() const { return m_skillDetailsHasBeenSet; }

    /**
     * <p>Information about the skill.</p>
     */
    inline void SetSkillDetails(const SkillDetails& value) { m_skillDetailsHasBeenSet = true; m_skillDetails = value; }

    /**
     * <p>Information about the skill.</p>
     */
    inline void SetSkillDetails(SkillDetails&& value) { m_skillDetailsHasBeenSet = true; m_skillDetails = std::move(value); }

    /**
     * <p>Information about the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillDetails(const SkillDetails& value) { SetSkillDetails(value); return *this;}

    /**
     * <p>Information about the skill.</p>
     */
    inline SkillsStoreSkill& WithSkillDetails(SkillDetails&& value) { SetSkillDetails(std::move(value)); return *this;}


    /**
     * <p>Linking support for a skill.</p>
     */
    inline bool GetSupportsLinking() const{ return m_supportsLinking; }

    /**
     * <p>Linking support for a skill.</p>
     */
    inline bool SupportsLinkingHasBeenSet() const { return m_supportsLinkingHasBeenSet; }

    /**
     * <p>Linking support for a skill.</p>
     */
    inline void SetSupportsLinking(bool value) { m_supportsLinkingHasBeenSet = true; m_supportsLinking = value; }

    /**
     * <p>Linking support for a skill.</p>
     */
    inline SkillsStoreSkill& WithSupportsLinking(bool value) { SetSupportsLinking(value); return *this;}

  private:

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;

    Aws::String m_skillName;
    bool m_skillNameHasBeenSet;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet;

    Aws::String m_iconUrl;
    bool m_iconUrlHasBeenSet;

    Aws::Vector<Aws::String> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet;

    SkillDetails m_skillDetails;
    bool m_skillDetailsHasBeenSet;

    bool m_supportsLinking;
    bool m_supportsLinkingHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
