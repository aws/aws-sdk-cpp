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
#include <aws/qldb/model/JournalKinesisStreamDescription.h>
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
  class AWS_QLDB_API DescribeJournalKinesisStreamResult
  {
  public:
    DescribeJournalKinesisStreamResult();
    DescribeJournalKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJournalKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline const JournalKinesisStreamDescription& GetStream() const{ return m_stream; }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetStream(const JournalKinesisStreamDescription& value) { m_stream = value; }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline void SetStream(JournalKinesisStreamDescription&& value) { m_stream = std::move(value); }

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalKinesisStreamResult& WithStream(const JournalKinesisStreamDescription& value) { SetStream(value); return *this;}

    /**
     * <p>Information about the QLDB journal stream returned by a
     * <code>DescribeJournalS3Export</code> request.</p>
     */
    inline DescribeJournalKinesisStreamResult& WithStream(JournalKinesisStreamDescription&& value) { SetStream(std::move(value)); return *this;}

  private:

    JournalKinesisStreamDescription m_stream;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
