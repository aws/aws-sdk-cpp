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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class AWS_MEDIAPACKAGE_API RotateIngestEndpointCredentialsRequest : public MediaPackageRequest
  {
  public:
    RotateIngestEndpointCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RotateIngestEndpointCredentials"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline RotateIngestEndpointCredentialsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline RotateIngestEndpointCredentialsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline RotateIngestEndpointCredentialsRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline const Aws::String& GetIngestEndpointId() const{ return m_ingestEndpointId; }

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline bool IngestEndpointIdHasBeenSet() const { return m_ingestEndpointIdHasBeenSet; }

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline void SetIngestEndpointId(const Aws::String& value) { m_ingestEndpointIdHasBeenSet = true; m_ingestEndpointId = value; }

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline void SetIngestEndpointId(Aws::String&& value) { m_ingestEndpointIdHasBeenSet = true; m_ingestEndpointId = std::move(value); }

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline void SetIngestEndpointId(const char* value) { m_ingestEndpointIdHasBeenSet = true; m_ingestEndpointId.assign(value); }

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline RotateIngestEndpointCredentialsRequest& WithIngestEndpointId(const Aws::String& value) { SetIngestEndpointId(value); return *this;}

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline RotateIngestEndpointCredentialsRequest& WithIngestEndpointId(Aws::String&& value) { SetIngestEndpointId(std::move(value)); return *this;}

    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline RotateIngestEndpointCredentialsRequest& WithIngestEndpointId(const char* value) { SetIngestEndpointId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_ingestEndpointId;
    bool m_ingestEndpointIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
