/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ResourceType.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains the ARN of the analyzed resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalyzedResourceSummary">AWS
   * API Reference</a></p>
   */
  class AnalyzedResourceSummary
  {
  public:
    AWS_ACCESSANALYZER_API AnalyzedResourceSummary();
    AWS_ACCESSANALYZER_API AnalyzedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the analyzed resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline AnalyzedResourceSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline AnalyzedResourceSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline AnalyzedResourceSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }
    inline AnalyzedResourceSummary& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}
    inline AnalyzedResourceSummary& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}
    inline AnalyzedResourceSummary& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that was analyzed.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline AnalyzedResourceSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline AnalyzedResourceSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
