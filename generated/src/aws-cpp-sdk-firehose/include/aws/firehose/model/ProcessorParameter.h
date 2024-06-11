/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ProcessorParameterName.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the processor parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ProcessorParameter">AWS
   * API Reference</a></p>
   */
  class ProcessorParameter
  {
  public:
    AWS_FIREHOSE_API ProcessorParameter();
    AWS_FIREHOSE_API ProcessorParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ProcessorParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter. Currently the following default values are
     * supported: 3 for <code>NumberOfRetries</code> and 60 for the
     * <code>BufferIntervalInSeconds</code>. The <code>BufferSizeInMBs</code> ranges
     * between 0.2 MB and up to 3MB. The default buffering hint is 1MB for all
     * destinations, except Splunk. For Splunk, the default buffering hint is 256 KB.
     * </p>
     */
    inline const ProcessorParameterName& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const ProcessorParameterName& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(ProcessorParameterName&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline ProcessorParameter& WithParameterName(const ProcessorParameterName& value) { SetParameterName(value); return *this;}
    inline ProcessorParameter& WithParameterName(ProcessorParameterName&& value) { SetParameterName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }
    inline ProcessorParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}
    inline ProcessorParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}
    inline ProcessorParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}
    ///@}
  private:

    ProcessorParameterName m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
