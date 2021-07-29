﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYREADINESS_API DeleteCellRequest : public Route53RecoveryReadinessRequest
  {
  public:
    DeleteCellRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCell"; }

    Aws::String SerializePayload() const override;


    /**
     * The Cell to delete
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * The Cell to delete
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * The Cell to delete
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * The Cell to delete
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * The Cell to delete
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * The Cell to delete
     */
    inline DeleteCellRequest& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * The Cell to delete
     */
    inline DeleteCellRequest& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * The Cell to delete
     */
    inline DeleteCellRequest& WithCellName(const char* value) { SetCellName(value); return *this;}

  private:

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
