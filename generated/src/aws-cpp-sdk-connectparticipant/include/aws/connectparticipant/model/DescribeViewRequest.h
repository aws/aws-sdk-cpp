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
    AWS_CONNECTPARTICIPANT_API DescribeViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeView"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline const Aws::String& GetViewToken() const{ return m_viewToken; }

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline bool ViewTokenHasBeenSet() const { return m_viewTokenHasBeenSet; }

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline void SetViewToken(const Aws::String& value) { m_viewTokenHasBeenSet = true; m_viewToken = value; }

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline void SetViewToken(Aws::String&& value) { m_viewTokenHasBeenSet = true; m_viewToken = std::move(value); }

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline void SetViewToken(const char* value) { m_viewTokenHasBeenSet = true; m_viewToken.assign(value); }

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline DescribeViewRequest& WithViewToken(const Aws::String& value) { SetViewToken(value); return *this;}

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline DescribeViewRequest& WithViewToken(Aws::String&& value) { SetViewToken(std::move(value)); return *this;}

    /**
     * <p>An encrypted token originating from the interactive message of a ShowView
     * block operation. Represents the desired view.</p>
     */
    inline DescribeViewRequest& WithViewToken(const char* value) { SetViewToken(value); return *this;}


    /**
     * <p>The connection token.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }

    /**
     * <p>The connection token.</p>
     */
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }

    /**
     * <p>The connection token.</p>
     */
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }

    /**
     * <p>The connection token.</p>
     */
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }

    /**
     * <p>The connection token.</p>
     */
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }

    /**
     * <p>The connection token.</p>
     */
    inline DescribeViewRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The connection token.</p>
     */
    inline DescribeViewRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The connection token.</p>
     */
    inline DescribeViewRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_viewToken;
    bool m_viewTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
