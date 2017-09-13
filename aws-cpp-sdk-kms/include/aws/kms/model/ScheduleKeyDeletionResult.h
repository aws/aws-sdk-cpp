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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace KMS
{
namespace Model
{
  class AWS_KMS_API ScheduleKeyDeletionResult
  {
  public:
    ScheduleKeyDeletionResult();
    ScheduleKeyDeletionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ScheduleKeyDeletionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) for which deletion is
     * scheduled.</p>
     */
    inline ScheduleKeyDeletionResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The date and time after which AWS KMS deletes the customer master key
     * (CMK).</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time after which AWS KMS deletes the customer master key
     * (CMK).</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDate = value; }

    /**
     * <p>The date and time after which AWS KMS deletes the customer master key
     * (CMK).</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDate = std::move(value); }

    /**
     * <p>The date and time after which AWS KMS deletes the customer master key
     * (CMK).</p>
     */
    inline ScheduleKeyDeletionResult& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time after which AWS KMS deletes the customer master key
     * (CMK).</p>
     */
    inline ScheduleKeyDeletionResult& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::DateTime m_deletionDate;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
