/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/RecordsIngested.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class WriteRecordsResult
  {
  public:
    AWS_TIMESTREAMWRITE_API WriteRecordsResult();
    AWS_TIMESTREAMWRITE_API WriteRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API WriteRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline const RecordsIngested& GetRecordsIngested() const{ return m_recordsIngested; }

    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline void SetRecordsIngested(const RecordsIngested& value) { m_recordsIngested = value; }

    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline void SetRecordsIngested(RecordsIngested&& value) { m_recordsIngested = std::move(value); }

    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline WriteRecordsResult& WithRecordsIngested(const RecordsIngested& value) { SetRecordsIngested(value); return *this;}

    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline WriteRecordsResult& WithRecordsIngested(RecordsIngested&& value) { SetRecordsIngested(std::move(value)); return *this;}

  private:

    RecordsIngested m_recordsIngested;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
