/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class GetLimitResult
  {
  public:
    AWS_DEADLINE_API GetLimitResult();
    AWS_DEADLINE_API GetLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The display name of the limit.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetLimitResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetLimitResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetLimitResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specify as the <code>name</code> in the
     * <code>amounts</code> field of the <code>hostRequirements</code> in a step of a
     * job template to declare the limit requirement.</p>
     */
    inline const Aws::String& GetAmountRequirementName() const{ return m_amountRequirementName; }
    inline void SetAmountRequirementName(const Aws::String& value) { m_amountRequirementName = value; }
    inline void SetAmountRequirementName(Aws::String&& value) { m_amountRequirementName = std::move(value); }
    inline void SetAmountRequirementName(const char* value) { m_amountRequirementName.assign(value); }
    inline GetLimitResult& WithAmountRequirementName(const Aws::String& value) { SetAmountRequirementName(value); return *this;}
    inline GetLimitResult& WithAmountRequirementName(Aws::String&& value) { SetAmountRequirementName(std::move(value)); return *this;}
    inline GetLimitResult& WithAmountRequirementName(const char* value) { SetAmountRequirementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resources constrained by this limit. When all of the
     * resources are in use, steps that require the limit won't be scheduled until the
     * resource is available.</p> <p>The <code>maxValue</code> must not be 0. If the
     * value is -1, there is no restriction on the number of resources that can be
     * acquired for this limit.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }
    inline void SetMaxCount(int value) { m_maxCount = value; }
    inline GetLimitResult& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetLimitResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetLimitResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that created the limit.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetLimitResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetLimitResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetLimitResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the limit was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetLimitResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetLimitResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that last updated the limit.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetLimitResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetLimitResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetLimitResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }
    inline GetLimitResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetLimitResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetLimitResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline void SetLimitId(const Aws::String& value) { m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitId.assign(value); }
    inline GetLimitResult& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline GetLimitResult& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline GetLimitResult& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources from the limit that are being used by jobs. The
     * result is delayed and may not be the count at the time that you called the
     * operation.</p>
     */
    inline int GetCurrentCount() const{ return m_currentCount; }
    inline void SetCurrentCount(int value) { m_currentCount = value; }
    inline GetLimitResult& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the limit that helps identify what the limit is used
     * for.</p>  <p>This field can store any content. Escape or encode this
     * content before displaying it on a webpage or any other system that might
     * interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetLimitResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetLimitResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetLimitResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLimitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLimitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLimitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;

    Aws::String m_amountRequirementName;

    int m_maxCount;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_farmId;

    Aws::String m_limitId;

    int m_currentCount;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
