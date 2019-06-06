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
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API SubmitAttachmentStateChangesResult
  {
  public:
    SubmitAttachmentStateChangesResult();
    SubmitAttachmentStateChangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SubmitAttachmentStateChangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline const Aws::String& GetAcknowledgment() const{ return m_acknowledgment; }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(const Aws::String& value) { m_acknowledgment = value; }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(Aws::String&& value) { m_acknowledgment = std::move(value); }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(const char* value) { m_acknowledgment.assign(value); }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitAttachmentStateChangesResult& WithAcknowledgment(const Aws::String& value) { SetAcknowledgment(value); return *this;}

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitAttachmentStateChangesResult& WithAcknowledgment(Aws::String&& value) { SetAcknowledgment(std::move(value)); return *this;}

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitAttachmentStateChangesResult& WithAcknowledgment(const char* value) { SetAcknowledgment(value); return *this;}

  private:

    Aws::String m_acknowledgment;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
