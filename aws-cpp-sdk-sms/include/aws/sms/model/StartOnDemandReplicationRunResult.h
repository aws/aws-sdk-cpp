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
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API StartOnDemandReplicationRunResult
  {
  public:
    StartOnDemandReplicationRunResult();
    StartOnDemandReplicationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartOnDemandReplicationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the replication run.</p>
     */
    inline const Aws::String& GetReplicationRunId() const{ return m_replicationRunId; }

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline void SetReplicationRunId(const Aws::String& value) { m_replicationRunId = value; }

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline void SetReplicationRunId(Aws::String&& value) { m_replicationRunId = std::move(value); }

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline void SetReplicationRunId(const char* value) { m_replicationRunId.assign(value); }

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(const Aws::String& value) { SetReplicationRunId(value); return *this;}

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(Aws::String&& value) { SetReplicationRunId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(const char* value) { SetReplicationRunId(value); return *this;}

  private:

    Aws::String m_replicationRunId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
