﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ProcessorType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/ProcessorParameter.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes a data processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/Processor">AWS
   * API Reference</a></p>
   */
  class AWS_FIREHOSE_API Processor
  {
  public:
    Processor();
    Processor(const Aws::Utils::Json::JsonValue& jsonValue);
    Processor& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of processor.</p>
     */
    inline const ProcessorType& GetType() const{ return m_type; }

    /**
     * <p>The type of processor.</p>
     */
    inline void SetType(const ProcessorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of processor.</p>
     */
    inline void SetType(ProcessorType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of processor.</p>
     */
    inline Processor& WithType(const ProcessorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of processor.</p>
     */
    inline Processor& WithType(ProcessorType&& value) { SetType(value); return *this;}

    /**
     * <p>The processor parameters.</p>
     */
    inline const Aws::Vector<ProcessorParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The processor parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<ProcessorParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The processor parameters.</p>
     */
    inline void SetParameters(Aws::Vector<ProcessorParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& WithParameters(const Aws::Vector<ProcessorParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& WithParameters(Aws::Vector<ProcessorParameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& AddParameters(const ProcessorParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& AddParameters(ProcessorParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

  private:
    ProcessorType m_type;
    bool m_typeHasBeenSet;
    Aws::Vector<ProcessorParameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
