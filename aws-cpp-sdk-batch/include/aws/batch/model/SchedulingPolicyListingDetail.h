/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that contains the details of a scheduling policy that's returned in
   * a <code>ListSchedulingPolicy</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SchedulingPolicyListingDetail">AWS
   * API Reference</a></p>
   */
  class SchedulingPolicyListingDetail
  {
  public:
    AWS_BATCH_API SchedulingPolicyListingDetail();
    AWS_BATCH_API SchedulingPolicyListingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API SchedulingPolicyListingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline SchedulingPolicyListingDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline SchedulingPolicyListingDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the scheduling policy.</p>
     */
    inline SchedulingPolicyListingDetail& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
