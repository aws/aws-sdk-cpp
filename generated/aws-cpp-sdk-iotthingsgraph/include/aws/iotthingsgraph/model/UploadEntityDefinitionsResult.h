/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API UploadEntityDefinitionsResult
  {
  public:
    UploadEntityDefinitionsResult();
    UploadEntityDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UploadEntityDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline UploadEntityDefinitionsResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline UploadEntityDefinitionsResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The ID that specifies the upload action. You can use this to track the status
     * of the upload.</p>
     */
    inline UploadEntityDefinitionsResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}

  private:

    Aws::String m_uploadId;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
