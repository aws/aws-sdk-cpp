/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreateCustomEntityTypeRequest : public GlueRequest
  {
  public:
    CreateCustomEntityTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomEntityType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateCustomEntityTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateCustomEntityTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateCustomEntityTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    
    inline CreateCustomEntityTypeRequest& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    
    inline CreateCustomEntityTypeRequest& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    
    inline CreateCustomEntityTypeRequest& WithRegexString(const char* value) { SetRegexString(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetContextWords() const{ return m_contextWords; }

    
    inline bool ContextWordsHasBeenSet() const { return m_contextWordsHasBeenSet; }

    
    inline void SetContextWords(const Aws::Vector<Aws::String>& value) { m_contextWordsHasBeenSet = true; m_contextWords = value; }

    
    inline void SetContextWords(Aws::Vector<Aws::String>&& value) { m_contextWordsHasBeenSet = true; m_contextWords = std::move(value); }

    
    inline CreateCustomEntityTypeRequest& WithContextWords(const Aws::Vector<Aws::String>& value) { SetContextWords(value); return *this;}

    
    inline CreateCustomEntityTypeRequest& WithContextWords(Aws::Vector<Aws::String>&& value) { SetContextWords(std::move(value)); return *this;}

    
    inline CreateCustomEntityTypeRequest& AddContextWords(const Aws::String& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }

    
    inline CreateCustomEntityTypeRequest& AddContextWords(Aws::String&& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(std::move(value)); return *this; }

    
    inline CreateCustomEntityTypeRequest& AddContextWords(const char* value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet;

    Aws::Vector<Aws::String> m_contextWords;
    bool m_contextWordsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
