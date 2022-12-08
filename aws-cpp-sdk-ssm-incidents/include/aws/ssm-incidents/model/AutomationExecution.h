/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The Systems Manager automation document process to start as the runbook at
   * the beginning of the incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/AutomationExecution">AWS
   * API Reference</a></p>
   */
  class AutomationExecution
  {
  public:
    AWS_SSMINCIDENTS_API AutomationExecution();
    AWS_SSMINCIDENTS_API AutomationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API AutomationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline const Aws::String& GetSsmExecutionArn() const{ return m_ssmExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline bool SsmExecutionArnHasBeenSet() const { return m_ssmExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline void SetSsmExecutionArn(const Aws::String& value) { m_ssmExecutionArnHasBeenSet = true; m_ssmExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline void SetSsmExecutionArn(Aws::String&& value) { m_ssmExecutionArnHasBeenSet = true; m_ssmExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline void SetSsmExecutionArn(const char* value) { m_ssmExecutionArnHasBeenSet = true; m_ssmExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline AutomationExecution& WithSsmExecutionArn(const Aws::String& value) { SetSsmExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline AutomationExecution& WithSsmExecutionArn(Aws::String&& value) { SetSsmExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the automation process.</p>
     */
    inline AutomationExecution& WithSsmExecutionArn(const char* value) { SetSsmExecutionArn(value); return *this;}

  private:

    Aws::String m_ssmExecutionArn;
    bool m_ssmExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
