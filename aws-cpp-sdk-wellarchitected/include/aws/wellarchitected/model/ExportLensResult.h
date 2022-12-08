/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{
  class ExportLensResult
  {
  public:
    AWS_WELLARCHITECTED_API ExportLensResult();
    AWS_WELLARCHITECTED_API ExportLensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ExportLensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The JSON for the lens.</p>
     */
    inline const Aws::String& GetLensJSON() const{ return m_lensJSON; }

    /**
     * <p>The JSON for the lens.</p>
     */
    inline void SetLensJSON(const Aws::String& value) { m_lensJSON = value; }

    /**
     * <p>The JSON for the lens.</p>
     */
    inline void SetLensJSON(Aws::String&& value) { m_lensJSON = std::move(value); }

    /**
     * <p>The JSON for the lens.</p>
     */
    inline void SetLensJSON(const char* value) { m_lensJSON.assign(value); }

    /**
     * <p>The JSON for the lens.</p>
     */
    inline ExportLensResult& WithLensJSON(const Aws::String& value) { SetLensJSON(value); return *this;}

    /**
     * <p>The JSON for the lens.</p>
     */
    inline ExportLensResult& WithLensJSON(Aws::String&& value) { SetLensJSON(std::move(value)); return *this;}

    /**
     * <p>The JSON for the lens.</p>
     */
    inline ExportLensResult& WithLensJSON(const char* value) { SetLensJSON(value); return *this;}

  private:

    Aws::String m_lensJSON;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
