/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

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
   * <p>The amount of ephemeral storage to allocate for the task. This parameter is
   * used to expand the total amount of ephemeral storage available, beyond the
   * default amount, for tasks hosted on Fargate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EphemeralStorage">AWS
   * API Reference</a></p>
   */
  class EphemeralStorage
  {
  public:
    AWS_BATCH_API EphemeralStorage();
    AWS_BATCH_API EphemeralStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EphemeralStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount, in GiB, of ephemeral storage to set for the task. The
     * minimum supported value is <code>21</code> GiB and the maximum supported value
     * is <code>200</code> GiB.</p>
     */
    inline int GetSizeInGiB() const{ return m_sizeInGiB; }

    /**
     * <p>The total amount, in GiB, of ephemeral storage to set for the task. The
     * minimum supported value is <code>21</code> GiB and the maximum supported value
     * is <code>200</code> GiB.</p>
     */
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }

    /**
     * <p>The total amount, in GiB, of ephemeral storage to set for the task. The
     * minimum supported value is <code>21</code> GiB and the maximum supported value
     * is <code>200</code> GiB.</p>
     */
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }

    /**
     * <p>The total amount, in GiB, of ephemeral storage to set for the task. The
     * minimum supported value is <code>21</code> GiB and the maximum supported value
     * is <code>200</code> GiB.</p>
     */
    inline EphemeralStorage& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}

  private:

    int m_sizeInGiB;
    bool m_sizeInGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
