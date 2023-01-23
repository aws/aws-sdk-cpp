/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/MemberError.h>
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
  class BatchCreateRoomMembershipResult
  {
  public:
    AWS_CHIME_API BatchCreateRoomMembershipResult();
    AWS_CHIME_API BatchCreateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchCreateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<MemberError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<MemberError>& value) { m_errors = value; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<MemberError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& WithErrors(const Aws::Vector<MemberError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& WithErrors(Aws::Vector<MemberError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& AddErrors(const MemberError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& AddErrors(MemberError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberError> m_errors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
