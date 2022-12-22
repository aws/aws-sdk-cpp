/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>Provides summary information for the <code>EnvironmentVpc</code> resource as
   * a response to <code>ListEnvironmentVpc</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/EnvironmentVpc">AWS
   * API Reference</a></p>
   */
  class EnvironmentVpc
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc();
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline EnvironmentVpc& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline EnvironmentVpc& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline EnvironmentVpc& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrBlocks() const{ return m_cidrBlocks; }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline bool CidrBlocksHasBeenSet() const { return m_cidrBlocksHasBeenSet; }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline void SetCidrBlocks(const Aws::Vector<Aws::String>& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks = value; }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline void SetCidrBlocks(Aws::Vector<Aws::String>&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks = std::move(value); }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline EnvironmentVpc& WithCidrBlocks(const Aws::Vector<Aws::String>& value) { SetCidrBlocks(value); return *this;}

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline EnvironmentVpc& WithCidrBlocks(Aws::Vector<Aws::String>&& value) { SetCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline EnvironmentVpc& AddCidrBlocks(const Aws::String& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline EnvironmentVpc& AddCidrBlocks(Aws::String&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline EnvironmentVpc& AddCidrBlocks(const char* value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks.push_back(value); return *this; }


    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline EnvironmentVpc& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline EnvironmentVpc& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline EnvironmentVpc& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline EnvironmentVpc& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline EnvironmentVpc& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline EnvironmentVpc& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline EnvironmentVpc& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC. </p>
     */
    inline EnvironmentVpc& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC. </p>
     */
    inline EnvironmentVpc& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC. </p>
     */
    inline EnvironmentVpc& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline const Aws::String& GetVpcName() const{ return m_vpcName; }

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline bool VpcNameHasBeenSet() const { return m_vpcNameHasBeenSet; }

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline void SetVpcName(const Aws::String& value) { m_vpcNameHasBeenSet = true; m_vpcName = value; }

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline void SetVpcName(Aws::String&& value) { m_vpcNameHasBeenSet = true; m_vpcName = std::move(value); }

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline void SetVpcName(const char* value) { m_vpcNameHasBeenSet = true; m_vpcName.assign(value); }

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline EnvironmentVpc& WithVpcName(const Aws::String& value) { SetVpcName(value); return *this;}

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline EnvironmentVpc& WithVpcName(Aws::String&& value) { SetVpcName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline EnvironmentVpc& WithVpcName(const char* value) { SetVpcName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrBlocks;
    bool m_cidrBlocksHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcName;
    bool m_vpcNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
