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
   * Placeholder documentation for ChannelEgressEndpoint<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ChannelEgressEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ChannelEgressEndpoint
  {
  public:
    ChannelEgressEndpoint();
    ChannelEgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    ChannelEgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Public IP of where a channel's output comes from
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }

    /**
     * Public IP of where a channel's output comes from
     */
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}

    /**
     * Public IP of where a channel's output comes from
     */
    inline ChannelEgressEndpoint& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}

  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
