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
  class AWS_POLLY_API DeleteLexiconRequest : public PollyRequest
  {
  public:
    DeleteLexiconRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline DeleteLexiconRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline DeleteLexiconRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the lexicon to delete. Must be an existing lexicon in the
     * region.</p>
     */
    inline DeleteLexiconRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
