/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotevents/model/InputStatus.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information about the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/InputSummary">AWS
   * API Reference</a></p>
   */
  class InputSummary
  {
  public:
    AWS_IOTEVENTS_API InputSummary() = default;
    AWS_IOTEVENTS_API InputSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API InputSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the input.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    InputSummary& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
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
    InputSummary& WithInputDescription(InputDescriptionT&& value) { SetInputDescription(std::forward<InputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the input.</p>
     */
    inline const Aws::String& GetInputArn() const { return m_inputArn; }
    inline bool InputArnHasBeenSet() const { return m_inputArnHasBeenSet; }
    template<typename InputArnT = Aws::String>
    void SetInputArn(InputArnT&& value) { m_inputArnHasBeenSet = true; m_inputArn = std::forward<InputArnT>(value); }
    template<typename InputArnT = Aws::String>
    InputSummary& WithInputArn(InputArnT&& value) { SetInputArn(std::forward<InputArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the input was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    InputSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the input was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    InputSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the input.</p>
     */
    inline InputStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InputStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InputSummary& WithStatus(InputStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_inputDescription;
    bool m_inputDescriptionHasBeenSet = false;

    Aws::String m_inputArn;
    bool m_inputArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    InputStatus m_status{InputStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
