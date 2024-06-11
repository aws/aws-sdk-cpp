/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>An individual DAX parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/ParameterNameValue">AWS
   * API Reference</a></p>
   */
  class ParameterNameValue
  {
  public:
    AWS_DAX_API ParameterNameValue();
    AWS_DAX_API ParameterNameValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API ParameterNameValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline ParameterNameValue& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline ParameterNameValue& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline ParameterNameValue& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }
    inline ParameterNameValue& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}
    inline ParameterNameValue& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}
    inline ParameterNameValue& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
