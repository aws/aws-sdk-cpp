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
  class AWS_COGNITOSYNC_API UpdateRecordsResult
  {
  public:
    UpdateRecordsResult();
    UpdateRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
