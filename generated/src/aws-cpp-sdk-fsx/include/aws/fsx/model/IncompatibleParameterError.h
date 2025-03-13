/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The error returned when a second request is received with the same client
   * request token but different parameters settings. A client request token should
   * always uniquely identify a single request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/IncompatibleParameterError">AWS
   * API Reference</a></p>
   */
  class IncompatibleParameterError
  {
  public:
    AWS_FSX_API IncompatibleParameterError() = default;
    AWS_FSX_API IncompatibleParameterError(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API IncompatibleParameterError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline const Aws::String& GetParameter() const { return m_parameter; }
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }
    template<typename ParameterT = Aws::String>
    void SetParameter(ParameterT&& value) { m_parameterHasBeenSet = true; m_parameter = std::forward<ParameterT>(value); }
    template<typename ParameterT = Aws::String>
    IncompatibleParameterError& WithParameter(ParameterT&& value) { SetParameter(std::forward<ParameterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    IncompatibleParameterError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
