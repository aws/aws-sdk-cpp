/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A list of Availability Zones corresponding to the segments in a
   * trace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/AvailabilityZoneDetail">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneDetail
  {
  public:
    AWS_XRAY_API AvailabilityZoneDetail();
    AWS_XRAY_API AvailabilityZoneDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API AvailabilityZoneDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline AvailabilityZoneDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline AvailabilityZoneDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a corresponding Availability Zone.</p>
     */
    inline AvailabilityZoneDetail& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
