/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
