/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class CreateDatasetContentResult
  {
  public:
    AWS_IOTANALYTICS_API CreateDatasetContentResult();
    AWS_IOTANALYTICS_API CreateDatasetContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API CreateDatasetContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline CreateDatasetContentResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline CreateDatasetContentResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID of the dataset contents that are being created.</p>
     */
    inline CreateDatasetContentResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_versionId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
