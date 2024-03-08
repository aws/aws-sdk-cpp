/**
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
   * <p>Contains the S3 location of the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultS3Location">AWS
   * API Reference</a></p>
   */
  class RetrievalResultS3Location
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultS3Location();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline RetrievalResultS3Location& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline RetrievalResultS3Location& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI of the data source.</p>
     */
    inline RetrievalResultS3Location& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
