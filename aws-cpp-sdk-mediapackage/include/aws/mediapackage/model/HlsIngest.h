/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class HlsIngest
  {
  public:
    AWS_MEDIAPACKAGE_API HlsIngest();
    AWS_MEDIAPACKAGE_API HlsIngest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsIngest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_ingestEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
