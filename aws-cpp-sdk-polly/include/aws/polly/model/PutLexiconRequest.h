/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{

  /**
   */
  class AWS_POLLY_API PutLexiconRequest : public PollyRequest
  {
  public:
    PutLexiconRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline PutLexiconRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline PutLexiconRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon. The name must follow the regular express format
     * [0-9A-Za-z]{1,20}. That is, the name is a case-sensitive alphanumeric string up
     * to 20 characters long. </p>
     */
    inline PutLexiconRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline PutLexiconRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline PutLexiconRequest& WithContent(Aws::String&& value) { SetContent(value); return *this;}

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline PutLexiconRequest& WithContent(const char* value) { SetContent(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
