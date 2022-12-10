/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrialComponentPrimaryStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The status of the trial component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentStatus">AWS
   * API Reference</a></p>
   */
  class TrialComponentStatus
  {
  public:
    AWS_SAGEMAKER_API TrialComponentStatus();
    AWS_SAGEMAKER_API TrialComponentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the trial component.</p>
     */
    inline const TrialComponentPrimaryStatus& GetPrimaryStatus() const{ return m_primaryStatus; }

    /**
     * <p>The status of the trial component.</p>
     */
    inline bool PrimaryStatusHasBeenSet() const { return m_primaryStatusHasBeenSet; }

    /**
     * <p>The status of the trial component.</p>
     */
    inline void SetPrimaryStatus(const TrialComponentPrimaryStatus& value) { m_primaryStatusHasBeenSet = true; m_primaryStatus = value; }

    /**
     * <p>The status of the trial component.</p>
     */
    inline void SetPrimaryStatus(TrialComponentPrimaryStatus&& value) { m_primaryStatusHasBeenSet = true; m_primaryStatus = std::move(value); }

    /**
     * <p>The status of the trial component.</p>
     */
    inline TrialComponentStatus& WithPrimaryStatus(const TrialComponentPrimaryStatus& value) { SetPrimaryStatus(value); return *this;}

    /**
     * <p>The status of the trial component.</p>
     */
    inline TrialComponentStatus& WithPrimaryStatus(TrialComponentPrimaryStatus&& value) { SetPrimaryStatus(std::move(value)); return *this;}


    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline TrialComponentStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline TrialComponentStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If the component failed, a message describing why.</p>
     */
    inline TrialComponentStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    TrialComponentPrimaryStatus m_primaryStatus;
    bool m_primaryStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
