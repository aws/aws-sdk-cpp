/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/BatchChannelMemberships.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/BatchCreateChannelMembershipError.h>
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
namespace Chime
{
namespace Model
{
  class BatchCreateChannelMembershipResult
  {
  public:
    AWS_CHIME_API BatchCreateChannelMembershipResult();
    AWS_CHIME_API BatchCreateChannelMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchCreateChannelMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline const BatchChannelMemberships& GetBatchChannelMemberships() const{ return m_batchChannelMemberships; }

    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline void SetBatchChannelMemberships(const BatchChannelMemberships& value) { m_batchChannelMemberships = value; }

    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline void SetBatchChannelMemberships(BatchChannelMemberships&& value) { m_batchChannelMemberships = std::move(value); }

    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline BatchCreateChannelMembershipResult& WithBatchChannelMemberships(const BatchChannelMemberships& value) { SetBatchChannelMemberships(value); return *this;}

    /**
     * <p>The list of channel memberships in the response.</p>
     */
    inline BatchCreateChannelMembershipResult& WithBatchChannelMemberships(BatchChannelMemberships&& value) { SetBatchChannelMemberships(std::move(value)); return *this;}


    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<BatchCreateChannelMembershipError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchCreateChannelMembershipError>& value) { m_errors = value; }

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<BatchCreateChannelMembershipError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateChannelMembershipResult& WithErrors(const Aws::Vector<BatchCreateChannelMembershipError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateChannelMembershipResult& WithErrors(Aws::Vector<BatchCreateChannelMembershipError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateChannelMembershipResult& AddErrors(const BatchCreateChannelMembershipError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the memberships in the request, a list
     * of the memberships is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateChannelMembershipResult& AddErrors(BatchCreateChannelMembershipError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    BatchChannelMemberships m_batchChannelMemberships;

    Aws::Vector<BatchCreateChannelMembershipError> m_errors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
