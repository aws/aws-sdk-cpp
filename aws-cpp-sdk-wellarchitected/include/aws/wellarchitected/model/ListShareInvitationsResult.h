/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareInvitationSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Input for List Share Invitations</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitationsOutput">AWS
   * API Reference</a></p>
   */
  class ListShareInvitationsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListShareInvitationsResult();
    AWS_WELLARCHITECTED_API ListShareInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListShareInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline const Aws::Vector<ShareInvitationSummary>& GetShareInvitationSummaries() const{ return m_shareInvitationSummaries; }

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline void SetShareInvitationSummaries(const Aws::Vector<ShareInvitationSummary>& value) { m_shareInvitationSummaries = value; }

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline void SetShareInvitationSummaries(Aws::Vector<ShareInvitationSummary>&& value) { m_shareInvitationSummaries = std::move(value); }

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline ListShareInvitationsResult& WithShareInvitationSummaries(const Aws::Vector<ShareInvitationSummary>& value) { SetShareInvitationSummaries(value); return *this;}

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline ListShareInvitationsResult& WithShareInvitationSummaries(Aws::Vector<ShareInvitationSummary>&& value) { SetShareInvitationSummaries(std::move(value)); return *this;}

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline ListShareInvitationsResult& AddShareInvitationSummaries(const ShareInvitationSummary& value) { m_shareInvitationSummaries.push_back(value); return *this; }

    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline ListShareInvitationsResult& AddShareInvitationSummaries(ShareInvitationSummary&& value) { m_shareInvitationSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListShareInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListShareInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListShareInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ShareInvitationSummary> m_shareInvitationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
