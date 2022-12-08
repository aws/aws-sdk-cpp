/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>

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
   * <p>Amazon Web Services Systems Manager (SSM) specific remediation
   * controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SsmControls">AWS
   * API Reference</a></p>
   */
  class SsmControls
  {
  public:
    AWS_CONFIGSERVICE_API SsmControls();
    AWS_CONFIGSERVICE_API SsmControls(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API SsmControls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum percentage of remediation actions allowed to run in parallel on
     * the non-compliant resources for that specific rule. You can specify a
     * percentage, such as 10%. The default value is 10. </p>
     */
    inline int GetConcurrentExecutionRatePercentage() const{ return m_concurrentExecutionRatePercentage; }

    /**
     * <p>The maximum percentage of remediation actions allowed to run in parallel on
     * the non-compliant resources for that specific rule. You can specify a
     * percentage, such as 10%. The default value is 10. </p>
     */
    inline bool ConcurrentExecutionRatePercentageHasBeenSet() const { return m_concurrentExecutionRatePercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of remediation actions allowed to run in parallel on
     * the non-compliant resources for that specific rule. You can specify a
     * percentage, such as 10%. The default value is 10. </p>
     */
    inline void SetConcurrentExecutionRatePercentage(int value) { m_concurrentExecutionRatePercentageHasBeenSet = true; m_concurrentExecutionRatePercentage = value; }

    /**
     * <p>The maximum percentage of remediation actions allowed to run in parallel on
     * the non-compliant resources for that specific rule. You can specify a
     * percentage, such as 10%. The default value is 10. </p>
     */
    inline SsmControls& WithConcurrentExecutionRatePercentage(int value) { SetConcurrentExecutionRatePercentage(value); return *this;}


    /**
     * <p>The percentage of errors that are allowed before SSM stops running
     * automations on non-compliant resources for that specific rule. You can specify a
     * percentage of errors, for example 10%. If you do not specifiy a percentage, the
     * default is 50%. For example, if you set the ErrorPercentage to 40% for 10
     * non-compliant resources, then SSM stops running the automations when the fifth
     * error is received. </p>
     */
    inline int GetErrorPercentage() const{ return m_errorPercentage; }

    /**
     * <p>The percentage of errors that are allowed before SSM stops running
     * automations on non-compliant resources for that specific rule. You can specify a
     * percentage of errors, for example 10%. If you do not specifiy a percentage, the
     * default is 50%. For example, if you set the ErrorPercentage to 40% for 10
     * non-compliant resources, then SSM stops running the automations when the fifth
     * error is received. </p>
     */
    inline bool ErrorPercentageHasBeenSet() const { return m_errorPercentageHasBeenSet; }

    /**
     * <p>The percentage of errors that are allowed before SSM stops running
     * automations on non-compliant resources for that specific rule. You can specify a
     * percentage of errors, for example 10%. If you do not specifiy a percentage, the
     * default is 50%. For example, if you set the ErrorPercentage to 40% for 10
     * non-compliant resources, then SSM stops running the automations when the fifth
     * error is received. </p>
     */
    inline void SetErrorPercentage(int value) { m_errorPercentageHasBeenSet = true; m_errorPercentage = value; }

    /**
     * <p>The percentage of errors that are allowed before SSM stops running
     * automations on non-compliant resources for that specific rule. You can specify a
     * percentage of errors, for example 10%. If you do not specifiy a percentage, the
     * default is 50%. For example, if you set the ErrorPercentage to 40% for 10
     * non-compliant resources, then SSM stops running the automations when the fifth
     * error is received. </p>
     */
    inline SsmControls& WithErrorPercentage(int value) { SetErrorPercentage(value); return *this;}

  private:

    int m_concurrentExecutionRatePercentage;
    bool m_concurrentExecutionRatePercentageHasBeenSet = false;

    int m_errorPercentage;
    bool m_errorPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
