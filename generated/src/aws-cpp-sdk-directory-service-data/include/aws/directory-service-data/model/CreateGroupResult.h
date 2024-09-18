/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
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
namespace DirectoryServiceData
{
namespace Model
{
  class CreateGroupResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult();
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the group. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline CreateGroupResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateGroupResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateGroupResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountName.assign(value); }
    inline CreateGroupResult& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline CreateGroupResult& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline CreateGroupResult& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline void SetSID(const Aws::String& value) { m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sID.assign(value); }
    inline CreateGroupResult& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline CreateGroupResult& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline CreateGroupResult& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::String m_sAMAccountName;

    Aws::String m_sID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
