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
  class AWS_SSM_API GetDocumentRequest : public SSMRequest
  {
  public:
    GetDocumentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The document version for which you want information.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version for which you want information.</p>
     */
    inline GetDocumentRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
