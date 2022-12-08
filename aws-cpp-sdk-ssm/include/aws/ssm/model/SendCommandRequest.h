/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ssm/model/AlarmConfiguration.h>
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
  class SendCommandRequest : public SSMRequest
  {
  public:
    AWS_SSM_API SendCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCommand"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Using
     * targets and rate controls to send commands to a fleet</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Sending
     * commands to a fleet</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline SendCommandRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline SendCommandRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Using
     * shared SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline SendCommandRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline SendCommandRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline const Aws::String& GetDocumentHash() const{ return m_documentHash; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline void SetDocumentHash(const Aws::String& value) { m_documentHashHasBeenSet = true; m_documentHash = value; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline void SetDocumentHash(Aws::String&& value) { m_documentHashHasBeenSet = true; m_documentHash = std::move(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline void SetDocumentHash(const char* value) { m_documentHashHasBeenSet = true; m_documentHash.assign(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline SendCommandRequest& WithDocumentHash(const Aws::String& value) { SetDocumentHash(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline SendCommandRequest& WithDocumentHash(Aws::String&& value) { SetDocumentHash(std::move(value)); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline SendCommandRequest& WithDocumentHash(const char* value) { SetDocumentHash(value); return *this;}


    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline const DocumentHashType& GetDocumentHashType() const{ return m_documentHashType; }

    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline bool DocumentHashTypeHasBeenSet() const { return m_documentHashTypeHasBeenSet; }

    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline void SetDocumentHashType(const DocumentHashType& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }

    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline void SetDocumentHashType(DocumentHashType&& value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = std::move(value); }

    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline SendCommandRequest& WithDocumentHashType(const DocumentHashType& value) { SetDocumentHashType(value); return *this;}

    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline SendCommandRequest& WithDocumentHashType(DocumentHashType&& value) { SetDocumentHashType(std::move(value)); return *this;}


    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * won't run.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * won't run.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * won't run.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * won't run.</p>
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
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::move(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline SendCommandRequest& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline SendCommandRequest& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
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
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline SendCommandRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline SendCommandRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
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
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const{ return m_cloudWatchOutputConfig; }

    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }

    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline void SetCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = value; }

    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline void SetCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::move(value); }

    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline SendCommandRequest& WithCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { SetCloudWatchOutputConfig(value); return *this;}

    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a capability of Amazon Web Services
     * Systems Manager.</p>
     */
    inline SendCommandRequest& WithCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { SetCloudWatchOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline SendCommandRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline SendCommandRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet = false;

    DocumentHashType m_documentHashType;
    bool m_documentHashTypeHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
