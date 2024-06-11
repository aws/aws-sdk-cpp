﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing information about an Lake Formation
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ResourceInfo">AWS
   * API Reference</a></p>
   */
  class ResourceInfo
  {
  public:
    AWS_LAKEFORMATION_API ResourceInfo();
    AWS_LAKEFORMATION_API ResourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ResourceInfo& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ResourceInfo& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ResourceInfo& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that registered a resource.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ResourceInfo& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ResourceInfo& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ResourceInfo& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline ResourceInfo& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline ResourceInfo& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline bool GetWithFederation() const{ return m_withFederation; }
    inline bool WithFederationHasBeenSet() const { return m_withFederationHasBeenSet; }
    inline void SetWithFederation(bool value) { m_withFederationHasBeenSet = true; m_withFederation = value; }
    inline ResourceInfo& WithWithFederation(bool value) { SetWithFederation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline bool GetHybridAccessEnabled() const{ return m_hybridAccessEnabled; }
    inline bool HybridAccessEnabledHasBeenSet() const { return m_hybridAccessEnabledHasBeenSet; }
    inline void SetHybridAccessEnabled(bool value) { m_hybridAccessEnabledHasBeenSet = true; m_hybridAccessEnabled = value; }
    inline ResourceInfo& WithHybridAccessEnabled(bool value) { SetHybridAccessEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    bool m_withFederation;
    bool m_withFederationHasBeenSet = false;

    bool m_hybridAccessEnabled;
    bool m_hybridAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
