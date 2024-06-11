/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The required configuration fields to give intermediate access to a provider
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderIntermediateDataAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderIntermediateDataAccessConfiguration
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration();
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that provider can use to read or write data
     * into the customer's intermediate S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const{ return m_awsAccountIds; }
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }
    inline void SetAwsAccountIds(const Aws::Vector<Aws::String>& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = value; }
    inline void SetAwsAccountIds(Aws::Vector<Aws::String>&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::move(value); }
    inline ProviderIntermediateDataAccessConfiguration& WithAwsAccountIds(const Aws::Vector<Aws::String>& value) { SetAwsAccountIds(value); return *this;}
    inline ProviderIntermediateDataAccessConfiguration& WithAwsAccountIds(Aws::Vector<Aws::String>&& value) { SetAwsAccountIds(std::move(value)); return *this;}
    inline ProviderIntermediateDataAccessConfiguration& AddAwsAccountIds(const Aws::String& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }
    inline ProviderIntermediateDataAccessConfiguration& AddAwsAccountIds(Aws::String&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(std::move(value)); return *this; }
    inline ProviderIntermediateDataAccessConfiguration& AddAwsAccountIds(const char* value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 bucket actions that the provider requires permission for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredBucketActions() const{ return m_requiredBucketActions; }
    inline bool RequiredBucketActionsHasBeenSet() const { return m_requiredBucketActionsHasBeenSet; }
    inline void SetRequiredBucketActions(const Aws::Vector<Aws::String>& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions = value; }
    inline void SetRequiredBucketActions(Aws::Vector<Aws::String>&& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions = std::move(value); }
    inline ProviderIntermediateDataAccessConfiguration& WithRequiredBucketActions(const Aws::Vector<Aws::String>& value) { SetRequiredBucketActions(value); return *this;}
    inline ProviderIntermediateDataAccessConfiguration& WithRequiredBucketActions(Aws::Vector<Aws::String>&& value) { SetRequiredBucketActions(std::move(value)); return *this;}
    inline ProviderIntermediateDataAccessConfiguration& AddRequiredBucketActions(const Aws::String& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions.push_back(value); return *this; }
    inline ProviderIntermediateDataAccessConfiguration& AddRequiredBucketActions(Aws::String&& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions.push_back(std::move(value)); return *this; }
    inline ProviderIntermediateDataAccessConfiguration& AddRequiredBucketActions(const char* value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_awsAccountIds;
    bool m_awsAccountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredBucketActions;
    bool m_requiredBucketActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
