﻿/**
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
   * <p>Lightsail throws this exception when an account is still in the setup in
   * progress state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AccountSetupInProgressException">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API AccountSetupInProgressException
  {
  public:
    AccountSetupInProgressException();
    AccountSetupInProgressException(Aws::Utils::Json::JsonView jsonValue);
    AccountSetupInProgressException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline AccountSetupInProgressException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline AccountSetupInProgressException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline AccountSetupInProgressException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetDocs() const{ return m_docs; }

    
    inline bool DocsHasBeenSet() const { return m_docsHasBeenSet; }

    
    inline void SetDocs(const Aws::String& value) { m_docsHasBeenSet = true; m_docs = value; }

    
    inline void SetDocs(Aws::String&& value) { m_docsHasBeenSet = true; m_docs = std::move(value); }

    
    inline void SetDocs(const char* value) { m_docsHasBeenSet = true; m_docs.assign(value); }

    
    inline AccountSetupInProgressException& WithDocs(const Aws::String& value) { SetDocs(value); return *this;}

    
    inline AccountSetupInProgressException& WithDocs(Aws::String&& value) { SetDocs(std::move(value)); return *this;}

    
    inline AccountSetupInProgressException& WithDocs(const char* value) { SetDocs(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccountSetupInProgressException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccountSetupInProgressException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccountSetupInProgressException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetTip() const{ return m_tip; }

    
    inline bool TipHasBeenSet() const { return m_tipHasBeenSet; }

    
    inline void SetTip(const Aws::String& value) { m_tipHasBeenSet = true; m_tip = value; }

    
    inline void SetTip(Aws::String&& value) { m_tipHasBeenSet = true; m_tip = std::move(value); }

    
    inline void SetTip(const char* value) { m_tipHasBeenSet = true; m_tip.assign(value); }

    
    inline AccountSetupInProgressException& WithTip(const Aws::String& value) { SetTip(value); return *this;}

    
    inline AccountSetupInProgressException& WithTip(Aws::String&& value) { SetTip(std::move(value)); return *this;}

    
    inline AccountSetupInProgressException& WithTip(const char* value) { SetTip(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_docs;
    bool m_docsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_tip;
    bool m_tipHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
