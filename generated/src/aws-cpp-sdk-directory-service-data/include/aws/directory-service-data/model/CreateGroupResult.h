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
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult() = default;
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the group. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateGroupResult& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    CreateGroupResult& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group. </p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    CreateGroupResult& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
