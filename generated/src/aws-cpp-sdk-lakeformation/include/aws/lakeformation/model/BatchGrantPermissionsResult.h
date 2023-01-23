/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGrantPermissionsResult
  {
  public:
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult();
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline const Aws::Vector<BatchPermissionsFailureEntry>& GetFailures() const{ return m_failures; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline void SetFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { m_failures = value; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline void SetFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { m_failures = std::move(value); }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& WithFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { SetFailures(value); return *this;}

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& WithFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& AddFailures(const BatchPermissionsFailureEntry& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& AddFailures(BatchPermissionsFailureEntry&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPermissionsFailureEntry> m_failures;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
