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
    AWS_ECS_API Failure();
    AWS_ECS_API Failure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Failure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline Failure& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline Failure& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the failed resource.</p>
     */
    inline Failure& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline Failure& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline Failure& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline Failure& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The details of the failure.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>The details of the failure.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>The details of the failure.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>The details of the failure.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>The details of the failure.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>The details of the failure.</p>
     */
    inline Failure& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>The details of the failure.</p>
     */
    inline Failure& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>The details of the failure.</p>
     */
    inline Failure& WithDetail(const char* value) { SetDetail(value); return *this;}

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
