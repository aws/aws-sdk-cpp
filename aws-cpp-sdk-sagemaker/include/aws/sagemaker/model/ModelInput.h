/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Input object for the model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelInput">AWS
   * API Reference</a></p>
   */
  class ModelInput
  {
  public:
    AWS_SAGEMAKER_API ModelInput();
    AWS_SAGEMAKER_API ModelInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input configuration object for the model.</p>
     */
    inline const Aws::String& GetDataInputConfig() const{ return m_dataInputConfig; }

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline bool DataInputConfigHasBeenSet() const { return m_dataInputConfigHasBeenSet; }

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline void SetDataInputConfig(const Aws::String& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = value; }

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline void SetDataInputConfig(Aws::String&& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = std::move(value); }

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline void SetDataInputConfig(const char* value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig.assign(value); }

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline ModelInput& WithDataInputConfig(const Aws::String& value) { SetDataInputConfig(value); return *this;}

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline ModelInput& WithDataInputConfig(Aws::String&& value) { SetDataInputConfig(std::move(value)); return *this;}

    /**
     * <p>The input configuration object for the model.</p>
     */
    inline ModelInput& WithDataInputConfig(const char* value) { SetDataInputConfig(value); return *this;}

  private:

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
