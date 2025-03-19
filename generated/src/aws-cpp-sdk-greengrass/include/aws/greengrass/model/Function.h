/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionConfiguration.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a Lambda function.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Function">AWS
   * API Reference</a></p>
   */
  class Function
  {
  public:
    AWS_GREENGRASS_API Function() = default;
    AWS_GREENGRASS_API Function(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Function& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Lambda function.
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    Function& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The configuration of the Lambda function.
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const { return m_functionConfiguration; }
    inline bool FunctionConfigurationHasBeenSet() const { return m_functionConfigurationHasBeenSet; }
    template<typename FunctionConfigurationT = FunctionConfiguration>
    void SetFunctionConfiguration(FunctionConfigurationT&& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = std::forward<FunctionConfigurationT>(value); }
    template<typename FunctionConfigurationT = FunctionConfiguration>
    Function& WithFunctionConfiguration(FunctionConfigurationT&& value) { SetFunctionConfiguration(std::forward<FunctionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Function& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    FunctionConfiguration m_functionConfiguration;
    bool m_functionConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
