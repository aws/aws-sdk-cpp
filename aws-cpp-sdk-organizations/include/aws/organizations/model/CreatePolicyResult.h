/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Policy.h>
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
namespace Organizations
{
namespace Model
{
  class CreatePolicyResult
  {
  public:
    AWS_ORGANIZATIONS_API CreatePolicyResult();
    AWS_ORGANIZATIONS_API CreatePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API CreatePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the newly created policy.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>A structure that contains details about the newly created policy.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * <p>A structure that contains details about the newly created policy.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * <p>A structure that contains details about the newly created policy.</p>
     */
    inline CreatePolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>A structure that contains details about the newly created policy.</p>
     */
    inline CreatePolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Policy m_policy;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
