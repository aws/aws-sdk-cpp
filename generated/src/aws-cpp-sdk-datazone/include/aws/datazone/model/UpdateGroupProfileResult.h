/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GroupProfileStatus.h>
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
namespace DataZone
{
namespace Model
{
  class UpdateGroupProfileResult
  {
  public:
    AWS_DATAZONE_API UpdateGroupProfileResult();
    AWS_DATAZONE_API UpdateGroupProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateGroupProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a group profile is
     * updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline UpdateGroupProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateGroupProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateGroupProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group profile that is updated.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }
    inline UpdateGroupProfileResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline UpdateGroupProfileResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline UpdateGroupProfileResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the group profile that is updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateGroupProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateGroupProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateGroupProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the group profile that is updated.</p>
     */
    inline const GroupProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GroupProfileStatus& value) { m_status = value; }
    inline void SetStatus(GroupProfileStatus&& value) { m_status = std::move(value); }
    inline UpdateGroupProfileResult& WithStatus(const GroupProfileStatus& value) { SetStatus(value); return *this;}
    inline UpdateGroupProfileResult& WithStatus(GroupProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGroupProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGroupProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGroupProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;

    Aws::String m_groupName;

    Aws::String m_id;

    GroupProfileStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
