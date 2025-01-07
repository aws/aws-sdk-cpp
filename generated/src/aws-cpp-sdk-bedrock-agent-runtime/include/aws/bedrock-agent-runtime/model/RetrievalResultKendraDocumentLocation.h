﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The location of a result in Amazon Kendra.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultKendraDocumentLocation">AWS
   * API Reference</a></p>
   */
  class RetrievalResultKendraDocumentLocation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultKendraDocumentLocation();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultKendraDocumentLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultKendraDocumentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The document's uri.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline RetrievalResultKendraDocumentLocation& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline RetrievalResultKendraDocumentLocation& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline RetrievalResultKendraDocumentLocation& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
