/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/S3Identifier.h>
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
   * <p>Contains information about the API Schema for the Action Group</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/APISchema">AWS
   * API Reference</a></p>
   */
  class APISchema
  {
  public:
    AWS_BEDROCKAGENT_API APISchema();
    AWS_BEDROCKAGENT_API APISchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API APISchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Identifier& GetS3() const{ return m_s3; }

    
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    
    inline void SetS3(const S3Identifier& value) { m_s3HasBeenSet = true; m_s3 = value; }

    
    inline void SetS3(S3Identifier&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    
    inline APISchema& WithS3(const S3Identifier& value) { SetS3(value); return *this;}

    
    inline APISchema& WithS3(S3Identifier&& value) { SetS3(std::move(value)); return *this;}


    
    inline const Aws::String& GetPayload() const{ return m_payload; }

    
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    
    inline APISchema& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    
    inline APISchema& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    
    inline APISchema& WithPayload(const char* value) { SetPayload(value); return *this;}

  private:

    S3Identifier m_s3;
    bool m_s3HasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
