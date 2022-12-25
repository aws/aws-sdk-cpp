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
   * <p>Specifies how to generate the endpoint name for an automatic one-click
   * Autopilot model deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDeployConfig">AWS
   * API Reference</a></p>
   */
  class ModelDeployConfig
  {
  public:
    AWS_SAGEMAKER_API ModelDeployConfig();
    AWS_SAGEMAKER_API ModelDeployConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDeployConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set to <code>True</code> to automatically generate an endpoint name for a
     * one-click Autopilot model deployment; set to <code>False</code> otherwise. The
     * default value is <code>False</code>.</p>  <p>If you set
     * <code>AutoGenerateEndpointName</code> to <code>True</code>, do not specify the
     * <code>EndpointName</code>; otherwise a 400 error is thrown.</p> 
     */
    inline bool GetAutoGenerateEndpointName() const{ return m_autoGenerateEndpointName; }

    /**
     * <p>Set to <code>True</code> to automatically generate an endpoint name for a
     * one-click Autopilot model deployment; set to <code>False</code> otherwise. The
     * default value is <code>False</code>.</p>  <p>If you set
     * <code>AutoGenerateEndpointName</code> to <code>True</code>, do not specify the
     * <code>EndpointName</code>; otherwise a 400 error is thrown.</p> 
     */
    inline bool AutoGenerateEndpointNameHasBeenSet() const { return m_autoGenerateEndpointNameHasBeenSet; }

    /**
     * <p>Set to <code>True</code> to automatically generate an endpoint name for a
     * one-click Autopilot model deployment; set to <code>False</code> otherwise. The
     * default value is <code>False</code>.</p>  <p>If you set
     * <code>AutoGenerateEndpointName</code> to <code>True</code>, do not specify the
     * <code>EndpointName</code>; otherwise a 400 error is thrown.</p> 
     */
    inline void SetAutoGenerateEndpointName(bool value) { m_autoGenerateEndpointNameHasBeenSet = true; m_autoGenerateEndpointName = value; }

    /**
     * <p>Set to <code>True</code> to automatically generate an endpoint name for a
     * one-click Autopilot model deployment; set to <code>False</code> otherwise. The
     * default value is <code>False</code>.</p>  <p>If you set
     * <code>AutoGenerateEndpointName</code> to <code>True</code>, do not specify the
     * <code>EndpointName</code>; otherwise a 400 error is thrown.</p> 
     */
    inline ModelDeployConfig& WithAutoGenerateEndpointName(bool value) { SetAutoGenerateEndpointName(value); return *this;}


    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline ModelDeployConfig& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline ModelDeployConfig& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>Specifies the endpoint name to use for a one-click Autopilot model deployment
     * if the endpoint name is not generated automatically.</p>  <p>Specify the
     * <code>EndpointName</code> if and only if you set
     * <code>AutoGenerateEndpointName</code> to <code>False</code>; otherwise a 400
     * error is thrown.</p> 
     */
    inline ModelDeployConfig& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}

  private:

    bool m_autoGenerateEndpointName;
    bool m_autoGenerateEndpointNameHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
