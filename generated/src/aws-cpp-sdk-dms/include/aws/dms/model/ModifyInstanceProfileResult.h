/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/InstanceProfile.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class ModifyInstanceProfileResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The instance profile that was modified.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const { return m_instanceProfile; }
    template<typename InstanceProfileT = InstanceProfile>
    void SetInstanceProfile(InstanceProfileT&& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = std::forward<InstanceProfileT>(value); }
    template<typename InstanceProfileT = InstanceProfile>
    ModifyInstanceProfileResult& WithInstanceProfile(InstanceProfileT&& value) { SetInstanceProfile(std::forward<InstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ModifyInstanceProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceProfile m_instanceProfile;
    bool m_instanceProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
