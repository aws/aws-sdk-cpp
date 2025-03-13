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
  class DescribeAccountPreferencesResult
  {
  public:
    AWS_EFS_API DescribeAccountPreferencesResult() = default;
    AWS_EFS_API DescribeAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline const ResourceIdPreference& GetResourceIdPreference() const { return m_resourceIdPreference; }
    template<typename ResourceIdPreferenceT = ResourceIdPreference>
    void SetResourceIdPreference(ResourceIdPreferenceT&& value) { m_resourceIdPreferenceHasBeenSet = true; m_resourceIdPreference = std::forward<ResourceIdPreferenceT>(value); }
    template<typename ResourceIdPreferenceT = ResourceIdPreference>
    DescribeAccountPreferencesResult& WithResourceIdPreference(ResourceIdPreferenceT&& value) { SetResourceIdPreference(std::forward<ResourceIdPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountPreferencesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceIdPreference m_resourceIdPreference;
    bool m_resourceIdPreferenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
