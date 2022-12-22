/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{
  class RemoveFlowMediaStreamResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowMediaStreamResult();
    AWS_MEDIACONNECT_API RemoveFlowMediaStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveFlowMediaStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline RemoveFlowMediaStreamResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The name of the media stream that was removed.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream that was removed.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamName = value; }

    /**
     * The name of the media stream that was removed.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream that was removed.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream that was removed.
     */
    inline RemoveFlowMediaStreamResult& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream that was removed.
     */
    inline RemoveFlowMediaStreamResult& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream that was removed.
     */
    inline RemoveFlowMediaStreamResult& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::String m_mediaStreamName;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
