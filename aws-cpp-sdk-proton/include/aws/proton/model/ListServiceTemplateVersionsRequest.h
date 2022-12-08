/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListServiceTemplateVersionsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListServiceTemplateVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceTemplateVersions"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>To view a list of minor of versions under a major version of a service
     * template, include <code>major Version</code>.</p> <p>To view a list of major
     * versions of a service template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>The maximum number of major or minor versions of a service template to
     * list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of major or minor versions of a service template to
     * list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of major or minor versions of a service template to
     * list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of major or minor versions of a service template to
     * list.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the list of major
     * or minor versions that was previously requested.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the service template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline ListServiceTemplateVersionsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
