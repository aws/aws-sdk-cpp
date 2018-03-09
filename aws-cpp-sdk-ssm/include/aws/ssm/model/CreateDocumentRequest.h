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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <utility>

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
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline CreateDocumentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline CreateDocumentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline CreateDocumentRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>Do not use the
     * following to begin the names of documents you create. They are reserved by AWS
     * for use as document prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of document to create. Valid document types include: Policy,
     * Automation, and Command.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The type of document to create. Valid document types include: Policy,
     * Automation, and Command.</p>
     */
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The type of document to create. Valid document types include: Policy,
     * Automation, and Command.</p>
     */
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The type of document to create. Valid document types include: Policy,
     * Automation, and Command.</p>
     */
    inline CreateDocumentRequest& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The type of document to create. Valid document types include: Policy,
     * Automation, and Command.</p>
     */
    inline CreateDocumentRequest& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}


    /**
     * <p>Specify the document format for the request. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>Specify the document format for the request. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }

    /**
     * <p>Specify the document format for the request. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }

    /**
     * <p>Specify the document format for the request. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline CreateDocumentRequest& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>Specify the document format for the request. The document format can be
     * either JSON or YAML. JSON is the default format.</p>
     */
    inline CreateDocumentRequest& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(const char* value) { SetTargetType(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
