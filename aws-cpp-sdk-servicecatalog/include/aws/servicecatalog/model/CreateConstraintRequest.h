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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API CreateConstraintRequest : public ServiceCatalogRequest
  {
  public:
    CreateConstraintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConstraint"; }

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
    inline CreateConstraintRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreateConstraintRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreateConstraintRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreateConstraintRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreateConstraintRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreateConstraintRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline CreateConstraintRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateConstraintRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateConstraintRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


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
    inline CreateConstraintRequest& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

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
    inline CreateConstraintRequest& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

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
    inline CreateConstraintRequest& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline CreateConstraintRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline CreateConstraintRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p> <code>RESOURCE_UPDATE</code>
     * </p> </li> <li> <p> <code>STACKSET</code> </p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline CreateConstraintRequest& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the constraint.</p>
     */
    inline CreateConstraintRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline CreateConstraintRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline CreateConstraintRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateConstraintRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateConstraintRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateConstraintRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
