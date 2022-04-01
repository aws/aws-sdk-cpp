/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/SSMOutput.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Output from validating an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/AppValidationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API AppValidationOutput
  {
  public:
    AppValidationOutput();
    AppValidationOutput(Aws::Utils::Json::JsonView jsonValue);
    AppValidationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline const SSMOutput& GetSsmOutput() const{ return m_ssmOutput; }

    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline bool SsmOutputHasBeenSet() const { return m_ssmOutputHasBeenSet; }

    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline void SetSsmOutput(const SSMOutput& value) { m_ssmOutputHasBeenSet = true; m_ssmOutput = value; }

    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline void SetSsmOutput(SSMOutput&& value) { m_ssmOutputHasBeenSet = true; m_ssmOutput = std::move(value); }

    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline AppValidationOutput& WithSsmOutput(const SSMOutput& value) { SetSsmOutput(value); return *this;}

    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline AppValidationOutput& WithSsmOutput(SSMOutput&& value) { SetSsmOutput(std::move(value)); return *this;}

  private:

    SSMOutput m_ssmOutput;
    bool m_ssmOutputHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
