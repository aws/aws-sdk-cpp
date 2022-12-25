/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Provides details in the event of a failed flow, including the failure count
   * and the related error messages. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ErrorInfo">AWS
   * API Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_APPFLOW_API ErrorInfo();
    AWS_APPFLOW_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the failure count for the attempted flow. </p>
     */
    inline long long GetPutFailuresCount() const{ return m_putFailuresCount; }

    /**
     * <p> Specifies the failure count for the attempted flow. </p>
     */
    inline bool PutFailuresCountHasBeenSet() const { return m_putFailuresCountHasBeenSet; }

    /**
     * <p> Specifies the failure count for the attempted flow. </p>
     */
    inline void SetPutFailuresCount(long long value) { m_putFailuresCountHasBeenSet = true; m_putFailuresCount = value; }

    /**
     * <p> Specifies the failure count for the attempted flow. </p>
     */
    inline ErrorInfo& WithPutFailuresCount(long long value) { SetPutFailuresCount(value); return *this;}


    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline const Aws::String& GetExecutionMessage() const{ return m_executionMessage; }

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline bool ExecutionMessageHasBeenSet() const { return m_executionMessageHasBeenSet; }

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetExecutionMessage(const Aws::String& value) { m_executionMessageHasBeenSet = true; m_executionMessage = value; }

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetExecutionMessage(Aws::String&& value) { m_executionMessageHasBeenSet = true; m_executionMessage = std::move(value); }

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline void SetExecutionMessage(const char* value) { m_executionMessageHasBeenSet = true; m_executionMessage.assign(value); }

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithExecutionMessage(const Aws::String& value) { SetExecutionMessage(value); return *this;}

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithExecutionMessage(Aws::String&& value) { SetExecutionMessage(std::move(value)); return *this;}

    /**
     * <p> Specifies the error message that appears if a flow fails. </p>
     */
    inline ErrorInfo& WithExecutionMessage(const char* value) { SetExecutionMessage(value); return *this;}

  private:

    long long m_putFailuresCount;
    bool m_putFailuresCountHasBeenSet = false;

    Aws::String m_executionMessage;
    bool m_executionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
