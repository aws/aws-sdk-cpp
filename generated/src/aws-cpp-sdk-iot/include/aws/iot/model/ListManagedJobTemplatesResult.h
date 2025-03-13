/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ManagedJobTemplateSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListManagedJobTemplatesResult
  {
  public:
    AWS_IOT_API ListManagedJobTemplatesResult() = default;
    AWS_IOT_API ListManagedJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListManagedJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline const Aws::Vector<ManagedJobTemplateSummary>& GetManagedJobTemplates() const { return m_managedJobTemplates; }
    template<typename ManagedJobTemplatesT = Aws::Vector<ManagedJobTemplateSummary>>
    void SetManagedJobTemplates(ManagedJobTemplatesT&& value) { m_managedJobTemplatesHasBeenSet = true; m_managedJobTemplates = std::forward<ManagedJobTemplatesT>(value); }
    template<typename ManagedJobTemplatesT = Aws::Vector<ManagedJobTemplateSummary>>
    ListManagedJobTemplatesResult& WithManagedJobTemplates(ManagedJobTemplatesT&& value) { SetManagedJobTemplates(std::forward<ManagedJobTemplatesT>(value)); return *this;}
    template<typename ManagedJobTemplatesT = ManagedJobTemplateSummary>
    ListManagedJobTemplatesResult& AddManagedJobTemplates(ManagedJobTemplatesT&& value) { m_managedJobTemplatesHasBeenSet = true; m_managedJobTemplates.emplace_back(std::forward<ManagedJobTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedJobTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedJobTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedJobTemplateSummary> m_managedJobTemplates;
    bool m_managedJobTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
