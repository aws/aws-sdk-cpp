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
   * <p>An object that represents the array properties of a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ArrayPropertiesSummary">AWS
   * API Reference</a></p>
   */
  class ArrayPropertiesSummary
  {
  public:
    AWS_BATCH_API ArrayPropertiesSummary() = default;
    AWS_BATCH_API ArrayPropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ArrayPropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline ArrayPropertiesSummary& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job index within the array that's associated with this job. This
     * parameter is returned for children of array jobs.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline ArrayPropertiesSummary& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}
  private:

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    int m_index{0};
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
