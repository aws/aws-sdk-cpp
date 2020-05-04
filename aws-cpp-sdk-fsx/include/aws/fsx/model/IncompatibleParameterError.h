/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_FSX_API IncompatibleParameterError
  {
  public:
    IncompatibleParameterError();
    IncompatibleParameterError(Aws::Utils::Json::JsonView jsonValue);
    IncompatibleParameterError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline const Aws::String& GetParameter() const{ return m_parameter; }

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline void SetParameter(const Aws::String& value) { m_parameterHasBeenSet = true; m_parameter = value; }

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline void SetParameter(Aws::String&& value) { m_parameterHasBeenSet = true; m_parameter = std::move(value); }

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline void SetParameter(const char* value) { m_parameterHasBeenSet = true; m_parameter.assign(value); }

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline IncompatibleParameterError& WithParameter(const Aws::String& value) { SetParameter(value); return *this;}

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline IncompatibleParameterError& WithParameter(Aws::String&& value) { SetParameter(std::move(value)); return *this;}

    /**
     * <p>A parameter that is incompatible with the earlier request.</p>
     */
    inline IncompatibleParameterError& WithParameter(const char* value) { SetParameter(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline IncompatibleParameterError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline IncompatibleParameterError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline IncompatibleParameterError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_parameter;
    bool m_parameterHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
