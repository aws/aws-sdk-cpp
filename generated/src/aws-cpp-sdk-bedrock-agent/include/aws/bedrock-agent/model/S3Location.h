/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>An Amazon S3 location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_BEDROCKAGENT_API S3Location();
    AWS_BEDROCKAGENT_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location's URI. For example,
     * <code>s3://my-bucket/chunk-processor/</code>.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline S3Location& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline S3Location& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline S3Location& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
