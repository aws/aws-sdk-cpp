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
    AWS_ECS_API CreatedAt();
    AWS_ECS_API CreatedAt(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API CreatedAt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include service deployments in the result that were created before this time.
     * The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetBefore() const{ return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    inline void SetBefore(const Aws::Utils::DateTime& value) { m_beforeHasBeenSet = true; m_before = value; }
    inline void SetBefore(Aws::Utils::DateTime&& value) { m_beforeHasBeenSet = true; m_before = std::move(value); }
    inline CreatedAt& WithBefore(const Aws::Utils::DateTime& value) { SetBefore(value); return *this;}
    inline CreatedAt& WithBefore(Aws::Utils::DateTime&& value) { SetBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include service deployments in the result that were created after this time.
     * The format is yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetAfter() const{ return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    inline void SetAfter(const Aws::Utils::DateTime& value) { m_afterHasBeenSet = true; m_after = value; }
    inline void SetAfter(Aws::Utils::DateTime&& value) { m_afterHasBeenSet = true; m_after = std::move(value); }
    inline CreatedAt& WithAfter(const Aws::Utils::DateTime& value) { SetAfter(value); return *this;}
    inline CreatedAt& WithAfter(Aws::Utils::DateTime&& value) { SetAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_before;
    bool m_beforeHasBeenSet = false;

    Aws::Utils::DateTime m_after;
    bool m_afterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
