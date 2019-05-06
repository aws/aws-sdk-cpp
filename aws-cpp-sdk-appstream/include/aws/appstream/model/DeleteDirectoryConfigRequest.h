/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSTREAM_API DeleteDirectoryConfigRequest : public AppStreamRequest
  {
  public:
    DeleteDirectoryConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDirectoryConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_directoryNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
