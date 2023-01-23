/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{
  class DeleteSubnetGroupResult
  {
  public:
    AWS_DAX_API DeleteSubnetGroupResult();
    AWS_DAX_API DeleteSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DeleteSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline const Aws::String& GetDeletionMessage() const{ return m_deletionMessage; }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline void SetDeletionMessage(const Aws::String& value) { m_deletionMessage = value; }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline void SetDeletionMessage(Aws::String&& value) { m_deletionMessage = std::move(value); }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline void SetDeletionMessage(const char* value) { m_deletionMessage.assign(value); }

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline DeleteSubnetGroupResult& WithDeletionMessage(const Aws::String& value) { SetDeletionMessage(value); return *this;}

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline DeleteSubnetGroupResult& WithDeletionMessage(Aws::String&& value) { SetDeletionMessage(std::move(value)); return *this;}

    /**
     * <p>A user-specified message for this action (i.e., a reason for deleting the
     * subnet group).</p>
     */
    inline DeleteSubnetGroupResult& WithDeletionMessage(const char* value) { SetDeletionMessage(value); return *this;}

  private:

    Aws::String m_deletionMessage;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
