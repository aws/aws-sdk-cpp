/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Specifies a Lambda function that verifies requests to a bot or fulfills the
   * user's request to a bot..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CodeHook">AWS
   * API Reference</a></p>
   */
  class CodeHook
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook() = default;
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    CodeHook& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline const Aws::String& GetMessageVersion() const { return m_messageVersion; }
    inline bool MessageVersionHasBeenSet() const { return m_messageVersionHasBeenSet; }
    template<typename MessageVersionT = Aws::String>
    void SetMessageVersion(MessageVersionT&& value) { m_messageVersionHasBeenSet = true; m_messageVersion = std::forward<MessageVersionT>(value); }
    template<typename MessageVersionT = Aws::String>
    CodeHook& WithMessageVersion(MessageVersionT&& value) { SetMessageVersion(std::forward<MessageVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_messageVersion;
    bool m_messageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
