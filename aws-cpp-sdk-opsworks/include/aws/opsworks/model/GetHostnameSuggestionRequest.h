﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API GetHostnameSuggestionRequest : public OpsWorksRequest
  {
  public:
    GetHostnameSuggestionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostnameSuggestion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The layer ID.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The layer ID.</p>
     */
    inline GetHostnameSuggestionRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}

  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
