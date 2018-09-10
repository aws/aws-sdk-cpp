﻿/*
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LexiconAttributes.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Describes the content of the lexicon.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/LexiconDescription">AWS
   * API Reference</a></p>
   */
  class AWS_POLLY_API LexiconDescription
  {
  public:
    LexiconDescription();
    LexiconDescription(Aws::Utils::Json::JsonView jsonValue);
    LexiconDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the lexicon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline LexiconDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline LexiconDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline LexiconDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline const LexiconAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline void SetAttributes(const LexiconAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline void SetAttributes(LexiconAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline LexiconDescription& WithAttributes(const LexiconAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline LexiconDescription& WithAttributes(LexiconAttributes&& value) { SetAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    LexiconAttributes m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
