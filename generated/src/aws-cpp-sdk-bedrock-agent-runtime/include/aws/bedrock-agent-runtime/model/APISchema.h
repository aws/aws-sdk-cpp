/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/S3Identifier.h>
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
   * <p> Contains details about the OpenAPI schema for the action group. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-api-schema.html">Action
   * group OpenAPI schemas</a>. You can either include the schema directly in the
   * payload field or you can upload it to an S3 bucket and specify the S3 bucket
   * location in the s3 field. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/APISchema">AWS
   * API Reference</a></p>
   */
  class APISchema
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API APISchema() = default;
    AWS_BEDROCKAGENTRUNTIME_API APISchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API APISchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Contains details about the S3 object containing the OpenAPI schema for the
     * action group. </p>
     */
    inline const S3Identifier& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Identifier>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Identifier>
    APISchema& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The JSON or YAML-formatted payload defining the OpenAPI schema for the
     * action group. </p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    APISchema& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    S3Identifier m_s3;
    bool m_s3HasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
