/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/InputDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class CreateInputRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API CreateInputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInput"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name you want to give to the input.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    CreateInputRequest& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the input.</p>
     */
    inline const Aws::String& GetInputDescription() const { return m_inputDescription; }
    inline bool InputDescriptionHasBeenSet() const { return m_inputDescriptionHasBeenSet; }
    template<typename InputDescriptionT = Aws::String>
    void SetInputDescription(InputDescriptionT&& value) { m_inputDescriptionHasBeenSet = true; m_inputDescription = std::forward<InputDescriptionT>(value); }
    template<typename InputDescriptionT = Aws::String>
    CreateInputRequest& WithInputDescription(InputDescriptionT&& value) { SetInputDescription(std::forward<InputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the input.</p>
     */
    inline const InputDefinition& GetInputDefinition() const { return m_inputDefinition; }
    inline bool InputDefinitionHasBeenSet() const { return m_inputDefinitionHasBeenSet; }
    template<typename InputDefinitionT = InputDefinition>
    void SetInputDefinition(InputDefinitionT&& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = std::forward<InputDefinitionT>(value); }
    template<typename InputDefinitionT = InputDefinition>
    CreateInputRequest& WithInputDefinition(InputDefinitionT&& value) { SetInputDefinition(std::forward<InputDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the input.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInputRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInputRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_inputDescription;
    bool m_inputDescriptionHasBeenSet = false;

    InputDefinition m_inputDefinition;
    bool m_inputDefinitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
