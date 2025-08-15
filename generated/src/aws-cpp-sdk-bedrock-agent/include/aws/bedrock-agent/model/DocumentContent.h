/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ContentDataSourceType.h>
#include <aws/bedrock-agent/model/CustomContent.h>
#include <aws/bedrock-agent/model/S3Content.h>
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
   * <p>Contains information about the content of a document. Choose a
   * <code>dataSourceType</code> and include the field that corresponds to
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DocumentContent">AWS
   * API Reference</a></p>
   */
  class DocumentContent
  {
  public:
    AWS_BEDROCKAGENT_API DocumentContent() = default;
    AWS_BEDROCKAGENT_API DocumentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DocumentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source that is connected to the knowledge base to which to
     * ingest this document.</p>
     */
    inline ContentDataSourceType GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(ContentDataSourceType value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline DocumentContent& WithDataSourceType(ContentDataSourceType value) { SetDataSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the content to ingest into a knowledge base
     * connected to a custom data source.</p>
     */
    inline const CustomContent& GetCustom() const { return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    template<typename CustomT = CustomContent>
    void SetCustom(CustomT&& value) { m_customHasBeenSet = true; m_custom = std::forward<CustomT>(value); }
    template<typename CustomT = CustomContent>
    DocumentContent& WithCustom(CustomT&& value) { SetCustom(std::forward<CustomT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the content to ingest into a knowledge base
     * connected to an Amazon S3 data source</p>
     */
    inline const S3Content& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Content>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Content>
    DocumentContent& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    ContentDataSourceType m_dataSourceType{ContentDataSourceType::NOT_SET};
    bool m_dataSourceTypeHasBeenSet = false;

    CustomContent m_custom;
    bool m_customHasBeenSet = false;

    S3Content m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
