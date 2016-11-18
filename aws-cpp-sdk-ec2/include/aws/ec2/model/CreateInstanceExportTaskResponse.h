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
#include <aws/ec2/model/ExportTask.h>
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
   * <p>Contains the output for CreateInstanceExportTask.</p>
   */
  class AWS_EC2_API CreateInstanceExportTaskResponse
  {
  public:
    CreateInstanceExportTaskResponse();
    CreateInstanceExportTaskResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateInstanceExportTaskResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the instance export task.</p>
     */
    inline const ExportTask& GetExportTask() const{ return m_exportTask; }

    /**
     * <p>Information about the instance export task.</p>
     */
    inline void SetExportTask(const ExportTask& value) { m_exportTask = value; }

    /**
     * <p>Information about the instance export task.</p>
     */
    inline void SetExportTask(ExportTask&& value) { m_exportTask = value; }

    /**
     * <p>Information about the instance export task.</p>
     */
    inline CreateInstanceExportTaskResponse& WithExportTask(const ExportTask& value) { SetExportTask(value); return *this;}

    /**
     * <p>Information about the instance export task.</p>
     */
    inline CreateInstanceExportTaskResponse& WithExportTask(ExportTask&& value) { SetExportTask(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateInstanceExportTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateInstanceExportTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ExportTask m_exportTask;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws