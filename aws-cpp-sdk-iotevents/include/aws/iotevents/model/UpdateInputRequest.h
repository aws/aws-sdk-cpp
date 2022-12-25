/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/InputDefinition.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class UpdateInputRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API UpdateInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInput"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the input you want to update.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline UpdateInputRequest& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline UpdateInputRequest& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the input you want to update.</p>
     */
    inline UpdateInputRequest& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>A brief description of the input.</p>
     */
    inline const Aws::String& GetInputDescription() const{ return m_inputDescription; }

    /**
     * <p>A brief description of the input.</p>
     */
    inline bool InputDescriptionHasBeenSet() const { return m_inputDescriptionHasBeenSet; }

    /**
     * <p>A brief description of the input.</p>
     */
    inline void SetInputDescription(const Aws::String& value) { m_inputDescriptionHasBeenSet = true; m_inputDescription = value; }

    /**
     * <p>A brief description of the input.</p>
     */
    inline void SetInputDescription(Aws::String&& value) { m_inputDescriptionHasBeenSet = true; m_inputDescription = std::move(value); }

    /**
     * <p>A brief description of the input.</p>
     */
    inline void SetInputDescription(const char* value) { m_inputDescriptionHasBeenSet = true; m_inputDescription.assign(value); }

    /**
     * <p>A brief description of the input.</p>
     */
    inline UpdateInputRequest& WithInputDescription(const Aws::String& value) { SetInputDescription(value); return *this;}

    /**
     * <p>A brief description of the input.</p>
     */
    inline UpdateInputRequest& WithInputDescription(Aws::String&& value) { SetInputDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the input.</p>
     */
    inline UpdateInputRequest& WithInputDescription(const char* value) { SetInputDescription(value); return *this;}


    /**
     * <p>The definition of the input.</p>
     */
    inline const InputDefinition& GetInputDefinition() const{ return m_inputDefinition; }

    /**
     * <p>The definition of the input.</p>
     */
    inline bool InputDefinitionHasBeenSet() const { return m_inputDefinitionHasBeenSet; }

    /**
     * <p>The definition of the input.</p>
     */
    inline void SetInputDefinition(const InputDefinition& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = value; }

    /**
     * <p>The definition of the input.</p>
     */
    inline void SetInputDefinition(InputDefinition&& value) { m_inputDefinitionHasBeenSet = true; m_inputDefinition = std::move(value); }

    /**
     * <p>The definition of the input.</p>
     */
    inline UpdateInputRequest& WithInputDefinition(const InputDefinition& value) { SetInputDefinition(value); return *this;}

    /**
     * <p>The definition of the input.</p>
     */
    inline UpdateInputRequest& WithInputDefinition(InputDefinition&& value) { SetInputDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_inputDescription;
    bool m_inputDescriptionHasBeenSet = false;

    InputDefinition m_inputDefinition;
    bool m_inputDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
