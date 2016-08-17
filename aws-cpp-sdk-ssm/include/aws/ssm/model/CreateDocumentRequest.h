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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateDocumentRequest : public SSMRequest
  {
  public:
    CreateDocumentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A valid JSON string.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>A valid JSON string.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>A valid JSON string.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>A valid JSON string.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>A valid JSON string.</p>
     */
    inline CreateDocumentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>A valid JSON string.</p>
     */
    inline CreateDocumentRequest& WithContent(Aws::String&& value) { SetContent(value); return *this;}

    /**
     * <p>A valid JSON string.</p>
     */
    inline CreateDocumentRequest& WithContent(const char* value) { SetContent(value); return *this;}

    /**
     * <p>A name for the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the SSM document.</p>
     */
    inline CreateDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the SSM document.</p>
     */
    inline CreateDocumentRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A name for the SSM document.</p>
     */
    inline CreateDocumentRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_content;
    bool m_contentHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
