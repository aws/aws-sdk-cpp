/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class ImportApplicationUsageResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API ImportApplicationUsageResult();
    AWS_APPLICATIONCOSTPROFILER_API ImportApplicationUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API ImportApplicationUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the import request.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>ID of the import request.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importId = value; }

    /**
     * <p>ID of the import request.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }

    /**
     * <p>ID of the import request.</p>
     */
    inline void SetImportId(const char* value) { m_importId.assign(value); }

    /**
     * <p>ID of the import request.</p>
     */
    inline ImportApplicationUsageResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>ID of the import request.</p>
     */
    inline ImportApplicationUsageResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>ID of the import request.</p>
     */
    inline ImportApplicationUsageResult& WithImportId(const char* value) { SetImportId(value); return *this;}

  private:

    Aws::String m_importId;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
