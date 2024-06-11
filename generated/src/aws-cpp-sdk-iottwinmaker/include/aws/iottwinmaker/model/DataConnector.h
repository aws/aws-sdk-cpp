/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/LambdaFunction.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The data connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DataConnector">AWS
   * API Reference</a></p>
   */
  class DataConnector
  {
  public:
    AWS_IOTTWINMAKER_API DataConnector();
    AWS_IOTTWINMAKER_API DataConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DataConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lambda function associated with this data connector.</p>
     */
    inline const LambdaFunction& GetLambda() const{ return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(const LambdaFunction& value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline void SetLambda(LambdaFunction&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }
    inline DataConnector& WithLambda(const LambdaFunction& value) { SetLambda(value); return *this;}
    inline DataConnector& WithLambda(LambdaFunction&& value) { SetLambda(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the data connector is native to IoT
     * TwinMaker.</p>
     */
    inline bool GetIsNative() const{ return m_isNative; }
    inline bool IsNativeHasBeenSet() const { return m_isNativeHasBeenSet; }
    inline void SetIsNative(bool value) { m_isNativeHasBeenSet = true; m_isNative = value; }
    inline DataConnector& WithIsNative(bool value) { SetIsNative(value); return *this;}
    ///@}
  private:

    LambdaFunction m_lambda;
    bool m_lambdaHasBeenSet = false;

    bool m_isNative;
    bool m_isNativeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
