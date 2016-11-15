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
  class AWS_EFS_API DescribeFileSystemsRequest : public EFSRequest
  {
  public:
    DescribeFileSystemsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>(Optional) Specifies the maximum number of file systems to return in the
     * response (integer). This parameter value must be greater than 0. The number of
     * items that Amazon EFS returns is the minimum of the <code>MaxItems</code>
     * parameter specified in the request and the service's internal maximum number of
     * items per page. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) Specifies the maximum number of file systems to return in the
     * response (integer). This parameter value must be greater than 0. The number of
     * items that Amazon EFS returns is the minimum of the <code>MaxItems</code>
     * parameter specified in the request and the service's internal maximum number of
     * items per page. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) Specifies the maximum number of file systems to return in the
     * response (integer). This parameter value must be greater than 0. The number of
     * items that Amazon EFS returns is the minimum of the <code>MaxItems</code>
     * parameter specified in the request and the service's internal maximum number of
     * items per page. </p>
     */
    inline DescribeFileSystemsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline DescribeFileSystemsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline DescribeFileSystemsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline DescribeFileSystemsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline DescribeFileSystemsRequest& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline DescribeFileSystemsRequest& WithCreationToken(Aws::String&& value) { SetCreationToken(value); return *this;}

    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline DescribeFileSystemsRequest& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline DescribeFileSystemsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline DescribeFileSystemsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline DescribeFileSystemsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet;
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
