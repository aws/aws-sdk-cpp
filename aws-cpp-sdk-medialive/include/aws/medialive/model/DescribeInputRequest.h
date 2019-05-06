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
   * Placeholder documentation for DescribeInputRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DescribeInputRequest : public MediaLiveRequest
  {
  public:
    DescribeInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInput"; }

    Aws::String SerializePayload() const override;


    /**
     * Unique ID of the input
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * Unique ID of the input
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * Unique ID of the input
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * Unique ID of the input
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * Unique ID of the input
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * Unique ID of the input
     */
    inline DescribeInputRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * Unique ID of the input
     */
    inline DescribeInputRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * Unique ID of the input
     */
    inline DescribeInputRequest& WithInputId(const char* value) { SetInputId(value); return *this;}

  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
