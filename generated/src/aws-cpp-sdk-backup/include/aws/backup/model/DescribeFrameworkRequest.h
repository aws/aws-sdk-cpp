﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeFrameworkRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeFrameworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFramework"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of a framework.</p>
     */
    inline const Aws::String& GetFrameworkName() const { return m_frameworkName; }
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }
    template<typename FrameworkNameT = Aws::String>
    void SetFrameworkName(FrameworkNameT&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::forward<FrameworkNameT>(value); }
    template<typename FrameworkNameT = Aws::String>
    DescribeFrameworkRequest& WithFrameworkName(FrameworkNameT&& value) { SetFrameworkName(std::forward<FrameworkNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
