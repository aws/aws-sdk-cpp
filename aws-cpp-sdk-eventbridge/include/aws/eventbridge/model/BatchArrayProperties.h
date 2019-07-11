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
#include <aws/eventbridge/EventBridge_EXPORTS.h>

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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The array properties for the submitted job, such as the size of the array.
   * The array size can be between 2 and 10,000. If you specify array properties for
   * a job, it becomes an array job. This parameter is used only if the target is an
   * AWS Batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/BatchArrayProperties">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API BatchArrayProperties
  {
  public:
    BatchArrayProperties();
    BatchArrayProperties(Aws::Utils::Json::JsonView jsonValue);
    BatchArrayProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
