/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Placeholder documentation for DeleteInputRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputRequest">AWS
   * API Reference</a></p>
   */
  class DeleteInputRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DeleteInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInput"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


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
    inline DeleteInputRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * Unique ID of the input
     */
    inline DeleteInputRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * Unique ID of the input
     */
    inline DeleteInputRequest& WithInputId(const char* value) { SetInputId(value); return *this;}

  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
