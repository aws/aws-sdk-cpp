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
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{
  class AWS_DAX_API DeleteParameterGroupResult
  {
  public:
    DeleteParameterGroupResult();
    DeleteParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline const Aws::String& GetDeletionMessage() const{ return m_deletionMessage; }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline void SetDeletionMessage(const Aws::String& value) { m_deletionMessage = value; }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline void SetDeletionMessage(Aws::String&& value) { m_deletionMessage = std::move(value); }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline void SetDeletionMessage(const char* value) { m_deletionMessage.assign(value); }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline DeleteParameterGroupResult& WithDeletionMessage(const Aws::String& value) { SetDeletionMessage(value); return *this;}

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline DeleteParameterGroupResult& WithDeletionMessage(Aws::String&& value) { SetDeletionMessage(std::move(value)); return *this;}

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * parameter group).</p>
     */
    inline DeleteParameterGroupResult& WithDeletionMessage(const char* value) { SetDeletionMessage(value); return *this;}

  private:

    Aws::String m_deletionMessage;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
