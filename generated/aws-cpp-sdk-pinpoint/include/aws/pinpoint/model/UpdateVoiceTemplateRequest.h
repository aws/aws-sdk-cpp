﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/VoiceTemplateRequest.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API UpdateVoiceTemplateRequest : public PinpointRequest
  {
  public:
    UpdateVoiceTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVoiceTemplate"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies whether to save the updates as a new version of the message
     * template. Valid values are: true, save the updates as a new version; and, false,
     * save the updates to (overwrite) the latest existing version of the template.</p>
     * <p>If you don't specify a value for this parameter, Amazon Pinpoint saves the
     * updates to (overwrites) the latest existing version of the template. If you
     * specify a value of true for this parameter, don't specify a value for the
     * version parameter. Otherwise, an error will occur.</p>
     */
    inline bool GetCreateNewVersion() const{ return m_createNewVersion; }

    /**
     * <p>Specifies whether to save the updates as a new version of the message
     * template. Valid values are: true, save the updates as a new version; and, false,
     * save the updates to (overwrite) the latest existing version of the template.</p>
     * <p>If you don't specify a value for this parameter, Amazon Pinpoint saves the
     * updates to (overwrites) the latest existing version of the template. If you
     * specify a value of true for this parameter, don't specify a value for the
     * version parameter. Otherwise, an error will occur.</p>
     */
    inline bool CreateNewVersionHasBeenSet() const { return m_createNewVersionHasBeenSet; }

    /**
     * <p>Specifies whether to save the updates as a new version of the message
     * template. Valid values are: true, save the updates as a new version; and, false,
     * save the updates to (overwrite) the latest existing version of the template.</p>
     * <p>If you don't specify a value for this parameter, Amazon Pinpoint saves the
     * updates to (overwrites) the latest existing version of the template. If you
     * specify a value of true for this parameter, don't specify a value for the
     * version parameter. Otherwise, an error will occur.</p>
     */
    inline void SetCreateNewVersion(bool value) { m_createNewVersionHasBeenSet = true; m_createNewVersion = value; }

    /**
     * <p>Specifies whether to save the updates as a new version of the message
     * template. Valid values are: true, save the updates as a new version; and, false,
     * save the updates to (overwrite) the latest existing version of the template.</p>
     * <p>If you don't specify a value for this parameter, Amazon Pinpoint saves the
     * updates to (overwrites) the latest existing version of the template. If you
     * specify a value of true for this parameter, don't specify a value for the
     * version parameter. Otherwise, an error will occur.</p>
     */
    inline UpdateVoiceTemplateRequest& WithCreateNewVersion(bool value) { SetCreateNewVersion(value); return *this;}


    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdateVoiceTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdateVoiceTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdateVoiceTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline UpdateVoiceTemplateRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline UpdateVoiceTemplateRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the version of the message template to update,
     * retrieve information about, or delete. To retrieve identifiers and other
     * information for all the versions of a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If specified, this value must match the
     * identifier for an existing template version. If specified for an update
     * operation, this value must match the identifier for the latest existing version
     * of the template. This restriction helps ensure that race conditions don't
     * occur.</p> <p>If you don't specify a value for this parameter, Amazon Pinpoint
     * does the following:</p> <ul><li><p>For a get operation, retrieves information
     * about the active version of the template.</p></li> <li><p>For an update
     * operation, saves the updates to (overwrites) the latest existing version of the
     * template, if the create-new-version parameter isn't used or is set to
     * false.</p></li> <li><p>For a delete operation, deletes the template, including
     * all versions of the template.</p></li></ul>
     */
    inline UpdateVoiceTemplateRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const VoiceTemplateRequest& GetVoiceTemplateRequest() const{ return m_voiceTemplateRequest; }

    
    inline bool VoiceTemplateRequestHasBeenSet() const { return m_voiceTemplateRequestHasBeenSet; }

    
    inline void SetVoiceTemplateRequest(const VoiceTemplateRequest& value) { m_voiceTemplateRequestHasBeenSet = true; m_voiceTemplateRequest = value; }

    
    inline void SetVoiceTemplateRequest(VoiceTemplateRequest&& value) { m_voiceTemplateRequestHasBeenSet = true; m_voiceTemplateRequest = std::move(value); }

    
    inline UpdateVoiceTemplateRequest& WithVoiceTemplateRequest(const VoiceTemplateRequest& value) { SetVoiceTemplateRequest(value); return *this;}

    
    inline UpdateVoiceTemplateRequest& WithVoiceTemplateRequest(VoiceTemplateRequest&& value) { SetVoiceTemplateRequest(std::move(value)); return *this;}

  private:

    bool m_createNewVersion;
    bool m_createNewVersionHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    VoiceTemplateRequest m_voiceTemplateRequest;
    bool m_voiceTemplateRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
