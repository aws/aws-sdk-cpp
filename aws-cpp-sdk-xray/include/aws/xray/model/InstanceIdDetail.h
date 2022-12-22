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
   * <p>A list of EC2 instance IDs corresponding to the segments in a trace.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InstanceIdDetail">AWS
   * API Reference</a></p>
   */
  class InstanceIdDetail
  {
  public:
    AWS_XRAY_API InstanceIdDetail();
    AWS_XRAY_API InstanceIdDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InstanceIdDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline InstanceIdDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline InstanceIdDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a corresponding EC2 instance.</p>
     */
    inline InstanceIdDetail& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
