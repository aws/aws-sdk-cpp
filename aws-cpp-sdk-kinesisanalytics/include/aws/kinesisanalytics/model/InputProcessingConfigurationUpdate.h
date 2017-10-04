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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessorUpdate.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes updates to an <a>InputProcessingConfiguration</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputProcessingConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API InputProcessingConfigurationUpdate
  {
  public:
    InputProcessingConfigurationUpdate();
    InputProcessingConfigurationUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    InputProcessingConfigurationUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides update information for an <a>InputLambdaProcessor</a>.</p>
     */
    inline const InputLambdaProcessorUpdate& GetInputLambdaProcessorUpdate() const{ return m_inputLambdaProcessorUpdate; }

    /**
     * <p>Provides update information for an <a>InputLambdaProcessor</a>.</p>
     */
    inline void SetInputLambdaProcessorUpdate(const InputLambdaProcessorUpdate& value) { m_inputLambdaProcessorUpdateHasBeenSet = true; m_inputLambdaProcessorUpdate = value; }

    /**
     * <p>Provides update information for an <a>InputLambdaProcessor</a>.</p>
     */
    inline void SetInputLambdaProcessorUpdate(InputLambdaProcessorUpdate&& value) { m_inputLambdaProcessorUpdateHasBeenSet = true; m_inputLambdaProcessorUpdate = std::move(value); }

    /**
     * <p>Provides update information for an <a>InputLambdaProcessor</a>.</p>
     */
    inline InputProcessingConfigurationUpdate& WithInputLambdaProcessorUpdate(const InputLambdaProcessorUpdate& value) { SetInputLambdaProcessorUpdate(value); return *this;}

    /**
     * <p>Provides update information for an <a>InputLambdaProcessor</a>.</p>
     */
    inline InputProcessingConfigurationUpdate& WithInputLambdaProcessorUpdate(InputLambdaProcessorUpdate&& value) { SetInputLambdaProcessorUpdate(std::move(value)); return *this;}

  private:

    InputLambdaProcessorUpdate m_inputLambdaProcessorUpdate;
    bool m_inputLambdaProcessorUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
