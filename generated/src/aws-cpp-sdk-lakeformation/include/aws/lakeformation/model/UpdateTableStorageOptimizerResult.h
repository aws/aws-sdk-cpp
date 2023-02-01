/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{
  class UpdateTableStorageOptimizerResult
  {
  public:
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult();
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline void SetResult(const Aws::String& value) { m_result = value; }

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline void SetResult(const char* value) { m_result.assign(value); }

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline UpdateTableStorageOptimizerResult& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline UpdateTableStorageOptimizerResult& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>A response indicating the success of failure of the operation.</p>
     */
    inline UpdateTableStorageOptimizerResult& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    Aws::String m_result;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
