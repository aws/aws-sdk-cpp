/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>A failed resource. For a list of common causes, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
   * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Failure">AWS API
   * Reference</a></p>
   */
  class Failure
  {
  public:
    AWS_ECS_API Failure() = default;
    AWS_ECS_API Failure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Failure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Failure& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Failure& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the failure.</p>
     */
    inline const Aws::String& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = Aws::String>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = Aws::String>
    Failure& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
