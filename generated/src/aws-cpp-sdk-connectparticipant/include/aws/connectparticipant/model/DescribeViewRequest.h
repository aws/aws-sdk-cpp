/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class DescribeViewRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API DescribeViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeView"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline const Aws::String& GetViewToken() const { return m_viewToken; }
    inline bool ViewTokenHasBeenSet() const { return m_viewTokenHasBeenSet; }
    template<typename ViewTokenT = Aws::String>
    void SetViewToken(ViewTokenT&& value) { m_viewTokenHasBeenSet = true; m_viewToken = std::forward<ViewTokenT>(value); }
    template<typename ViewTokenT = Aws::String>
    DescribeViewRequest& WithViewToken(ViewTokenT&& value) { SetViewToken(std::forward<ViewTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection token.</p>
     */
    inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    template<typename ConnectionTokenT = Aws::String>
    void SetConnectionToken(ConnectionTokenT&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::forward<ConnectionTokenT>(value); }
    template<typename ConnectionTokenT = Aws::String>
    DescribeViewRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_viewToken;
    bool m_viewTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
