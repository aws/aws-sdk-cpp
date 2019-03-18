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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DetailedAlgorithmStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the overall status of an algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmStatusItem">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AlgorithmStatusItem
  {
  public:
    AlgorithmStatusItem();
    AlgorithmStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AlgorithmStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline AlgorithmStatusItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline AlgorithmStatusItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm for which the overall status is being reported.</p>
     */
    inline AlgorithmStatusItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status.</p>
     */
    inline const DetailedAlgorithmStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(const DetailedAlgorithmStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(DetailedAlgorithmStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status.</p>
     */
    inline AlgorithmStatusItem& WithStatus(const DetailedAlgorithmStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status.</p>
     */
    inline AlgorithmStatusItem& WithStatus(DetailedAlgorithmStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline AlgorithmStatusItem& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline AlgorithmStatusItem& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline AlgorithmStatusItem& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DetailedAlgorithmStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
