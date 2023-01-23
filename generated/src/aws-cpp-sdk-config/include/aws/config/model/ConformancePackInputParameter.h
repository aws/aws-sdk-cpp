/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Input parameters in the form of key-value pairs for the conformance pack,
   * both of which you define. Keys can have a maximum character length of 255
   * characters, and values can have a maximum length of 4096
   * characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackInputParameter">AWS
   * API Reference</a></p>
   */
  class ConformancePackInputParameter
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackInputParameter();
    AWS_CONFIGSERVICE_API ConformancePackInputParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackInputParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline ConformancePackInputParameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline ConformancePackInputParameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair.</p>
     */
    inline ConformancePackInputParameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline ConformancePackInputParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline ConformancePackInputParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>Another part of the key-value pair. </p>
     */
    inline ConformancePackInputParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
