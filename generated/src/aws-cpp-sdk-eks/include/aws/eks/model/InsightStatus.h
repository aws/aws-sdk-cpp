/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/InsightStatusValue.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The status of the insight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightStatus">AWS
   * API Reference</a></p>
   */
  class InsightStatus
  {
  public:
    AWS_EKS_API InsightStatus();
    AWS_EKS_API InsightStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the resource.</p>
     */
    inline const InsightStatusValue& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the resource.</p>
     */
    inline void SetStatus(const InsightStatusValue& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the resource.</p>
     */
    inline void SetStatus(InsightStatusValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the resource.</p>
     */
    inline InsightStatus& WithStatus(const InsightStatusValue& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the resource.</p>
     */
    inline InsightStatus& WithStatus(InsightStatusValue&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline InsightStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline InsightStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Explanation on the reasoning for the status of the resource. </p>
     */
    inline InsightStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    InsightStatusValue m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
