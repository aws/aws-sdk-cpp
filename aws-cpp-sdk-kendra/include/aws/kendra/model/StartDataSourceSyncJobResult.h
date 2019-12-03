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
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{
  class AWS_KENDRA_API StartDataSourceSyncJobResult
  {
  public:
    StartDataSourceSyncJobResult();
    StartDataSourceSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartDataSourceSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>Identifies a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}

  private:

    Aws::String m_executionId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
