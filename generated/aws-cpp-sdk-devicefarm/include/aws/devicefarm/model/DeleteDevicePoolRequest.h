﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the delete device pool operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePoolRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API DeleteDevicePoolRequest : public DeviceFarmRequest
  {
  public:
    DeleteDevicePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDevicePool"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline DeleteDevicePoolRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline DeleteDevicePoolRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm device pool to
     * delete.</p>
     */
    inline DeleteDevicePoolRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
