/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Bad request. The request is missing required parameters or has invalid
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_DLM_API InvalidRequestException() = default;
    AWS_DLM_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    InvalidRequestException& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredParameters() const { return m_requiredParameters; }
    inline bool RequiredParametersHasBeenSet() const { return m_requiredParametersHasBeenSet; }
    template<typename RequiredParametersT = Aws::Vector<Aws::String>>
    void SetRequiredParameters(RequiredParametersT&& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters = std::forward<RequiredParametersT>(value); }
    template<typename RequiredParametersT = Aws::Vector<Aws::String>>
    InvalidRequestException& WithRequiredParameters(RequiredParametersT&& value) { SetRequiredParameters(std::forward<RequiredParametersT>(value)); return *this;}
    template<typename RequiredParametersT = Aws::String>
    InvalidRequestException& AddRequiredParameters(RequiredParametersT&& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters.emplace_back(std::forward<RequiredParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMutuallyExclusiveParameters() const { return m_mutuallyExclusiveParameters; }
    inline bool MutuallyExclusiveParametersHasBeenSet() const { return m_mutuallyExclusiveParametersHasBeenSet; }
    template<typename MutuallyExclusiveParametersT = Aws::Vector<Aws::String>>
    void SetMutuallyExclusiveParameters(MutuallyExclusiveParametersT&& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters = std::forward<MutuallyExclusiveParametersT>(value); }
    template<typename MutuallyExclusiveParametersT = Aws::Vector<Aws::String>>
    InvalidRequestException& WithMutuallyExclusiveParameters(MutuallyExclusiveParametersT&& value) { SetMutuallyExclusiveParameters(std::forward<MutuallyExclusiveParametersT>(value)); return *this;}
    template<typename MutuallyExclusiveParametersT = Aws::String>
    InvalidRequestException& AddMutuallyExclusiveParameters(MutuallyExclusiveParametersT&& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters.emplace_back(std::forward<MutuallyExclusiveParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredParameters;
    bool m_requiredParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_mutuallyExclusiveParameters;
    bool m_mutuallyExclusiveParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
