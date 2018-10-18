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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/BatchScheduleActionCreateResult.h>
#include <aws/medialive/model/BatchScheduleActionDeleteResult.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for BatchUpdateScheduleResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateScheduleResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchUpdateScheduleResult
  {
  public:
    BatchUpdateScheduleResult();
    BatchUpdateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchUpdateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Schedule actions created in the schedule.
     */
    inline const BatchScheduleActionCreateResult& GetCreates() const{ return m_creates; }

    /**
     * Schedule actions created in the schedule.
     */
    inline void SetCreates(const BatchScheduleActionCreateResult& value) { m_creates = value; }

    /**
     * Schedule actions created in the schedule.
     */
    inline void SetCreates(BatchScheduleActionCreateResult&& value) { m_creates = std::move(value); }

    /**
     * Schedule actions created in the schedule.
     */
    inline BatchUpdateScheduleResult& WithCreates(const BatchScheduleActionCreateResult& value) { SetCreates(value); return *this;}

    /**
     * Schedule actions created in the schedule.
     */
    inline BatchUpdateScheduleResult& WithCreates(BatchScheduleActionCreateResult&& value) { SetCreates(std::move(value)); return *this;}


    /**
     * Schedule actions deleted from the schedule.
     */
    inline const BatchScheduleActionDeleteResult& GetDeletes() const{ return m_deletes; }

    /**
     * Schedule actions deleted from the schedule.
     */
    inline void SetDeletes(const BatchScheduleActionDeleteResult& value) { m_deletes = value; }

    /**
     * Schedule actions deleted from the schedule.
     */
    inline void SetDeletes(BatchScheduleActionDeleteResult&& value) { m_deletes = std::move(value); }

    /**
     * Schedule actions deleted from the schedule.
     */
    inline BatchUpdateScheduleResult& WithDeletes(const BatchScheduleActionDeleteResult& value) { SetDeletes(value); return *this;}

    /**
     * Schedule actions deleted from the schedule.
     */
    inline BatchUpdateScheduleResult& WithDeletes(BatchScheduleActionDeleteResult&& value) { SetDeletes(std::move(value)); return *this;}

  private:

    BatchScheduleActionCreateResult m_creates;

    BatchScheduleActionDeleteResult m_deletes;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
