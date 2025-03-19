/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class ConfirmTopicRuleDestinationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ConfirmTopicRuleDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmTopicRuleDestination"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The token used to confirm ownership or access to the topic rule confirmation
     * URL.</p>
     */
    inline const Aws::String& GetConfirmationToken() const { return m_confirmationToken; }
    inline bool ConfirmationTokenHasBeenSet() const { return m_confirmationTokenHasBeenSet; }
    template<typename ConfirmationTokenT = Aws::String>
    void SetConfirmationToken(ConfirmationTokenT&& value) { m_confirmationTokenHasBeenSet = true; m_confirmationToken = std::forward<ConfirmationTokenT>(value); }
    template<typename ConfirmationTokenT = Aws::String>
    ConfirmTopicRuleDestinationRequest& WithConfirmationToken(ConfirmationTokenT&& value) { SetConfirmationToken(std::forward<ConfirmationTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_confirmationToken;
    bool m_confirmationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
