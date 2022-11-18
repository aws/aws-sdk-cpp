/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateGatewayRouteAsync(...)  SubmitAsync(&AppMeshClient::CreateGatewayRoute, __VA_ARGS__)
#define CreateGatewayRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateGatewayRoute, REQUEST)

#define CreateMeshAsync(...)  SubmitAsync(&AppMeshClient::CreateMesh, __VA_ARGS__)
#define CreateMeshCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateMesh, REQUEST)

#define CreateRouteAsync(...)  SubmitAsync(&AppMeshClient::CreateRoute, __VA_ARGS__)
#define CreateRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateRoute, REQUEST)

#define CreateVirtualGatewayAsync(...)  SubmitAsync(&AppMeshClient::CreateVirtualGateway, __VA_ARGS__)
#define CreateVirtualGatewayCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateVirtualGateway, REQUEST)

#define CreateVirtualNodeAsync(...)  SubmitAsync(&AppMeshClient::CreateVirtualNode, __VA_ARGS__)
#define CreateVirtualNodeCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateVirtualNode, REQUEST)

#define CreateVirtualRouterAsync(...)  SubmitAsync(&AppMeshClient::CreateVirtualRouter, __VA_ARGS__)
#define CreateVirtualRouterCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateVirtualRouter, REQUEST)

#define CreateVirtualServiceAsync(...)  SubmitAsync(&AppMeshClient::CreateVirtualService, __VA_ARGS__)
#define CreateVirtualServiceCallable(REQUEST)  SubmitCallable(&AppMeshClient::CreateVirtualService, REQUEST)

#define DeleteGatewayRouteAsync(...)  SubmitAsync(&AppMeshClient::DeleteGatewayRoute, __VA_ARGS__)
#define DeleteGatewayRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteGatewayRoute, REQUEST)

#define DeleteMeshAsync(...)  SubmitAsync(&AppMeshClient::DeleteMesh, __VA_ARGS__)
#define DeleteMeshCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteMesh, REQUEST)

#define DeleteRouteAsync(...)  SubmitAsync(&AppMeshClient::DeleteRoute, __VA_ARGS__)
#define DeleteRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteRoute, REQUEST)

#define DeleteVirtualGatewayAsync(...)  SubmitAsync(&AppMeshClient::DeleteVirtualGateway, __VA_ARGS__)
#define DeleteVirtualGatewayCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteVirtualGateway, REQUEST)

#define DeleteVirtualNodeAsync(...)  SubmitAsync(&AppMeshClient::DeleteVirtualNode, __VA_ARGS__)
#define DeleteVirtualNodeCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteVirtualNode, REQUEST)

#define DeleteVirtualRouterAsync(...)  SubmitAsync(&AppMeshClient::DeleteVirtualRouter, __VA_ARGS__)
#define DeleteVirtualRouterCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteVirtualRouter, REQUEST)

#define DeleteVirtualServiceAsync(...)  SubmitAsync(&AppMeshClient::DeleteVirtualService, __VA_ARGS__)
#define DeleteVirtualServiceCallable(REQUEST)  SubmitCallable(&AppMeshClient::DeleteVirtualService, REQUEST)

#define DescribeGatewayRouteAsync(...)  SubmitAsync(&AppMeshClient::DescribeGatewayRoute, __VA_ARGS__)
#define DescribeGatewayRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeGatewayRoute, REQUEST)

#define DescribeMeshAsync(...)  SubmitAsync(&AppMeshClient::DescribeMesh, __VA_ARGS__)
#define DescribeMeshCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeMesh, REQUEST)

#define DescribeRouteAsync(...)  SubmitAsync(&AppMeshClient::DescribeRoute, __VA_ARGS__)
#define DescribeRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeRoute, REQUEST)

#define DescribeVirtualGatewayAsync(...)  SubmitAsync(&AppMeshClient::DescribeVirtualGateway, __VA_ARGS__)
#define DescribeVirtualGatewayCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeVirtualGateway, REQUEST)

#define DescribeVirtualNodeAsync(...)  SubmitAsync(&AppMeshClient::DescribeVirtualNode, __VA_ARGS__)
#define DescribeVirtualNodeCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeVirtualNode, REQUEST)

#define DescribeVirtualRouterAsync(...)  SubmitAsync(&AppMeshClient::DescribeVirtualRouter, __VA_ARGS__)
#define DescribeVirtualRouterCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeVirtualRouter, REQUEST)

#define DescribeVirtualServiceAsync(...)  SubmitAsync(&AppMeshClient::DescribeVirtualService, __VA_ARGS__)
#define DescribeVirtualServiceCallable(REQUEST)  SubmitCallable(&AppMeshClient::DescribeVirtualService, REQUEST)

#define ListGatewayRoutesAsync(...)  SubmitAsync(&AppMeshClient::ListGatewayRoutes, __VA_ARGS__)
#define ListGatewayRoutesCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListGatewayRoutes, REQUEST)

#define ListMeshesAsync(...)  SubmitAsync(&AppMeshClient::ListMeshes, __VA_ARGS__)
#define ListMeshesCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListMeshes, REQUEST)

#define ListRoutesAsync(...)  SubmitAsync(&AppMeshClient::ListRoutes, __VA_ARGS__)
#define ListRoutesCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListRoutes, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppMeshClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListTagsForResource, REQUEST)

#define ListVirtualGatewaysAsync(...)  SubmitAsync(&AppMeshClient::ListVirtualGateways, __VA_ARGS__)
#define ListVirtualGatewaysCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListVirtualGateways, REQUEST)

#define ListVirtualNodesAsync(...)  SubmitAsync(&AppMeshClient::ListVirtualNodes, __VA_ARGS__)
#define ListVirtualNodesCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListVirtualNodes, REQUEST)

#define ListVirtualRoutersAsync(...)  SubmitAsync(&AppMeshClient::ListVirtualRouters, __VA_ARGS__)
#define ListVirtualRoutersCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListVirtualRouters, REQUEST)

#define ListVirtualServicesAsync(...)  SubmitAsync(&AppMeshClient::ListVirtualServices, __VA_ARGS__)
#define ListVirtualServicesCallable(REQUEST)  SubmitCallable(&AppMeshClient::ListVirtualServices, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppMeshClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppMeshClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppMeshClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppMeshClient::UntagResource, REQUEST)

#define UpdateGatewayRouteAsync(...)  SubmitAsync(&AppMeshClient::UpdateGatewayRoute, __VA_ARGS__)
#define UpdateGatewayRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateGatewayRoute, REQUEST)

#define UpdateMeshAsync(...)  SubmitAsync(&AppMeshClient::UpdateMesh, __VA_ARGS__)
#define UpdateMeshCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateMesh, REQUEST)

#define UpdateRouteAsync(...)  SubmitAsync(&AppMeshClient::UpdateRoute, __VA_ARGS__)
#define UpdateRouteCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateRoute, REQUEST)

#define UpdateVirtualGatewayAsync(...)  SubmitAsync(&AppMeshClient::UpdateVirtualGateway, __VA_ARGS__)
#define UpdateVirtualGatewayCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateVirtualGateway, REQUEST)

#define UpdateVirtualNodeAsync(...)  SubmitAsync(&AppMeshClient::UpdateVirtualNode, __VA_ARGS__)
#define UpdateVirtualNodeCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateVirtualNode, REQUEST)

#define UpdateVirtualRouterAsync(...)  SubmitAsync(&AppMeshClient::UpdateVirtualRouter, __VA_ARGS__)
#define UpdateVirtualRouterCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateVirtualRouter, REQUEST)

#define UpdateVirtualServiceAsync(...)  SubmitAsync(&AppMeshClient::UpdateVirtualService, __VA_ARGS__)
#define UpdateVirtualServiceCallable(REQUEST)  SubmitCallable(&AppMeshClient::UpdateVirtualService, REQUEST)

