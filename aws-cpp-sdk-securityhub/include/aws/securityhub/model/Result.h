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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the account that wasn't processed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Result">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Result
  {
  public:
    Result();
    Result(Aws::Utils::Json::JsonView jsonValue);
    Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline Result& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline Result& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>An AWS account ID of the account that wasn't be processed.</p>
     */
    inline Result& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline const Aws::String& GetProcessingResult() const{ return m_processingResult; }

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline bool ProcessingResultHasBeenSet() const { return m_processingResultHasBeenSet; }

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline void SetProcessingResult(const Aws::String& value) { m_processingResultHasBeenSet = true; m_processingResult = value; }

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline void SetProcessingResult(Aws::String&& value) { m_processingResultHasBeenSet = true; m_processingResult = std::move(value); }

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline void SetProcessingResult(const char* value) { m_processingResultHasBeenSet = true; m_processingResult.assign(value); }

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline Result& WithProcessingResult(const Aws::String& value) { SetProcessingResult(value); return *this;}

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline Result& WithProcessingResult(Aws::String&& value) { SetProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The reason that the account wasn't be processed.</p>
     */
    inline Result& WithProcessingResult(const char* value) { SetProcessingResult(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_processingResult;
    bool m_processingResultHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
