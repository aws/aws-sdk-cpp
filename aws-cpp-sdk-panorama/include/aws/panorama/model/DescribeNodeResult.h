/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/NodeCategory.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/NodeInterface.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{
  class DescribeNodeResult
  {
  public:
    AWS_PANORAMA_API DescribeNodeResult();
    AWS_PANORAMA_API DescribeNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The node's asset name.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The node's asset name.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetName = value; }

    /**
     * <p>The node's asset name.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetName = std::move(value); }

    /**
     * <p>The node's asset name.</p>
     */
    inline void SetAssetName(const char* value) { m_assetName.assign(value); }

    /**
     * <p>The node's asset name.</p>
     */
    inline DescribeNodeResult& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The node's asset name.</p>
     */
    inline DescribeNodeResult& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The node's asset name.</p>
     */
    inline DescribeNodeResult& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p>The node's category.</p>
     */
    inline const NodeCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The node's category.</p>
     */
    inline void SetCategory(const NodeCategory& value) { m_category = value; }

    /**
     * <p>The node's category.</p>
     */
    inline void SetCategory(NodeCategory&& value) { m_category = std::move(value); }

    /**
     * <p>The node's category.</p>
     */
    inline DescribeNodeResult& WithCategory(const NodeCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The node's category.</p>
     */
    inline DescribeNodeResult& WithCategory(NodeCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>When the node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the node was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the node was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the node was created.</p>
     */
    inline DescribeNodeResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the node was created.</p>
     */
    inline DescribeNodeResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The node's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The node's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The node's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The node's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>When the node was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>When the node was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>When the node was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>When the node was updated.</p>
     */
    inline DescribeNodeResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>When the node was updated.</p>
     */
    inline DescribeNodeResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The node's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The node's ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeId = value; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeId = std::move(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeId.assign(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>The node's interface.</p>
     */
    inline const NodeInterface& GetNodeInterface() const{ return m_nodeInterface; }

    /**
     * <p>The node's interface.</p>
     */
    inline void SetNodeInterface(const NodeInterface& value) { m_nodeInterface = value; }

    /**
     * <p>The node's interface.</p>
     */
    inline void SetNodeInterface(NodeInterface&& value) { m_nodeInterface = std::move(value); }

    /**
     * <p>The node's interface.</p>
     */
    inline DescribeNodeResult& WithNodeInterface(const NodeInterface& value) { SetNodeInterface(value); return *this;}

    /**
     * <p>The node's interface.</p>
     */
    inline DescribeNodeResult& WithNodeInterface(NodeInterface&& value) { SetNodeInterface(std::move(value)); return *this;}


    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The node's ARN.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }

    /**
     * <p>The node's ARN.</p>
     */
    inline void SetPackageArn(const Aws::String& value) { m_packageArn = value; }

    /**
     * <p>The node's ARN.</p>
     */
    inline void SetPackageArn(Aws::String&& value) { m_packageArn = std::move(value); }

    /**
     * <p>The node's ARN.</p>
     */
    inline void SetPackageArn(const char* value) { m_packageArn.assign(value); }

    /**
     * <p>The node's ARN.</p>
     */
    inline DescribeNodeResult& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}

    /**
     * <p>The node's ARN.</p>
     */
    inline DescribeNodeResult& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}

    /**
     * <p>The node's ARN.</p>
     */
    inline DescribeNodeResult& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}


    /**
     * <p>The node's package ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }

    /**
     * <p>The node's package ID.</p>
     */
    inline void SetPackageId(const Aws::String& value) { m_packageId = value; }

    /**
     * <p>The node's package ID.</p>
     */
    inline void SetPackageId(Aws::String&& value) { m_packageId = std::move(value); }

    /**
     * <p>The node's package ID.</p>
     */
    inline void SetPackageId(const char* value) { m_packageId.assign(value); }

    /**
     * <p>The node's package ID.</p>
     */
    inline DescribeNodeResult& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>The node's package ID.</p>
     */
    inline DescribeNodeResult& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>The node's package ID.</p>
     */
    inline DescribeNodeResult& WithPackageId(const char* value) { SetPackageId(value); return *this;}


    /**
     * <p>The node's package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The node's package name.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }

    /**
     * <p>The node's package name.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }

    /**
     * <p>The node's package name.</p>
     */
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }

    /**
     * <p>The node's package name.</p>
     */
    inline DescribeNodeResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The node's package name.</p>
     */
    inline DescribeNodeResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The node's package name.</p>
     */
    inline DescribeNodeResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The node's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The node's package version.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersion = value; }

    /**
     * <p>The node's package version.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersion = std::move(value); }

    /**
     * <p>The node's package version.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersion.assign(value); }

    /**
     * <p>The node's package version.</p>
     */
    inline DescribeNodeResult& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The node's package version.</p>
     */
    inline DescribeNodeResult& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The node's package version.</p>
     */
    inline DescribeNodeResult& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The node's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }

    /**
     * <p>The node's patch version.</p>
     */
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersion = value; }

    /**
     * <p>The node's patch version.</p>
     */
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersion = std::move(value); }

    /**
     * <p>The node's patch version.</p>
     */
    inline void SetPatchVersion(const char* value) { m_patchVersion.assign(value); }

    /**
     * <p>The node's patch version.</p>
     */
    inline DescribeNodeResult& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}

    /**
     * <p>The node's patch version.</p>
     */
    inline DescribeNodeResult& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}

    /**
     * <p>The node's patch version.</p>
     */
    inline DescribeNodeResult& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}

  private:

    Aws::String m_assetName;

    NodeCategory m_category;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_nodeId;

    NodeInterface m_nodeInterface;

    Aws::String m_ownerAccount;

    Aws::String m_packageArn;

    Aws::String m_packageId;

    Aws::String m_packageName;

    Aws::String m_packageVersion;

    Aws::String m_patchVersion;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
