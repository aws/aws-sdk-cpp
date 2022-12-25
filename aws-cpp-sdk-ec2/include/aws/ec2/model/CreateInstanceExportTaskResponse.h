/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ExportTask.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

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
  class CreateInstanceExportTaskResponse
  {
  public:
    AWS_EC2_API CreateInstanceExportTaskResponse();
    AWS_EC2_API CreateInstanceExportTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateInstanceExportTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the export instance task.</p>
     */
    inline const ExportTask& GetExportTask() const{ return m_exportTask; }

    /**
     * <p>Information about the export instance task.</p>
     */
    inline void SetExportTask(const ExportTask& value) { m_exportTask = value; }

    /**
     * <p>Information about the export instance task.</p>
     */
    inline void SetExportTask(ExportTask&& value) { m_exportTask = std::move(value); }

    /**
     * <p>Information about the export instance task.</p>
     */
    inline CreateInstanceExportTaskResponse& WithExportTask(const ExportTask& value) { SetExportTask(value); return *this;}

    /**
     * <p>Information about the export instance task.</p>
     */
    inline CreateInstanceExportTaskResponse& WithExportTask(ExportTask&& value) { SetExportTask(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateInstanceExportTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateInstanceExportTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ExportTask m_exportTask;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
