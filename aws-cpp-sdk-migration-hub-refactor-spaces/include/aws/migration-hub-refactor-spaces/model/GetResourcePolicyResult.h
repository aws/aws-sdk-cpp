/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class GetResourcePolicyResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API GetResourcePolicyResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
