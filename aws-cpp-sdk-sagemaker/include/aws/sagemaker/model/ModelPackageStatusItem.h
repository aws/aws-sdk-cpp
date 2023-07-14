﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DetailedModelPackageStatus.h>
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
   * <p>Represents the overall status of a model package.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageStatusItem">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelPackageStatusItem
  {
  public:
    ModelPackageStatusItem();
    ModelPackageStatusItem(Aws::Utils::Json::JsonView jsonValue);
    ModelPackageStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline ModelPackageStatusItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline ModelPackageStatusItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the model package for which the overall status is being
     * reported.</p>
     */
    inline ModelPackageStatusItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status.</p>
     */
    inline const DetailedModelPackageStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(const DetailedModelPackageStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(DetailedModelPackageStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status.</p>
     */
    inline ModelPackageStatusItem& WithStatus(const DetailedModelPackageStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status.</p>
     */
    inline ModelPackageStatusItem& WithStatus(DetailedModelPackageStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ModelPackageStatusItem& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline ModelPackageStatusItem& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>if the overall status is <code>Failed</code>, the reason for the failure.</p>
     */
    inline ModelPackageStatusItem& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DetailedModelPackageStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
