/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Information about the service deployment rollback.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Rollback">AWS API
   * Reference</a></p>
   */
  class Rollback
  {
  public:
    AWS_ECS_API Rollback() = default;
    AWS_ECS_API Rollback(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Rollback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason the rollback happened. For example, the circuit breaker initiated
     * the rollback operation.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Rollback& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time time that the rollback started. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    Rollback& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service revision deployed as part of the rollback.</p>
     */
    inline const Aws::String& GetServiceRevisionArn() const { return m_serviceRevisionArn; }
    inline bool ServiceRevisionArnHasBeenSet() const { return m_serviceRevisionArnHasBeenSet; }
    template<typename ServiceRevisionArnT = Aws::String>
    void SetServiceRevisionArn(ServiceRevisionArnT&& value) { m_serviceRevisionArnHasBeenSet = true; m_serviceRevisionArn = std::forward<ServiceRevisionArnT>(value); }
    template<typename ServiceRevisionArnT = Aws::String>
    Rollback& WithServiceRevisionArn(ServiceRevisionArnT&& value) { SetServiceRevisionArn(std::forward<ServiceRevisionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_serviceRevisionArn;
    bool m_serviceRevisionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
