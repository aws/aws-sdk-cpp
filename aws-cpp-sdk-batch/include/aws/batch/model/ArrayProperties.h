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
   * <p>An object representing an AWS Batch array job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ArrayProperties">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ArrayProperties
  {
  public:
    ArrayProperties();
    ArrayProperties(Aws::Utils::Json::JsonView jsonValue);
    ArrayProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the array job.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the array job.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the array job.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the array job.</p>
     */
    inline ArrayProperties& WithSize(int value) { SetSize(value); return *this;}

  private:

    int m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
