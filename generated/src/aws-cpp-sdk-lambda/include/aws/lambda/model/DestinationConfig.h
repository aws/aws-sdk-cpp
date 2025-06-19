/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/OnSuccess.h>
#include <aws/lambda/model/OnFailure.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>A configuration object that specifies the destination of an event after
   * Lambda processes it. For more information, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async-retain-records.html#invocation-async-destinations">Adding
   * a destination</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DestinationConfig">AWS
   * API Reference</a></p>
   */
  class DestinationConfig
  {
  public:
    AWS_LAMBDA_API DestinationConfig() = default;
    AWS_LAMBDA_API DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination configuration for successful invocations. Not supported in
     * <code>CreateEventSourceMapping</code> or
     * <code>UpdateEventSourceMapping</code>.</p>
     */
    inline const OnSuccess& GetOnSuccess() const { return m_onSuccess; }
    inline bool OnSuccessHasBeenSet() const { return m_onSuccessHasBeenSet; }
    template<typename OnSuccessT = OnSuccess>
    void SetOnSuccess(OnSuccessT&& value) { m_onSuccessHasBeenSet = true; m_onSuccess = std::forward<OnSuccessT>(value); }
    template<typename OnSuccessT = OnSuccess>
    DestinationConfig& WithOnSuccess(OnSuccessT&& value) { SetOnSuccess(std::forward<OnSuccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination configuration for failed invocations.</p>
     */
    inline const OnFailure& GetOnFailure() const { return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    template<typename OnFailureT = OnFailure>
    void SetOnFailure(OnFailureT&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::forward<OnFailureT>(value); }
    template<typename OnFailureT = OnFailure>
    DestinationConfig& WithOnFailure(OnFailureT&& value) { SetOnFailure(std::forward<OnFailureT>(value)); return *this;}
    ///@}
  private:

    OnSuccess m_onSuccess;
    bool m_onSuccessHasBeenSet = false;

    OnFailure m_onFailure;
    bool m_onFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
