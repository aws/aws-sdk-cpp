/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ComputeCapacity
  {
  public:
    AWS_APPSTREAM_API ComputeCapacity();
    AWS_APPSTREAM_API ComputeCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ComputeCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_desiredInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
