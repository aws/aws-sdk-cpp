/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API CustomEntityType
  {
  public:
    CustomEntityType();
    CustomEntityType(Aws::Utils::Json::JsonView jsonValue);
    CustomEntityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CustomEntityType& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CustomEntityType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CustomEntityType& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    
    inline CustomEntityType& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    
    inline CustomEntityType& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    
    inline CustomEntityType& WithRegexString(const char* value) { SetRegexString(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetContextWords() const{ return m_contextWords; }

    
    inline bool ContextWordsHasBeenSet() const { return m_contextWordsHasBeenSet; }

    
    inline void SetContextWords(const Aws::Vector<Aws::String>& value) { m_contextWordsHasBeenSet = true; m_contextWords = value; }

    
    inline void SetContextWords(Aws::Vector<Aws::String>&& value) { m_contextWordsHasBeenSet = true; m_contextWords = std::move(value); }

    
    inline CustomEntityType& WithContextWords(const Aws::Vector<Aws::String>& value) { SetContextWords(value); return *this;}

    
    inline CustomEntityType& WithContextWords(Aws::Vector<Aws::String>&& value) { SetContextWords(std::move(value)); return *this;}

    
    inline CustomEntityType& AddContextWords(const Aws::String& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }

    
    inline CustomEntityType& AddContextWords(Aws::String&& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(std::move(value)); return *this; }

    
    inline CustomEntityType& AddContextWords(const char* value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }

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
