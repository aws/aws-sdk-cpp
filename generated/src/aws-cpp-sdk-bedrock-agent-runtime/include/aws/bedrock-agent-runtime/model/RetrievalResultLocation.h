/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultS3Location.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultLocationType.h>
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
   * <p>Contains information about the location of the data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultLocation">AWS
   * API Reference</a></p>
   */
  class RetrievalResultLocation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline const RetrievalResultS3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline void SetS3Location(const RetrievalResultS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline void SetS3Location(RetrievalResultS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline RetrievalResultLocation& WithS3Location(const RetrievalResultS3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>Contains the S3 location of the data source.</p>
     */
    inline RetrievalResultLocation& WithS3Location(RetrievalResultS3Location&& value) { SetS3Location(std::move(value)); return *this;}


    /**
     * <p>The type of the location of the data source.</p>
     */
    inline const RetrievalResultLocationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the location of the data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the location of the data source.</p>
     */
    inline void SetType(const RetrievalResultLocationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the location of the data source.</p>
     */
    inline void SetType(RetrievalResultLocationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the location of the data source.</p>
     */
    inline RetrievalResultLocation& WithType(const RetrievalResultLocationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the location of the data source.</p>
     */
    inline RetrievalResultLocation& WithType(RetrievalResultLocationType&& value) { SetType(std::move(value)); return *this;}

  private:

    RetrievalResultS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    RetrievalResultLocationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
