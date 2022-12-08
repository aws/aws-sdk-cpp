/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/ScheduleGroupState.h>
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
namespace Scheduler
{
namespace Model
{
  class GetScheduleGroupResult
  {
  public:
    AWS_SCHEDULER_API GetScheduleGroupResult();
    AWS_SCHEDULER_API GetScheduleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API GetScheduleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline GetScheduleGroupResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline GetScheduleGroupResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDate = value; }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDate = std::move(value); }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline GetScheduleGroupResult& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline GetScheduleGroupResult& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline const ScheduleGroupState& GetState() const{ return m_state; }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline void SetState(const ScheduleGroupState& value) { m_state = value; }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline void SetState(ScheduleGroupState&& value) { m_state = std::move(value); }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithState(const ScheduleGroupState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline GetScheduleGroupResult& WithState(ScheduleGroupState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModificationDate;

    Aws::String m_name;

    ScheduleGroupState m_state;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
