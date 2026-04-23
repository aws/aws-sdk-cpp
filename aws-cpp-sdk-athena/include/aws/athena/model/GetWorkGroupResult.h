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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/WorkGroup.h>
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
namespace Athena
{
namespace Model
{
  class AWS_ATHENA_API GetWorkGroupResult
  {
  public:
    GetWorkGroupResult();
    GetWorkGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWorkGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the workgroup.</p>
     */
    inline const WorkGroup& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>Information about the workgroup.</p>
     */
    inline void SetWorkGroup(const WorkGroup& value) { m_workGroup = value; }

    /**
     * <p>Information about the workgroup.</p>
     */
    inline void SetWorkGroup(WorkGroup&& value) { m_workGroup = std::move(value); }

    /**
     * <p>Information about the workgroup.</p>
     */
    inline GetWorkGroupResult& WithWorkGroup(const WorkGroup& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>Information about the workgroup.</p>
     */
    inline GetWorkGroupResult& WithWorkGroup(WorkGroup&& value) { SetWorkGroup(std::move(value)); return *this;}

  private:

    WorkGroup m_workGroup;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
