/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{
  class DeleteResourcePolicyResult
  {
  public:
    AWS_DYNAMODB_API DeleteResourcePolicyResult();
    AWS_DYNAMODB_API DeleteResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DeleteResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline DeleteResourcePolicyResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline DeleteResourcePolicyResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique string that represents the revision ID of the policy. If you're
     * comparing revision IDs, make sure to always use string comparison logic.</p>
     * <p>This value will be empty if you make a request against a resource without a
     * policy.</p>
     */
    inline DeleteResourcePolicyResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_revisionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
