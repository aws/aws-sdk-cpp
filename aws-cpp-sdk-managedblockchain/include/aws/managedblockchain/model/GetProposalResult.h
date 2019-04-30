/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Proposal.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class AWS_MANAGEDBLOCKCHAIN_API GetProposalResult
  {
  public:
    GetProposalResult();
    GetProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a proposal.</p>
     */
    inline const Proposal& GetProposal() const{ return m_proposal; }

    /**
     * <p>Information about a proposal.</p>
     */
    inline void SetProposal(const Proposal& value) { m_proposal = value; }

    /**
     * <p>Information about a proposal.</p>
     */
    inline void SetProposal(Proposal&& value) { m_proposal = std::move(value); }

    /**
     * <p>Information about a proposal.</p>
     */
    inline GetProposalResult& WithProposal(const Proposal& value) { SetProposal(value); return *this;}

    /**
     * <p>Information about a proposal.</p>
     */
    inline GetProposalResult& WithProposal(Proposal&& value) { SetProposal(std::move(value)); return *this;}

  private:

    Proposal m_proposal;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
