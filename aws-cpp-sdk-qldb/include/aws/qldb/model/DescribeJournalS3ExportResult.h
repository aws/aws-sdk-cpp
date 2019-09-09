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
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/JournalS3ExportDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QLDB
{
namespace Model
{
  class AWS_QLDB_API DescribeJournalS3ExportResult
  {
  public:
    DescribeJournalS3ExportResult();
    DescribeJournalS3ExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJournalS3ExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalS3ExportDescription& GetExportDescription() const{ return m_exportDescription; }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetExportDescription(const JournalS3ExportDescription& value) { m_exportDescription = value; }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetExportDescription(JournalS3ExportDescription&& value) { m_exportDescription = std::move(value); }

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalS3ExportResult& WithExportDescription(const JournalS3ExportDescription& value) { SetExportDescription(value); return *this;}

    /**
     * <p>Information about the journal export job returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalS3ExportResult& WithExportDescription(JournalS3ExportDescription&& value) { SetExportDescription(std::move(value)); return *this;}

  private:

    JournalS3ExportDescription m_exportDescription;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
