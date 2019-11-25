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
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DeleteMultiplexRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DeleteMultiplexRequest : public MediaLiveRequest
  {
  public:
    DeleteMultiplexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMultiplex"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the multiplex.
     */
    inline const Aws::String& GetMultiplexId() const{ return m_multiplexId; }

    /**
     * The ID of the multiplex.
     */
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }

    /**
     * The ID of the multiplex.
     */
    inline void SetMultiplexId(const Aws::String& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = value; }

    /**
     * The ID of the multiplex.
     */
    inline void SetMultiplexId(Aws::String&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::move(value); }

    /**
     * The ID of the multiplex.
     */
    inline void SetMultiplexId(const char* value) { m_multiplexIdHasBeenSet = true; m_multiplexId.assign(value); }

    /**
     * The ID of the multiplex.
     */
    inline DeleteMultiplexRequest& WithMultiplexId(const Aws::String& value) { SetMultiplexId(value); return *this;}

    /**
     * The ID of the multiplex.
     */
    inline DeleteMultiplexRequest& WithMultiplexId(Aws::String&& value) { SetMultiplexId(std::move(value)); return *this;}

    /**
     * The ID of the multiplex.
     */
    inline DeleteMultiplexRequest& WithMultiplexId(const char* value) { SetMultiplexId(value); return *this;}

  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
