/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CustomDocumentIdentifier.h>
#include <aws/bedrock-agent/model/ContentDataSourceType.h>
#include <aws/bedrock-agent/model/S3Location.h>
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
   * <p>Contains information that identifies the document.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DocumentIdentifier">AWS
   * API Reference</a></p>
   */
  class DocumentIdentifier
  {
  public:
    AWS_BEDROCKAGENT_API DocumentIdentifier();
    AWS_BEDROCKAGENT_API DocumentIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DocumentIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information that identifies the document in a custom data
     * source.</p>
     */
    inline const CustomDocumentIdentifier& GetCustom() const{ return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    inline void SetCustom(const CustomDocumentIdentifier& value) { m_customHasBeenSet = true; m_custom = value; }
    inline void SetCustom(CustomDocumentIdentifier&& value) { m_customHasBeenSet = true; m_custom = std::move(value); }
    inline DocumentIdentifier& WithCustom(const CustomDocumentIdentifier& value) { SetCustom(value); return *this;}
    inline DocumentIdentifier& WithCustom(CustomDocumentIdentifier&& value) { SetCustom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source connected to the knowledge base that contains the
     * document.</p>
     */
    inline const ContentDataSourceType& GetDataSourceType() const{ return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(const ContentDataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline void SetDataSourceType(ContentDataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }
    inline DocumentIdentifier& WithDataSourceType(const ContentDataSourceType& value) { SetDataSourceType(value); return *this;}
    inline DocumentIdentifier& WithDataSourceType(ContentDataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information that identifies the document in an S3 data source.</p>
     */
    inline const S3Location& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3Location& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3Location&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline DocumentIdentifier& WithS3(const S3Location& value) { SetS3(value); return *this;}
    inline DocumentIdentifier& WithS3(S3Location&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    CustomDocumentIdentifier m_custom;
    bool m_customHasBeenSet = false;

    ContentDataSourceType m_dataSourceType;
    bool m_dataSourceTypeHasBeenSet = false;

    S3Location m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
