/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class ListThingRegistrationTasksResult
  {
  public:
    AWS_IOT_API ListThingRegistrationTasksResult();
    AWS_IOT_API ListThingRegistrationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingRegistrationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const{ return m_taskIds; }

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline void SetTaskIds(const Aws::Vector<Aws::String>& value) { m_taskIds = value; }

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline void SetTaskIds(Aws::Vector<Aws::String>&& value) { m_taskIds = std::move(value); }

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline ListThingRegistrationTasksResult& WithTaskIds(const Aws::Vector<Aws::String>& value) { SetTaskIds(value); return *this;}

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline ListThingRegistrationTasksResult& WithTaskIds(Aws::Vector<Aws::String>&& value) { SetTaskIds(std::move(value)); return *this;}

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline ListThingRegistrationTasksResult& AddTaskIds(const Aws::String& value) { m_taskIds.push_back(value); return *this; }

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline ListThingRegistrationTasksResult& AddTaskIds(Aws::String&& value) { m_taskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of bulk thing provisioning task IDs.</p>
     */
    inline ListThingRegistrationTasksResult& AddTaskIds(const char* value) { m_taskIds.push_back(value); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_taskIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
