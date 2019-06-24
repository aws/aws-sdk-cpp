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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DeleteDocumentRequest : public SSMRequest
  {
  public:
    DeleteDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document.</p>
     */
    inline DeleteDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>(Optional) The version of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>(Optional) The version name of the document that you want to delete. If not
     * provided, all versions of the document are deleted.</p>
     */
    inline DeleteDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
