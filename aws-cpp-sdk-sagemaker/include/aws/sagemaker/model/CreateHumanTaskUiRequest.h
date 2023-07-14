/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UiTemplate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateHumanTaskUiRequest : public SageMakerRequest
  {
  public:
    CreateHumanTaskUiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHumanTaskUi"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const{ return m_humanTaskUiName; }

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline bool HumanTaskUiNameHasBeenSet() const { return m_humanTaskUiNameHasBeenSet; }

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline void SetHumanTaskUiName(const Aws::String& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = value; }

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline void SetHumanTaskUiName(Aws::String&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::move(value); }

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline void SetHumanTaskUiName(const char* value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName.assign(value); }

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline CreateHumanTaskUiRequest& WithHumanTaskUiName(const Aws::String& value) { SetHumanTaskUiName(value); return *this;}

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline CreateHumanTaskUiRequest& WithHumanTaskUiName(Aws::String&& value) { SetHumanTaskUiName(std::move(value)); return *this;}

    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline CreateHumanTaskUiRequest& WithHumanTaskUiName(const char* value) { SetHumanTaskUiName(value); return *this;}


    
    inline const UiTemplate& GetUiTemplate() const{ return m_uiTemplate; }

    
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }

    
    inline void SetUiTemplate(const UiTemplate& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = value; }

    
    inline void SetUiTemplate(UiTemplate&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::move(value); }

    
    inline CreateHumanTaskUiRequest& WithUiTemplate(const UiTemplate& value) { SetUiTemplate(value); return *this;}

    
    inline CreateHumanTaskUiRequest& WithUiTemplate(UiTemplate&& value) { SetUiTemplate(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline CreateHumanTaskUiRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline CreateHumanTaskUiRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline CreateHumanTaskUiRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline CreateHumanTaskUiRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet;

    UiTemplate m_uiTemplate;
    bool m_uiTemplateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
