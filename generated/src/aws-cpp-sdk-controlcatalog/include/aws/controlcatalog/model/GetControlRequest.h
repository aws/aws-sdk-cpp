/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/ControlCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

  /**
   */
  class GetControlRequest : public ControlCatalogRequest
  {
  public:
    AWS_CONTROLCATALOG_API GetControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetControl"; }

    AWS_CONTROLCATALOG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control. It has one of the following
     * formats:</p> <p> <i>Global format</i> </p> <p>
     * <code>arn:{PARTITION}:controlcatalog:::control/{CONTROL_CATALOG_OPAQUE_ID}</code>
     * </p> <p> <i>Or Regional format</i> </p> <p>
     * <code>arn:{PARTITION}:controltower:{REGION}::control/{CONTROL_TOWER_OPAQUE_ID}</code>
     * </p> <p>Here is a more general pattern that covers Amazon Web Services Control
     * Tower and Control Catalog ARNs:</p> <p>
     * <code>^arn:(aws(?:[-a-z]*)?):(controlcatalog|controltower):[a-zA-Z0-9-]*::control/[0-9a-zA-Z_\\-]+$</code>
     * </p>
     */
    inline const Aws::String& GetControlArn() const { return m_controlArn; }
    inline bool ControlArnHasBeenSet() const { return m_controlArnHasBeenSet; }
    template<typename ControlArnT = Aws::String>
    void SetControlArn(ControlArnT&& value) { m_controlArnHasBeenSet = true; m_controlArn = std::forward<ControlArnT>(value); }
    template<typename ControlArnT = Aws::String>
    GetControlRequest& WithControlArn(ControlArnT&& value) { SetControlArn(std::forward<ControlArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_controlArn;
    bool m_controlArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
