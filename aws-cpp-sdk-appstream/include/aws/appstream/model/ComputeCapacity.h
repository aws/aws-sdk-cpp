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
#include <aws/appstream/AppStream_EXPORTS.h>

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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the capacity for a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ComputeCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ComputeCapacity
  {
  public:
    ComputeCapacity();
    ComputeCapacity(Aws::Utils::Json::JsonView jsonValue);
    ComputeCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline int GetDesiredInstances() const{ return m_desiredInstances; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline bool DesiredInstancesHasBeenSet() const { return m_desiredInstancesHasBeenSet; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline void SetDesiredInstances(int value) { m_desiredInstancesHasBeenSet = true; m_desiredInstances = value; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline ComputeCapacity& WithDesiredInstances(int value) { SetDesiredInstances(value); return *this;}

  private:

    int m_desiredInstances;
    bool m_desiredInstancesHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
