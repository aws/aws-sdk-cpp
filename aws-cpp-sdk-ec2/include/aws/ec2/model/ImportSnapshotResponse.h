﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotTaskDetail.h>
#include <aws/ec2/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output for ImportSnapshot.</p>
   */
  class AWS_EC2_API ImportSnapshotResponse
  {
  public:
    ImportSnapshotResponse();
    ImportSnapshotResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ImportSnapshotResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskId = value; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskId = value; }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskId.assign(value); }

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(Aws::String&& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline const SnapshotTaskDetail& GetSnapshotTaskDetail() const{ return m_snapshotTaskDetail; }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(const SnapshotTaskDetail& value) { m_snapshotTaskDetail = value; }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline void SetSnapshotTaskDetail(SnapshotTaskDetail&& value) { m_snapshotTaskDetail = value; }

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithSnapshotTaskDetail(const SnapshotTaskDetail& value) { SetSnapshotTaskDetail(value); return *this;}

    /**
     * <p>Information about the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithSnapshotTaskDetail(SnapshotTaskDetail&& value) { SetSnapshotTaskDetail(value); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline ImportSnapshotResponse& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ImportSnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportSnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_importTaskId;
    SnapshotTaskDetail m_snapshotTaskDetail;
    Aws::String m_description;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws