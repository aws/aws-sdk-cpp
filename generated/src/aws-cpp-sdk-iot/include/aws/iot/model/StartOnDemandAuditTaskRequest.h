﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class StartOnDemandAuditTaskRequest : public IoTRequest
  {
  public:
    AWS_IOT_API StartOnDemandAuditTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOnDemandAuditTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Which checks are performed during the audit. The checks you specify must be
     * enabled for your account or an exception occurs. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks,
     * including those that are enabled or <code>UpdateAccountAuditConfiguration</code>
     * to select which checks are enabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetCheckNames() const { return m_targetCheckNames; }
    inline bool TargetCheckNamesHasBeenSet() const { return m_targetCheckNamesHasBeenSet; }
    template<typename TargetCheckNamesT = Aws::Vector<Aws::String>>
    void SetTargetCheckNames(TargetCheckNamesT&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames = std::forward<TargetCheckNamesT>(value); }
    template<typename TargetCheckNamesT = Aws::Vector<Aws::String>>
    StartOnDemandAuditTaskRequest& WithTargetCheckNames(TargetCheckNamesT&& value) { SetTargetCheckNames(std::forward<TargetCheckNamesT>(value)); return *this;}
    template<typename TargetCheckNamesT = Aws::String>
    StartOnDemandAuditTaskRequest& AddTargetCheckNames(TargetCheckNamesT&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames.emplace_back(std::forward<TargetCheckNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_targetCheckNames;
    bool m_targetCheckNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
