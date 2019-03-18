/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>An object representing the array properties of a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ArrayPropertiesSummary">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ArrayPropertiesSummary
  {
  public:
    ArrayPropertiesSummary();
    ArrayPropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
    ArrayPropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the array job. This parameter is returned for parent array
     * jobs.</p>
     */
    inline ArrayPropertiesSummary& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The job index within the array that is associated with this job. This
     * parameter is returned for children of array jobs.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The job index within the array that is associated with this job. This
     * parameter is returned for children of array jobs.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The job index within the array that is associated with this job. This
     * parameter is returned for children of array jobs.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The job index within the array that is associated with this job. This
     * parameter is returned for children of array jobs.</p>
     */
    inline ArrayPropertiesSummary& WithIndex(int value) { SetIndex(value); return *this;}

  private:

    int m_size;
    bool m_sizeHasBeenSet;

    int m_index;
    bool m_indexHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
