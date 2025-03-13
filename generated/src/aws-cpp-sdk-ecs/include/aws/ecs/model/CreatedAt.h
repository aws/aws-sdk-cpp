/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
   * <p>The optional filter to narrow the <code>ListServiceDeployment</code>
   * results.</p> <p> If you do not specify a value, service deployments that were
   * created before the current time are included in the result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreatedAt">AWS API
   * Reference</a></p>
   */
  class CreatedAt
  {
  public:
    AWS_ECS_API CreatedAt() = default;
    AWS_ECS_API CreatedAt(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API CreatedAt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include service deployments in the result that were created before this time.
     * The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetBefore() const { return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    template<typename BeforeT = Aws::Utils::DateTime>
    void SetBefore(BeforeT&& value) { m_beforeHasBeenSet = true; m_before = std::forward<BeforeT>(value); }
    template<typename BeforeT = Aws::Utils::DateTime>
    CreatedAt& WithBefore(BeforeT&& value) { SetBefore(std::forward<BeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include service deployments in the result that were created after this time.
     * The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetAfter() const { return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    template<typename AfterT = Aws::Utils::DateTime>
    void SetAfter(AfterT&& value) { m_afterHasBeenSet = true; m_after = std::forward<AfterT>(value); }
    template<typename AfterT = Aws::Utils::DateTime>
    CreatedAt& WithAfter(AfterT&& value) { SetAfter(std::forward<AfterT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_before{};
    bool m_beforeHasBeenSet = false;

    Aws::Utils::DateTime m_after{};
    bool m_afterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
