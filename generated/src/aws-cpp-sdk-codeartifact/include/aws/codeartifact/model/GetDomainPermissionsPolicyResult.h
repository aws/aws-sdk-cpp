/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/ResourcePolicy.h>
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
namespace CodeArtifact
{
namespace Model
{
  class GetDomainPermissionsPolicyResult
  {
  public:
    AWS_CODEARTIFACT_API GetDomainPermissionsPolicyResult();
    AWS_CODEARTIFACT_API GetDomainPermissionsPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetDomainPermissionsPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned resource policy. </p>
     */
    inline const ResourcePolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p> The returned resource policy. </p>
     */
    inline void SetPolicy(const ResourcePolicy& value) { m_policy = value; }

    /**
     * <p> The returned resource policy. </p>
     */
    inline void SetPolicy(ResourcePolicy&& value) { m_policy = std::move(value); }

    /**
     * <p> The returned resource policy. </p>
     */
    inline GetDomainPermissionsPolicyResult& WithPolicy(const ResourcePolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p> The returned resource policy. </p>
     */
    inline GetDomainPermissionsPolicyResult& WithPolicy(ResourcePolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    ResourcePolicy m_policy;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
