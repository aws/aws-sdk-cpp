/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Describes the reason for an activity that isn't scaled (<i>not scaled
   * activity</i>), in machine-readable format. For help interpreting the not scaled
   * reason details, see <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scaling-activities.html">Scaling
   * activities for Application Auto Scaling</a> in the <i>Application Auto Scaling
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/NotScaledReason">AWS
   * API Reference</a></p>
   */
  class NotScaledReason
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API NotScaledReason();
    AWS_APPLICATIONAUTOSCALING_API NotScaledReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API NotScaledReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A code that represents the reason for not scaling.</p> <p>Valid values:</p>
     * <ul> <li> <p>AutoScalingAnticipatedFlapping</p> </li> <li>
     * <p>TargetServicePutResourceAsUnscalable</p> </li> <li>
     * <p>AlreadyAtMaxCapacity</p> </li> <li> <p>AlreadyAtMinCapacity</p> </li> <li>
     * <p>AlreadyAtDesiredCapacity</p> </li> </ul>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline NotScaledReason& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline NotScaledReason& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline NotScaledReason& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline NotScaledReason& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline NotScaledReason& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current capacity.</p>
     */
    inline int GetCurrentCapacity() const{ return m_currentCapacity; }
    inline bool CurrentCapacityHasBeenSet() const { return m_currentCapacityHasBeenSet; }
    inline void SetCurrentCapacity(int value) { m_currentCapacityHasBeenSet = true; m_currentCapacity = value; }
    inline NotScaledReason& WithCurrentCapacity(int value) { SetCurrentCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    int m_currentCapacity;
    bool m_currentCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
