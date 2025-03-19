/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
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
namespace EFS
{
namespace Model
{
  class PutAccountPreferencesResult
  {
  public:
    AWS_EFS_API PutAccountPreferencesResult() = default;
    AWS_EFS_API PutAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API PutAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ResourceIdPreference& GetResourceIdPreference() const { return m_resourceIdPreference; }
    template<typename ResourceIdPreferenceT = ResourceIdPreference>
    void SetResourceIdPreference(ResourceIdPreferenceT&& value) { m_resourceIdPreferenceHasBeenSet = true; m_resourceIdPreference = std::forward<ResourceIdPreferenceT>(value); }
    template<typename ResourceIdPreferenceT = ResourceIdPreference>
    PutAccountPreferencesResult& WithResourceIdPreference(ResourceIdPreferenceT&& value) { SetResourceIdPreference(std::forward<ResourceIdPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAccountPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceIdPreference m_resourceIdPreference;
    bool m_resourceIdPreferenceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
