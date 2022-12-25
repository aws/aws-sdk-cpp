/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for a MediaConnect Flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectFlowRequest">AWS
   * API Reference</a></p>
   */
  class MediaConnectFlowRequest
  {
  public:
    AWS_MEDIALIVE_API MediaConnectFlowRequest();
    AWS_MEDIALIVE_API MediaConnectFlowRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaConnectFlowRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline MediaConnectFlowRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline MediaConnectFlowRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the MediaConnect Flow that you want to use as a source.
     */
    inline MediaConnectFlowRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
