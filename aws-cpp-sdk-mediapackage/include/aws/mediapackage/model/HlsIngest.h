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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/IngestEndpoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaPackage
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) ingest resource configuration.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsIngest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API HlsIngest
  {
  public:
    HlsIngest();
    HlsIngest(Aws::Utils::Json::JsonView jsonValue);
    HlsIngest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline const Aws::Vector<IngestEndpoint>& GetIngestEndpoints() const{ return m_ingestEndpoints; }

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline bool IngestEndpointsHasBeenSet() const { return m_ingestEndpointsHasBeenSet; }

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline void SetIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints = value; }

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline void SetIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints = std::move(value); }

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline HlsIngest& WithIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { SetIngestEndpoints(value); return *this;}

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline HlsIngest& WithIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { SetIngestEndpoints(std::move(value)); return *this;}

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline HlsIngest& AddIngestEndpoints(const IngestEndpoint& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints.push_back(value); return *this; }

    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline HlsIngest& AddIngestEndpoints(IngestEndpoint&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IngestEndpoint> m_ingestEndpoints;
    bool m_ingestEndpointsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
