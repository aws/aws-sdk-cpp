/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/InstanceProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListInstanceProfilesResult
  {
  public:
    AWS_DEVICEFARM_API ListInstanceProfilesResult() = default;
    AWS_DEVICEFARM_API ListInstanceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListInstanceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your instance profiles.</p>
     */
    inline const Aws::Vector<InstanceProfile>& GetInstanceProfiles() const { return m_instanceProfiles; }
    template<typename InstanceProfilesT = Aws::Vector<InstanceProfile>>
    void SetInstanceProfiles(InstanceProfilesT&& value) { m_instanceProfilesHasBeenSet = true; m_instanceProfiles = std::forward<InstanceProfilesT>(value); }
    template<typename InstanceProfilesT = Aws::Vector<InstanceProfile>>
    ListInstanceProfilesResult& WithInstanceProfiles(InstanceProfilesT&& value) { SetInstanceProfiles(std::forward<InstanceProfilesT>(value)); return *this;}
    template<typename InstanceProfilesT = InstanceProfile>
    ListInstanceProfilesResult& AddInstanceProfiles(InstanceProfilesT&& value) { m_instanceProfilesHasBeenSet = true; m_instanceProfiles.emplace_back(std::forward<InstanceProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstanceProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstanceProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceProfile> m_instanceProfiles;
    bool m_instanceProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
