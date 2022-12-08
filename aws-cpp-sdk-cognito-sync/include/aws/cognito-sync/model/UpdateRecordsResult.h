/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-sync/model/Record.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful UpdateRecordsRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UpdateRecordsResponse">AWS
   * API Reference</a></p>
   */
  class UpdateRecordsResult
  {
  public:
    AWS_COGNITOSYNC_API UpdateRecordsResult();
    AWS_COGNITOSYNC_API UpdateRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API UpdateRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of records that have been updated.
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * A list of records that have been updated.
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_records = value; }

    /**
     * A list of records that have been updated.
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_records = std::move(value); }

    /**
     * A list of records that have been updated.
     */
    inline UpdateRecordsResult& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * A list of records that have been updated.
     */
    inline UpdateRecordsResult& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * A list of records that have been updated.
     */
    inline UpdateRecordsResult& AddRecords(const Record& value) { m_records.push_back(value); return *this; }

    /**
     * A list of records that have been updated.
     */
    inline UpdateRecordsResult& AddRecords(Record&& value) { m_records.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Record> m_records;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
