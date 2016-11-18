/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EFS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_EFS_API DescribeTagsRequest : public EFSRequest
  {
  public:
    DescribeTagsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>(Optional) Maximum number of file system tags to return in the response. It
     * must be an integer with a value greater than zero.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) Maximum number of file system tags to return in the response. It
     * must be an integer with a value greater than zero.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) Maximum number of file system tags to return in the response. It
     * must be an integer with a value greater than zero.</p>
     */
    inline DescribeTagsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline DescribeTagsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline DescribeTagsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeTags</code> operation (String). If present, it specifies to
     * continue the list from where the previous call left off.</p>
     */
    inline DescribeTagsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline DescribeTagsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline DescribeTagsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system whose tag set you want to retrieve.</p>
     */
    inline DescribeTagsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
