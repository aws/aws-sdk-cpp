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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API SendCommandRequest : public SSMRequest
  {
  public:
    SendCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCommand"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance IDs where the command should run. You can specify a maximum of
     * 50 IDs. If you prefer not to list individual instance IDs, you can instead send
     * commands to a fleet of instances using the Targets parameter, which accepts EC2
     * tags. For more information about how to use targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of search criteria that targets instances using a
     * Key,Value combination that you specify. Targets is required if you don't provide
     * one or more instance IDs in the call. For more information about how to use
     * targets, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * Commands to a Fleet</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>Required. The name of the Systems Manager document to run. This can be a
     * public document or a custom document.</p>
     */
    inline SendCommandRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the AWS CLI,
     * then you must escape the first two options by using a backslash. If you specify
     * a version number, then you don't need to use the backslash. For example:</p>
     * <p>--document-version "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p>
     * <p>--document-version "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const Aws::String& GetDocumentHash() const{ return m_documentHash; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(const Aws::String& value) { m_documentHashHasBeenSet = true; m_documentHash = value; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(Aws::String&& value) { m_documentHashHasBeenSet = true; m_documentHash = std::move(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHash(const char* value) { m_documentHashHasBeenSet = true; m_documentHash.assign(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(const Aws::String& value) { SetDocumentHash(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(Aws::String&& value) { SetDocumentHash(std::move(value)); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHash(const char* value) { SetDocumentHash(value); return *this;}


    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const DocumentHashType& GetDocumentHashType() const{ return m_documentHashType; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline bool DocumentHashTypeHasBeenSet() const { return m_documentHashTypeHasBeenSet; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHashType(const DocumentHashType& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetDocumentHashType(DocumentHashType&& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = std::move(value); }

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHashType(const DocumentHashType& value) { SetDocumentHashType(value); return *this;}

    /**
     * <p>Sha256 or Sha1.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline SendCommandRequest& WithDocumentHashType(DocumentHashType&& value) { SetDocumentHashType(std::move(value)); return *this;}


    /**
     * <p>If this time is reached and the command has not already started running, it
     * will not run.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * will not run.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * will not run.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>If this time is reached and the command has not already started running, it
     * will not run.</p>
     */
    inline SendCommandRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}


    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline SendCommandRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline SendCommandRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline SendCommandRequest& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline SendCommandRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::move(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline SendCommandRequest& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline SendCommandRequest& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon S3 bucket
     * region.</p>
     */
    inline SendCommandRequest& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}


    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}


    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline SendCommandRequest& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}


    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of instances that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is 50. For more information about how to use
     * MaxConcurrency, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * Concurrency Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of MaxErrors, the systems stops
     * sending the command to additional targets. You can specify a number like 10 or a
     * percentage like 10%. The default value is 0. For more information about how to
     * use MaxErrors, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * Error Controls</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline SendCommandRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline SendCommandRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role to use to publish Amazon Simple Notification
     * Service (Amazon SNS) notifications for Run Command commands.</p>
     */
    inline SendCommandRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::move(value); }

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline SendCommandRequest& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline SendCommandRequest& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(std::move(value)); return *this;}


    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const{ return m_cloudWatchOutputConfig; }

    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }

    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline void SetCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = value; }

    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline void SetCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::move(value); }

    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline SendCommandRequest& WithCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { SetCloudWatchOutputConfig(value); return *this;}

    /**
     * <p>Enables Systems Manager to send Run Command output to Amazon CloudWatch Logs.
     * </p>
     */
    inline SendCommandRequest& WithCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { SetCloudWatchOutputConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet;

    DocumentHashType m_documentHashType;
    bool m_documentHashTypeHasBeenSet;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
