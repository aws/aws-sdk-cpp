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
    AWS_IOTEVENTS_API CreateInputRequest();

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
    inline const Aws::String& GetInputName() const{ return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }
    inline CreateInputRequest& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}
    inline CreateInputRequest& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}
    inline CreateInputRequest& WithInputName(const char* value) { SetInputName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the input.</p>
     */
    inline const Aws::String& GetInputDescription() const{ return m_inputDescription; }
    inline bool InputDescriptionHasBeenSet() const { return m_inputDescriptionHasBeenSet; }
    inline void SetInputDescription(const Aws::String& value) { m_inputDescriptionHasBeenSet = true; m_inputDescription = value; }
    inline void SetInputDescription(Aws::String&& value) { m_inputDescriptionHasBeenSet = true; m_inputDescription = std::move(value); }
    inline void SetInputDescription(const char* value) { m_inputDescriptionHasBeenSet = true; m_inputDescription.assign(value); }
    inline CreateInputRequest& WithInputDescription(const Aws::String& value) { SetInputDescription(value); return *this;}
    inline CreateInputRequest& WithInputDescription(Aws::String&& value) { SetInputDescription(std::move(value)); return *this;}
    inline CreateInputRequest& WithInputDescription(const char* value) { SetInputDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the input.</p>
     */
    inline const InputDefinition& GetInputDefinition() const{ return m_inputDefinition; }
    inline bool InputDefinitionHasBeenSet() const { return m_inputDefinitionHasBeenSet; }
    inline void SetInputDefinition(const InputDefinition& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = value; }
    inline void SetInputDefinition(InputDefinition&& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = std::move(value); }
    inline CreateInputRequest& WithInputDefinition(const InputDefinition& value) { SetInputDefinition(value); return *this;}
    inline CreateInputRequest& WithInputDefinition(InputDefinition&& value) { SetInputDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the input.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInputRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInputRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInputRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInputRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
