﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector metadata specific to Amazon Honeycode. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/HoneycodeMetadata">AWS
   * API Reference</a></p>
   */
  class HoneycodeMetadata
  {
  public:
    AWS_APPFLOW_API HoneycodeMetadata();
    AWS_APPFLOW_API HoneycodeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API HoneycodeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The desired authorization scope for the Amazon Honeycode account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const{ return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    inline void SetOAuthScopes(const Aws::Vector<Aws::String>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }
    inline void SetOAuthScopes(Aws::Vector<Aws::String>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }
    inline HoneycodeMetadata& WithOAuthScopes(const Aws::Vector<Aws::String>& value) { SetOAuthScopes(value); return *this;}
    inline HoneycodeMetadata& WithOAuthScopes(Aws::Vector<Aws::String>&& value) { SetOAuthScopes(std::move(value)); return *this;}
    inline HoneycodeMetadata& AddOAuthScopes(const Aws::String& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }
    inline HoneycodeMetadata& AddOAuthScopes(Aws::String&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }
    inline HoneycodeMetadata& AddOAuthScopes(const char* value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
