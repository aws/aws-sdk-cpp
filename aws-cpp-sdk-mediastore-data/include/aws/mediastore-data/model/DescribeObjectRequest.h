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
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTOREDATA_API DescribeObjectRequest : public MediaStoreDataRequest
  {
  public:
    DescribeObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeObject"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline DescribeObjectRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline DescribeObjectRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline DescribeObjectRequest& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
