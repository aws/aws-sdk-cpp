/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class PutMetadataRequest : public IVSRequest
  {
  public:
    AWS_IVS_API PutMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetadata"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline PutMetadataRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline PutMetadataRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the channel into which metadata is inserted. This channel must have an
     * active stream.</p>
     */
    inline PutMetadataRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline PutMetadataRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline PutMetadataRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata to insert into the stream. Maximum: 1 KB per request.</p>
     */
    inline PutMetadataRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
