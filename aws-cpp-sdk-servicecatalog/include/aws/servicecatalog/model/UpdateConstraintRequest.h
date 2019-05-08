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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateConstraintRequest : public ServiceCatalogRequest
  {
  public:
    UpdateConstraintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConstraint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateConstraintRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateConstraintRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateConstraintRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The identifier of the constraint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The updated description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the constraint.</p>
     */
    inline UpdateConstraintRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline UpdateConstraintRequest& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline UpdateConstraintRequest& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>Specify the
     * <code>RoleArn</code> property as follows:</p> <p> <code>{"RoleArn" :
     * "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p> <p>You cannot have both
     * a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You also
     * cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an AWS CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline UpdateConstraintRequest& WithParameters(const char* value) { SetParameters(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
