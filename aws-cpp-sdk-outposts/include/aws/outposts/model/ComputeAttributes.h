/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about compute hardware assets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ComputeAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_OUTPOSTS_API ComputeAttributes
  {
  public:
    ComputeAttributes();
    ComputeAttributes(Aws::Utils::Json::JsonView jsonValue);
    ComputeAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p> The host ID of any Dedicated Hosts on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(const char* value) { SetHostId(value); return *this;}

  private:

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
