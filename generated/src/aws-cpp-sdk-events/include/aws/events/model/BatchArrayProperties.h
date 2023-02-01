/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>

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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The array properties for the submitted job, such as the size of the array.
   * The array size can be between 2 and 10,000. If you specify array properties for
   * a job, it becomes an array job. This parameter is used only if the target is an
   * Batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/BatchArrayProperties">AWS
   * API Reference</a></p>
   */
  class BatchArrayProperties
  {
  public:
    AWS_CLOUDWATCHEVENTS_API BatchArrayProperties();
    AWS_CLOUDWATCHEVENTS_API BatchArrayProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API BatchArrayProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the array, if this is an array batch job. Valid values are
     * integers between 2 and 10,000.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the array, if this is an array batch job. Valid values are
     * integers between 2 and 10,000.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the array, if this is an array batch job. Valid values are
     * integers between 2 and 10,000.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the array, if this is an array batch job. Valid values are
     * integers between 2 and 10,000.</p>
     */
    inline BatchArrayProperties& WithSize(int value) { SetSize(value); return *this;}

  private:

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
