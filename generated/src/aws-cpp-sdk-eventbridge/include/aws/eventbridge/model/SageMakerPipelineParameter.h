/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Name/Value pair of a parameter to start execution of a SageMaker Model
   * Building Pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/SageMakerPipelineParameter">AWS
   * API Reference</a></p>
   */
  class SageMakerPipelineParameter
  {
  public:
    AWS_EVENTBRIDGE_API SageMakerPipelineParameter();
    AWS_EVENTBRIDGE_API SageMakerPipelineParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API SageMakerPipelineParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Value of parameter to start execution of a SageMaker Model Building
     * Pipeline.</p>
     */
    inline SageMakerPipelineParameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
