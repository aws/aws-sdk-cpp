/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ProcessorType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/ProcessorParameter.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes a data processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/Processor">AWS
   * API Reference</a></p>
   */
  class Processor
  {
  public:
    AWS_FIREHOSE_API Processor();
    AWS_FIREHOSE_API Processor(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Processor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of processor.</p>
     */
    inline const ProcessorType& GetType() const{ return m_type; }

    /**
     * <p>The type of processor.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of processor.</p>
     */
    inline void SetType(const ProcessorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of processor.</p>
     */
    inline void SetType(ProcessorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of processor.</p>
     */
    inline Processor& WithType(const ProcessorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of processor.</p>
     */
    inline Processor& WithType(ProcessorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The processor parameters.</p>
     */
    inline const Aws::Vector<ProcessorParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The processor parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The processor parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<ProcessorParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The processor parameters.</p>
     */
    inline void SetParameters(Aws::Vector<ProcessorParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& WithParameters(const Aws::Vector<ProcessorParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& WithParameters(Aws::Vector<ProcessorParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& AddParameters(const ProcessorParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The processor parameters.</p>
     */
    inline Processor& AddParameters(ProcessorParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    ProcessorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<ProcessorParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
