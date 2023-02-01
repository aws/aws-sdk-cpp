/**
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
    AWS_BACKUP_API DescribeFrameworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFramework"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of a framework.</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = value; }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::move(value); }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline void SetFrameworkName(const char* value) { m_frameworkNameHasBeenSet = true; m_frameworkName.assign(value); }

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkRequest& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkRequest& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a framework.</p>
     */
    inline DescribeFrameworkRequest& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}

  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
