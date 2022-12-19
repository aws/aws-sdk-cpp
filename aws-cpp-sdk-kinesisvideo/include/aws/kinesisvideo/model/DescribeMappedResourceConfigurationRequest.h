/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class DescribeMappedResourceConfigurationRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMappedResourceConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to provide in your next request, to get another batch of
     * results.</p>
     */
    inline DescribeMappedResourceConfigurationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
