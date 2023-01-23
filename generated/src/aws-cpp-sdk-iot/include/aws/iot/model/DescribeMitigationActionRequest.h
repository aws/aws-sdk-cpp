/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeMitigationActionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeMitigationActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMitigationAction"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
