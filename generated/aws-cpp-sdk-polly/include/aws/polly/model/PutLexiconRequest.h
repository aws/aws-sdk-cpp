/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLexicon"; }

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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline PutLexiconRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

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
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Content of the PLS lexicon as string data.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

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
    inline PutLexiconRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

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
