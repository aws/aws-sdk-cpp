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
  class CreateGroupProfileResult
  {
  public:
    AWS_DATAZONE_API CreateGroupProfileResult();
    AWS_DATAZONE_API CreateGroupProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateGroupProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline CreateGroupProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline CreateGroupProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile is
     * created.</p>
     */
    inline CreateGroupProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline CreateGroupProfileResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline CreateGroupProfileResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group for which group profile is created.</p>
     */
    inline CreateGroupProfileResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The identifier of the group profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline CreateGroupProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline CreateGroupProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline CreateGroupProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the group profile.</p>
     */
    inline const GroupProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the group profile.</p>
     */
    inline void SetStatus(const GroupProfileStatus& value) { m_status = value; }

    /**
     * <p>The status of the group profile.</p>
     */
    inline void SetStatus(GroupProfileStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the group profile.</p>
     */
    inline CreateGroupProfileResult& WithStatus(const GroupProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the group profile.</p>
     */
    inline CreateGroupProfileResult& WithStatus(GroupProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGroupProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGroupProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGroupProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
