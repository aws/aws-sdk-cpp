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
  class AWS_IOTEVENTS_API InputSummary
  {
  public:
    InputSummary();
    InputSummary(Aws::Utils::Json::JsonView jsonValue);
    InputSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the input.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the input.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the input.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the input.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the input.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the input.</p>
     */
    inline InputSummary& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the input.</p>
     */
    inline InputSummary& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the input.</p>
     */
    inline InputSummary& WithInputName(const char* value) { SetInputName(value); return *this;}


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
    inline InputSummary& WithInputDescription(const Aws::String& value) { SetInputDescription(value); return *this;}

    /**
     * <p>A brief description of the input.</p>
     */
    inline InputSummary& WithInputDescription(Aws::String&& value) { SetInputDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the input.</p>
     */
    inline InputSummary& WithInputDescription(const char* value) { SetInputDescription(value); return *this;}


    /**
     * <p>The ARN of the input.</p>
     */
    inline const Aws::String& GetInputArn() const{ return m_inputArn; }

    /**
     * <p>The ARN of the input.</p>
     */
    inline bool InputArnHasBeenSet() const { return m_inputArnHasBeenSet; }

    /**
     * <p>The ARN of the input.</p>
     */
    inline void SetInputArn(const Aws::String& value) { m_inputArnHasBeenSet = true; m_inputArn = value; }

    /**
     * <p>The ARN of the input.</p>
     */
    inline void SetInputArn(Aws::String&& value) { m_inputArnHasBeenSet = true; m_inputArn = std::move(value); }

    /**
     * <p>The ARN of the input.</p>
     */
    inline void SetInputArn(const char* value) { m_inputArnHasBeenSet = true; m_inputArn.assign(value); }

    /**
     * <p>The ARN of the input.</p>
     */
    inline InputSummary& WithInputArn(const Aws::String& value) { SetInputArn(value); return *this;}

    /**
     * <p>The ARN of the input.</p>
     */
    inline InputSummary& WithInputArn(Aws::String&& value) { SetInputArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the input.</p>
     */
    inline InputSummary& WithInputArn(const char* value) { SetInputArn(value); return *this;}


    /**
     * <p>The time the input was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the input was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the input was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the input was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the input was created.</p>
     */
    inline InputSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the input was created.</p>
     */
    inline InputSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the input was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the input was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the input was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the input was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the input was updated.</p>
     */
    inline InputSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the input was updated.</p>
     */
    inline InputSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the input.</p>
     */
    inline const InputStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the input.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the input.</p>
     */
    inline void SetStatus(const InputStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the input.</p>
     */
    inline void SetStatus(InputStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the input.</p>
     */
    inline InputSummary& WithStatus(const InputStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the input.</p>
     */
    inline InputSummary& WithStatus(InputStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet;

    Aws::String m_inputDescription;
    bool m_inputDescriptionHasBeenSet;

    Aws::String m_inputArn;
    bool m_inputArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    InputStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
