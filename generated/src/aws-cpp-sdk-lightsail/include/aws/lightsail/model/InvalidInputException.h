/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Lightsail throws this exception when user input does not conform to the
   * validation rules of an input field.</p>  <p>Domain and distribution APIs
   * are only available in the N. Virginia (<code>us-east-1</code>) Amazon Web
   * Services Region. Please set your Amazon Web Services Region configuration to
   * <code>us-east-1</code> to create, view, or edit these resources.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InvalidInputException">AWS
   * API Reference</a></p>
   */
  class InvalidInputException
  {
  public:
    AWS_LIGHTSAIL_API InvalidInputException() = default;
    AWS_LIGHTSAIL_API InvalidInputException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InvalidInputException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    InvalidInputException& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDocs() const { return m_docs; }
    inline bool DocsHasBeenSet() const { return m_docsHasBeenSet; }
    template<typename DocsT = Aws::String>
    void SetDocs(DocsT&& value) { m_docsHasBeenSet = true; m_docs = std::forward<DocsT>(value); }
    template<typename DocsT = Aws::String>
    InvalidInputException& WithDocs(DocsT&& value) { SetDocs(std::forward<DocsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidInputException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTip() const { return m_tip; }
    inline bool TipHasBeenSet() const { return m_tipHasBeenSet; }
    template<typename TipT = Aws::String>
    void SetTip(TipT&& value) { m_tipHasBeenSet = true; m_tip = std::forward<TipT>(value); }
    template<typename TipT = Aws::String>
    InvalidInputException& WithTip(TipT&& value) { SetTip(std::forward<TipT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_docs;
    bool m_docsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_tip;
    bool m_tipHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
