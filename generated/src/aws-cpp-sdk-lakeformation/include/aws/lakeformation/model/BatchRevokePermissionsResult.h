/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/BatchPermissionsFailureEntry.h>
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
namespace LakeFormation
{
namespace Model
{
  class BatchRevokePermissionsResult
  {
  public:
    AWS_LAKEFORMATION_API BatchRevokePermissionsResult();
    AWS_LAKEFORMATION_API BatchRevokePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API BatchRevokePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline const Aws::Vector<BatchPermissionsFailureEntry>& GetFailures() const{ return m_failures; }

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline void SetFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { m_failures = value; }

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline void SetFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { m_failures = std::move(value); }

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline BatchRevokePermissionsResult& WithFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { SetFailures(value); return *this;}

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline BatchRevokePermissionsResult& WithFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline BatchRevokePermissionsResult& AddFailures(const BatchPermissionsFailureEntry& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>A list of failures to revoke permissions to the resources.</p>
     */
    inline BatchRevokePermissionsResult& AddFailures(BatchPermissionsFailureEntry&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchRevokePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchRevokePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchRevokePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchPermissionsFailureEntry> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
