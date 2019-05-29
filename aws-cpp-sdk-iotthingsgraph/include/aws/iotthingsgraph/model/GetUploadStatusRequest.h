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
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API GetUploadStatusRequest : public IoTThingsGraphRequest
  {
  public:
    GetUploadStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUploadStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline GetUploadStatusRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline GetUploadStatusRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the upload. This value is returned by the
     * <code>UploadEntityDefinitions</code> action.</p>
     */
    inline GetUploadStatusRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

  private:

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
