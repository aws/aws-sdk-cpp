/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/S3DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/DataSourceType.h>
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
   * <p>Contains details about how a data source is stored.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API DataSourceConfiguration();
    AWS_BEDROCKAGENT_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline void SetS3Configuration(const S3DataSourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline void SetS3Configuration(S3DataSourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(const S3DataSourceConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Contains details about the configuration of the S3 object containing the data
     * source.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(S3DataSourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>The type of storage for the data source.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of storage for the data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of storage for the data source.</p>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of storage for the data source.</p>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of storage for the data source.</p>
     */
    inline DataSourceConfiguration& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of storage for the data source.</p>
     */
    inline DataSourceConfiguration& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
