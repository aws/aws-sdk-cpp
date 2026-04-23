/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes updates to a Java-based Amazon Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationCodeConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationUpdate
  {
  public:
    ApplicationCodeConfigurationUpdate();
    ApplicationCodeConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ApplicationCodeConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline const CodeContentType& GetCodeContentTypeUpdate() const{ return m_codeContentTypeUpdate; }

    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline bool CodeContentTypeUpdateHasBeenSet() const { return m_codeContentTypeUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline void SetCodeContentTypeUpdate(const CodeContentType& value) { m_codeContentTypeUpdateHasBeenSet = true; m_codeContentTypeUpdate = value; }

    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline void SetCodeContentTypeUpdate(CodeContentType&& value) { m_codeContentTypeUpdateHasBeenSet = true; m_codeContentTypeUpdate = std::move(value); }

    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline ApplicationCodeConfigurationUpdate& WithCodeContentTypeUpdate(const CodeContentType& value) { SetCodeContentTypeUpdate(value); return *this;}

    /**
     * <p>Describes updates to the code content type.</p>
     */
    inline ApplicationCodeConfigurationUpdate& WithCodeContentTypeUpdate(CodeContentType&& value) { SetCodeContentTypeUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline const CodeContentUpdate& GetCodeContentUpdate() const{ return m_codeContentUpdate; }

    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline bool CodeContentUpdateHasBeenSet() const { return m_codeContentUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline void SetCodeContentUpdate(const CodeContentUpdate& value) { m_codeContentUpdateHasBeenSet = true; m_codeContentUpdate = value; }

    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline void SetCodeContentUpdate(CodeContentUpdate&& value) { m_codeContentUpdateHasBeenSet = true; m_codeContentUpdate = std::move(value); }

    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline ApplicationCodeConfigurationUpdate& WithCodeContentUpdate(const CodeContentUpdate& value) { SetCodeContentUpdate(value); return *this;}

    /**
     * <p>Describes updates to the code content of an application.</p>
     */
    inline ApplicationCodeConfigurationUpdate& WithCodeContentUpdate(CodeContentUpdate&& value) { SetCodeContentUpdate(std::move(value)); return *this;}

  private:

    CodeContentType m_codeContentTypeUpdate;
    bool m_codeContentTypeUpdateHasBeenSet;

    CodeContentUpdate m_codeContentUpdate;
    bool m_codeContentUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
