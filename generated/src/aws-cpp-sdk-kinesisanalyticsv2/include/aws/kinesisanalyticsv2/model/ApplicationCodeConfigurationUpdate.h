/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CodeContentType.h>
#include <aws/kinesisanalyticsv2/model/CodeContentUpdate.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes code configuration updates for an application. This is supported
   * for a Managed Service for Apache Flink application or a SQL-based Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationCodeConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationCodeConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline CodeContentType GetCodeContentTypeUpdate() const { return m_codeContentTypeUpdate; }
    inline bool CodeContentTypeUpdateHasBeenSet() const { return m_codeContentTypeUpdateHasBeenSet; }
    inline void SetCodeContentTypeUpdate(CodeContentType value) { m_codeContentTypeUpdateHasBeenSet = true; m_codeContentTypeUpdate = value; }
    inline ApplicationCodeConfigurationUpdate& WithCodeContentTypeUpdate(CodeContentType value) { SetCodeContentTypeUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline const CodeContentUpdate& GetCodeContentUpdate() const { return m_codeContentUpdate; }
    inline bool CodeContentUpdateHasBeenSet() const { return m_codeContentUpdateHasBeenSet; }
    template<typename CodeContentUpdateT = CodeContentUpdate>
    void SetCodeContentUpdate(CodeContentUpdateT&& value) { m_codeContentUpdateHasBeenSet = true; m_codeContentUpdate = std::forward<CodeContentUpdateT>(value); }
    template<typename CodeContentUpdateT = CodeContentUpdate>
    ApplicationCodeConfigurationUpdate& WithCodeContentUpdate(CodeContentUpdateT&& value) { SetCodeContentUpdate(std::forward<CodeContentUpdateT>(value)); return *this;}
    ///@}
  private:

    CodeContentType m_codeContentTypeUpdate{CodeContentType::NOT_SET};
    bool m_codeContentTypeUpdateHasBeenSet = false;

    CodeContentUpdate m_codeContentUpdate;
    bool m_codeContentUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
