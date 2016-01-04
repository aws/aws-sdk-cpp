/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
  */
  class AWS_EFS_API DescribeMountTargetsRequest : public EFSRequest
  {
  public:
    DescribeMountTargetsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /*
     <p>Optional. Maximum number of mount targets to return in the response. It must be an integer with a value greater than zero.</p>
    */
    inline long GetMaxItems() const{ return m_maxItems; }

    /*
     <p>Optional. Maximum number of mount targets to return in the response. It must be an integer with a value greater than zero.</p>
    */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /*
     <p>Optional. Maximum number of mount targets to return in the response. It must be an integer with a value greater than zero.</p>
    */
    inline DescribeMountTargetsRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline DescribeMountTargetsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline DescribeMountTargetsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>Optional. String. Opaque pagination token returned from a previous <code>DescribeMountTargets</code> operation. If present, it specifies to continue the list from where the previous returning call left off.</p>
    */
    inline DescribeMountTargetsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline DescribeMountTargetsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline DescribeMountTargetsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /*
     <p>String. The ID of the file system whose mount targets you want to list.</p>
    */
    inline DescribeMountTargetsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
