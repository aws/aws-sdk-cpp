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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Errors that occurred during the portfolio share operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ShareError">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ShareError
  {
  public:
    ShareError();
    ShareError(Aws::Utils::Json::JsonView jsonValue);
    ShareError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline ShareError& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline ShareError& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline ShareError& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline ShareError& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline ShareError& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>Information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Information about the error.</p>
     */
    inline ShareError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about the error.</p>
     */
    inline ShareError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about the error.</p>
     */
    inline ShareError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline ShareError& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline ShareError& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline ShareError& WithError(const char* value) { SetError(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_error;
    bool m_errorHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
