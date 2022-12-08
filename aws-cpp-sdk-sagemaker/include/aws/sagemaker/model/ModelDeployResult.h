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
   * <p>Provides information about the endpoint of the model
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDeployResult">AWS
   * API Reference</a></p>
   */
  class ModelDeployResult
  {
  public:
    AWS_SAGEMAKER_API ModelDeployResult();
    AWS_SAGEMAKER_API ModelDeployResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDeployResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline ModelDeployResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline ModelDeployResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint to which the model has been deployed.</p> 
     * <p>If model deployment fails, this field is omitted from the response.</p>
     * 
     */
    inline ModelDeployResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
