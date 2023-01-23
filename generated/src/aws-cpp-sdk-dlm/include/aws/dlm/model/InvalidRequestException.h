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
    AWS_DLM_API InvalidRequestException();
    AWS_DLM_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidRequestException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidRequestException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline InvalidRequestException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline InvalidRequestException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredParameters() const{ return m_requiredParameters; }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline bool RequiredParametersHasBeenSet() const { return m_requiredParametersHasBeenSet; }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline void SetRequiredParameters(const Aws::Vector<Aws::String>& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters = value; }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline void SetRequiredParameters(Aws::Vector<Aws::String>&& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters = std::move(value); }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline InvalidRequestException& WithRequiredParameters(const Aws::Vector<Aws::String>& value) { SetRequiredParameters(value); return *this;}

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline InvalidRequestException& WithRequiredParameters(Aws::Vector<Aws::String>&& value) { SetRequiredParameters(std::move(value)); return *this;}

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline InvalidRequestException& AddRequiredParameters(const Aws::String& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters.push_back(value); return *this; }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline InvalidRequestException& AddRequiredParameters(Aws::String&& value) { m_requiredParametersHasBeenSet = true; m_requiredParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>The request omitted one or more required parameters.</p>
     */
    inline InvalidRequestException& AddRequiredParameters(const char* value) { m_requiredParametersHasBeenSet = true; m_requiredParameters.push_back(value); return *this; }


    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMutuallyExclusiveParameters() const{ return m_mutuallyExclusiveParameters; }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline bool MutuallyExclusiveParametersHasBeenSet() const { return m_mutuallyExclusiveParametersHasBeenSet; }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline void SetMutuallyExclusiveParameters(const Aws::Vector<Aws::String>& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters = value; }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline void SetMutuallyExclusiveParameters(Aws::Vector<Aws::String>&& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters = std::move(value); }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline InvalidRequestException& WithMutuallyExclusiveParameters(const Aws::Vector<Aws::String>& value) { SetMutuallyExclusiveParameters(value); return *this;}

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline InvalidRequestException& WithMutuallyExclusiveParameters(Aws::Vector<Aws::String>&& value) { SetMutuallyExclusiveParameters(std::move(value)); return *this;}

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline InvalidRequestException& AddMutuallyExclusiveParameters(const Aws::String& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters.push_back(value); return *this; }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline InvalidRequestException& AddMutuallyExclusiveParameters(Aws::String&& value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>The request included parameters that cannot be provided together.</p>
     */
    inline InvalidRequestException& AddMutuallyExclusiveParameters(const char* value) { m_mutuallyExclusiveParametersHasBeenSet = true; m_mutuallyExclusiveParameters.push_back(value); return *this; }

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
