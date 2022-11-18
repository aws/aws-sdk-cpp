/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptPortfolioShareAsync(...)  SubmitAsync(&ServiceCatalogClient::AcceptPortfolioShare, __VA_ARGS__)
#define AcceptPortfolioShareCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AcceptPortfolioShare, REQUEST)

#define AssociateBudgetWithResourceAsync(...)  SubmitAsync(&ServiceCatalogClient::AssociateBudgetWithResource, __VA_ARGS__)
#define AssociateBudgetWithResourceCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AssociateBudgetWithResource, REQUEST)

#define AssociatePrincipalWithPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::AssociatePrincipalWithPortfolio, __VA_ARGS__)
#define AssociatePrincipalWithPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AssociatePrincipalWithPortfolio, REQUEST)

#define AssociateProductWithPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::AssociateProductWithPortfolio, __VA_ARGS__)
#define AssociateProductWithPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AssociateProductWithPortfolio, REQUEST)

#define AssociateServiceActionWithProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact, __VA_ARGS__)
#define AssociateServiceActionWithProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact, REQUEST)

#define AssociateTagOptionWithResourceAsync(...)  SubmitAsync(&ServiceCatalogClient::AssociateTagOptionWithResource, __VA_ARGS__)
#define AssociateTagOptionWithResourceCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::AssociateTagOptionWithResource, REQUEST)

#define BatchAssociateServiceActionWithProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact, __VA_ARGS__)
#define BatchAssociateServiceActionWithProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact, REQUEST)

#define BatchDisassociateServiceActionFromProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact, __VA_ARGS__)
#define BatchDisassociateServiceActionFromProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact, REQUEST)

#define CopyProductAsync(...)  SubmitAsync(&ServiceCatalogClient::CopyProduct, __VA_ARGS__)
#define CopyProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CopyProduct, REQUEST)

#define CreateConstraintAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateConstraint, __VA_ARGS__)
#define CreateConstraintCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateConstraint, REQUEST)

#define CreatePortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::CreatePortfolio, __VA_ARGS__)
#define CreatePortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreatePortfolio, REQUEST)

#define CreatePortfolioShareAsync(...)  SubmitAsync(&ServiceCatalogClient::CreatePortfolioShare, __VA_ARGS__)
#define CreatePortfolioShareCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreatePortfolioShare, REQUEST)

#define CreateProductAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateProduct, __VA_ARGS__)
#define CreateProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateProduct, REQUEST)

#define CreateProvisionedProductPlanAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateProvisionedProductPlan, __VA_ARGS__)
#define CreateProvisionedProductPlanCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateProvisionedProductPlan, REQUEST)

#define CreateProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateProvisioningArtifact, __VA_ARGS__)
#define CreateProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateProvisioningArtifact, REQUEST)

#define CreateServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateServiceAction, __VA_ARGS__)
#define CreateServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateServiceAction, REQUEST)

#define CreateTagOptionAsync(...)  SubmitAsync(&ServiceCatalogClient::CreateTagOption, __VA_ARGS__)
#define CreateTagOptionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::CreateTagOption, REQUEST)

#define DeleteConstraintAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteConstraint, __VA_ARGS__)
#define DeleteConstraintCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteConstraint, REQUEST)

#define DeletePortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::DeletePortfolio, __VA_ARGS__)
#define DeletePortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeletePortfolio, REQUEST)

#define DeletePortfolioShareAsync(...)  SubmitAsync(&ServiceCatalogClient::DeletePortfolioShare, __VA_ARGS__)
#define DeletePortfolioShareCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeletePortfolioShare, REQUEST)

#define DeleteProductAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteProduct, __VA_ARGS__)
#define DeleteProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteProduct, REQUEST)

#define DeleteProvisionedProductPlanAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteProvisionedProductPlan, __VA_ARGS__)
#define DeleteProvisionedProductPlanCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteProvisionedProductPlan, REQUEST)

#define DeleteProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteProvisioningArtifact, __VA_ARGS__)
#define DeleteProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteProvisioningArtifact, REQUEST)

#define DeleteServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteServiceAction, __VA_ARGS__)
#define DeleteServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteServiceAction, REQUEST)

#define DeleteTagOptionAsync(...)  SubmitAsync(&ServiceCatalogClient::DeleteTagOption, __VA_ARGS__)
#define DeleteTagOptionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DeleteTagOption, REQUEST)

#define DescribeConstraintAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeConstraint, __VA_ARGS__)
#define DescribeConstraintCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeConstraint, REQUEST)

#define DescribeCopyProductStatusAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeCopyProductStatus, __VA_ARGS__)
#define DescribeCopyProductStatusCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeCopyProductStatus, REQUEST)

#define DescribePortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribePortfolio, __VA_ARGS__)
#define DescribePortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribePortfolio, REQUEST)

#define DescribePortfolioShareStatusAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribePortfolioShareStatus, __VA_ARGS__)
#define DescribePortfolioShareStatusCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribePortfolioShareStatus, REQUEST)

#define DescribePortfolioSharesAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribePortfolioShares, __VA_ARGS__)
#define DescribePortfolioSharesCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribePortfolioShares, REQUEST)

#define DescribeProductAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProduct, __VA_ARGS__)
#define DescribeProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProduct, REQUEST)

#define DescribeProductAsAdminAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProductAsAdmin, __VA_ARGS__)
#define DescribeProductAsAdminCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProductAsAdmin, REQUEST)

#define DescribeProductViewAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProductView, __VA_ARGS__)
#define DescribeProductViewCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProductView, REQUEST)

#define DescribeProvisionedProductAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProvisionedProduct, __VA_ARGS__)
#define DescribeProvisionedProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProvisionedProduct, REQUEST)

#define DescribeProvisionedProductPlanAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProvisionedProductPlan, __VA_ARGS__)
#define DescribeProvisionedProductPlanCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProvisionedProductPlan, REQUEST)

#define DescribeProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProvisioningArtifact, __VA_ARGS__)
#define DescribeProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProvisioningArtifact, REQUEST)

#define DescribeProvisioningParametersAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeProvisioningParameters, __VA_ARGS__)
#define DescribeProvisioningParametersCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeProvisioningParameters, REQUEST)

#define DescribeRecordAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeRecord, __VA_ARGS__)
#define DescribeRecordCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeRecord, REQUEST)

#define DescribeServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeServiceAction, __VA_ARGS__)
#define DescribeServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeServiceAction, REQUEST)

#define DescribeServiceActionExecutionParametersAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeServiceActionExecutionParameters, __VA_ARGS__)
#define DescribeServiceActionExecutionParametersCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeServiceActionExecutionParameters, REQUEST)

#define DescribeTagOptionAsync(...)  SubmitAsync(&ServiceCatalogClient::DescribeTagOption, __VA_ARGS__)
#define DescribeTagOptionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DescribeTagOption, REQUEST)

#define DisableAWSOrganizationsAccessAsync(...)  SubmitAsync(&ServiceCatalogClient::DisableAWSOrganizationsAccess, __VA_ARGS__)
#define DisableAWSOrganizationsAccessCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisableAWSOrganizationsAccess, REQUEST)

#define DisassociateBudgetFromResourceAsync(...)  SubmitAsync(&ServiceCatalogClient::DisassociateBudgetFromResource, __VA_ARGS__)
#define DisassociateBudgetFromResourceCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisassociateBudgetFromResource, REQUEST)

#define DisassociatePrincipalFromPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::DisassociatePrincipalFromPortfolio, __VA_ARGS__)
#define DisassociatePrincipalFromPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisassociatePrincipalFromPortfolio, REQUEST)

#define DisassociateProductFromPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::DisassociateProductFromPortfolio, __VA_ARGS__)
#define DisassociateProductFromPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisassociateProductFromPortfolio, REQUEST)

#define DisassociateServiceActionFromProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact, __VA_ARGS__)
#define DisassociateServiceActionFromProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact, REQUEST)

#define DisassociateTagOptionFromResourceAsync(...)  SubmitAsync(&ServiceCatalogClient::DisassociateTagOptionFromResource, __VA_ARGS__)
#define DisassociateTagOptionFromResourceCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::DisassociateTagOptionFromResource, REQUEST)

#define EnableAWSOrganizationsAccessAsync(...)  SubmitAsync(&ServiceCatalogClient::EnableAWSOrganizationsAccess, __VA_ARGS__)
#define EnableAWSOrganizationsAccessCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::EnableAWSOrganizationsAccess, REQUEST)

#define ExecuteProvisionedProductPlanAsync(...)  SubmitAsync(&ServiceCatalogClient::ExecuteProvisionedProductPlan, __VA_ARGS__)
#define ExecuteProvisionedProductPlanCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ExecuteProvisionedProductPlan, REQUEST)

#define ExecuteProvisionedProductServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::ExecuteProvisionedProductServiceAction, __VA_ARGS__)
#define ExecuteProvisionedProductServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ExecuteProvisionedProductServiceAction, REQUEST)

#define GetAWSOrganizationsAccessStatusAsync(...)  SubmitAsync(&ServiceCatalogClient::GetAWSOrganizationsAccessStatus, __VA_ARGS__)
#define GetAWSOrganizationsAccessStatusCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::GetAWSOrganizationsAccessStatus, REQUEST)

#define GetProvisionedProductOutputsAsync(...)  SubmitAsync(&ServiceCatalogClient::GetProvisionedProductOutputs, __VA_ARGS__)
#define GetProvisionedProductOutputsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::GetProvisionedProductOutputs, REQUEST)

#define ImportAsProvisionedProductAsync(...)  SubmitAsync(&ServiceCatalogClient::ImportAsProvisionedProduct, __VA_ARGS__)
#define ImportAsProvisionedProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ImportAsProvisionedProduct, REQUEST)

#define ListAcceptedPortfolioSharesAsync(...)  SubmitAsync(&ServiceCatalogClient::ListAcceptedPortfolioShares, __VA_ARGS__)
#define ListAcceptedPortfolioSharesCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListAcceptedPortfolioShares, REQUEST)

#define ListBudgetsForResourceAsync(...)  SubmitAsync(&ServiceCatalogClient::ListBudgetsForResource, __VA_ARGS__)
#define ListBudgetsForResourceCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListBudgetsForResource, REQUEST)

#define ListConstraintsForPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::ListConstraintsForPortfolio, __VA_ARGS__)
#define ListConstraintsForPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListConstraintsForPortfolio, REQUEST)

#define ListLaunchPathsAsync(...)  SubmitAsync(&ServiceCatalogClient::ListLaunchPaths, __VA_ARGS__)
#define ListLaunchPathsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListLaunchPaths, REQUEST)

#define ListOrganizationPortfolioAccessAsync(...)  SubmitAsync(&ServiceCatalogClient::ListOrganizationPortfolioAccess, __VA_ARGS__)
#define ListOrganizationPortfolioAccessCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListOrganizationPortfolioAccess, REQUEST)

#define ListPortfolioAccessAsync(...)  SubmitAsync(&ServiceCatalogClient::ListPortfolioAccess, __VA_ARGS__)
#define ListPortfolioAccessCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListPortfolioAccess, REQUEST)

#define ListPortfoliosAsync(...)  SubmitAsync(&ServiceCatalogClient::ListPortfolios, __VA_ARGS__)
#define ListPortfoliosCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListPortfolios, REQUEST)

#define ListPortfoliosForProductAsync(...)  SubmitAsync(&ServiceCatalogClient::ListPortfoliosForProduct, __VA_ARGS__)
#define ListPortfoliosForProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListPortfoliosForProduct, REQUEST)

#define ListPrincipalsForPortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::ListPrincipalsForPortfolio, __VA_ARGS__)
#define ListPrincipalsForPortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListPrincipalsForPortfolio, REQUEST)

#define ListProvisionedProductPlansAsync(...)  SubmitAsync(&ServiceCatalogClient::ListProvisionedProductPlans, __VA_ARGS__)
#define ListProvisionedProductPlansCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListProvisionedProductPlans, REQUEST)

#define ListProvisioningArtifactsAsync(...)  SubmitAsync(&ServiceCatalogClient::ListProvisioningArtifacts, __VA_ARGS__)
#define ListProvisioningArtifactsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListProvisioningArtifacts, REQUEST)

#define ListProvisioningArtifactsForServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::ListProvisioningArtifactsForServiceAction, __VA_ARGS__)
#define ListProvisioningArtifactsForServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListProvisioningArtifactsForServiceAction, REQUEST)

#define ListRecordHistoryAsync(...)  SubmitAsync(&ServiceCatalogClient::ListRecordHistory, __VA_ARGS__)
#define ListRecordHistoryCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListRecordHistory, REQUEST)

#define ListResourcesForTagOptionAsync(...)  SubmitAsync(&ServiceCatalogClient::ListResourcesForTagOption, __VA_ARGS__)
#define ListResourcesForTagOptionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListResourcesForTagOption, REQUEST)

#define ListServiceActionsAsync(...)  SubmitAsync(&ServiceCatalogClient::ListServiceActions, __VA_ARGS__)
#define ListServiceActionsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListServiceActions, REQUEST)

#define ListServiceActionsForProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::ListServiceActionsForProvisioningArtifact, __VA_ARGS__)
#define ListServiceActionsForProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListServiceActionsForProvisioningArtifact, REQUEST)

#define ListStackInstancesForProvisionedProductAsync(...)  SubmitAsync(&ServiceCatalogClient::ListStackInstancesForProvisionedProduct, __VA_ARGS__)
#define ListStackInstancesForProvisionedProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListStackInstancesForProvisionedProduct, REQUEST)

#define ListTagOptionsAsync(...)  SubmitAsync(&ServiceCatalogClient::ListTagOptions, __VA_ARGS__)
#define ListTagOptionsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ListTagOptions, REQUEST)

#define ProvisionProductAsync(...)  SubmitAsync(&ServiceCatalogClient::ProvisionProduct, __VA_ARGS__)
#define ProvisionProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ProvisionProduct, REQUEST)

#define RejectPortfolioShareAsync(...)  SubmitAsync(&ServiceCatalogClient::RejectPortfolioShare, __VA_ARGS__)
#define RejectPortfolioShareCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::RejectPortfolioShare, REQUEST)

#define ScanProvisionedProductsAsync(...)  SubmitAsync(&ServiceCatalogClient::ScanProvisionedProducts, __VA_ARGS__)
#define ScanProvisionedProductsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::ScanProvisionedProducts, REQUEST)

#define SearchProductsAsync(...)  SubmitAsync(&ServiceCatalogClient::SearchProducts, __VA_ARGS__)
#define SearchProductsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::SearchProducts, REQUEST)

#define SearchProductsAsAdminAsync(...)  SubmitAsync(&ServiceCatalogClient::SearchProductsAsAdmin, __VA_ARGS__)
#define SearchProductsAsAdminCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::SearchProductsAsAdmin, REQUEST)

#define SearchProvisionedProductsAsync(...)  SubmitAsync(&ServiceCatalogClient::SearchProvisionedProducts, __VA_ARGS__)
#define SearchProvisionedProductsCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::SearchProvisionedProducts, REQUEST)

#define TerminateProvisionedProductAsync(...)  SubmitAsync(&ServiceCatalogClient::TerminateProvisionedProduct, __VA_ARGS__)
#define TerminateProvisionedProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::TerminateProvisionedProduct, REQUEST)

#define UpdateConstraintAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateConstraint, __VA_ARGS__)
#define UpdateConstraintCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateConstraint, REQUEST)

#define UpdatePortfolioAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdatePortfolio, __VA_ARGS__)
#define UpdatePortfolioCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdatePortfolio, REQUEST)

#define UpdatePortfolioShareAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdatePortfolioShare, __VA_ARGS__)
#define UpdatePortfolioShareCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdatePortfolioShare, REQUEST)

#define UpdateProductAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateProduct, __VA_ARGS__)
#define UpdateProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateProduct, REQUEST)

#define UpdateProvisionedProductAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateProvisionedProduct, __VA_ARGS__)
#define UpdateProvisionedProductCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateProvisionedProduct, REQUEST)

#define UpdateProvisionedProductPropertiesAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateProvisionedProductProperties, __VA_ARGS__)
#define UpdateProvisionedProductPropertiesCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateProvisionedProductProperties, REQUEST)

#define UpdateProvisioningArtifactAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateProvisioningArtifact, __VA_ARGS__)
#define UpdateProvisioningArtifactCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateProvisioningArtifact, REQUEST)

#define UpdateServiceActionAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateServiceAction, __VA_ARGS__)
#define UpdateServiceActionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateServiceAction, REQUEST)

#define UpdateTagOptionAsync(...)  SubmitAsync(&ServiceCatalogClient::UpdateTagOption, __VA_ARGS__)
#define UpdateTagOptionCallable(REQUEST)  SubmitCallable(&ServiceCatalogClient::UpdateTagOption, REQUEST)

