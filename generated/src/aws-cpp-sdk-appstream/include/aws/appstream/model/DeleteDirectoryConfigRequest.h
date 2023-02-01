/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DeleteDirectoryConfigRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DeleteDirectoryConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDirectoryConfig"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the directory configuration.</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline DeleteDirectoryConfigRequest& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline DeleteDirectoryConfigRequest& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the directory configuration.</p>
     */
    inline DeleteDirectoryConfigRequest& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
