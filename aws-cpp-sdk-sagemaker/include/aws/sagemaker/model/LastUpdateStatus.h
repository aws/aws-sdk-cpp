/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LastUpdateStatusValue.h>
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
   * <p>A value that indicates whether the update was successful.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LastUpdateStatus">AWS
   * API Reference</a></p>
   */
  class LastUpdateStatus
  {
  public:
    AWS_SAGEMAKER_API LastUpdateStatus();
    AWS_SAGEMAKER_API LastUpdateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LastUpdateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline const LastUpdateStatusValue& GetStatus() const{ return m_status; }

    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline void SetStatus(const LastUpdateStatusValue& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline void SetStatus(LastUpdateStatusValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline LastUpdateStatus& WithStatus(const LastUpdateStatusValue& value) { SetStatus(value); return *this;}

    /**
     * <p>A value that indicates whether the update was made successful.</p>
     */
    inline LastUpdateStatus& WithStatus(LastUpdateStatusValue&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline LastUpdateStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline LastUpdateStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the update wasn't successful, indicates the reason why it failed.</p>
     */
    inline LastUpdateStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    LastUpdateStatusValue m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
