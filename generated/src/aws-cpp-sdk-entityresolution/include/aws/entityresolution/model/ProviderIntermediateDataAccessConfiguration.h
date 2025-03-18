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
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration() = default;
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderIntermediateDataAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that provider can use to read or write data
     * into the customer's intermediate S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const { return m_awsAccountIds; }
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    void SetAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::forward<AwsAccountIdsT>(value); }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    ProviderIntermediateDataAccessConfiguration& WithAwsAccountIds(AwsAccountIdsT&& value) { SetAwsAccountIds(std::forward<AwsAccountIdsT>(value)); return *this;}
    template<typename AwsAccountIdsT = Aws::String>
    ProviderIntermediateDataAccessConfiguration& AddAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.emplace_back(std::forward<AwsAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 bucket actions that the provider requires permission for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredBucketActions() const { return m_requiredBucketActions; }
    inline bool RequiredBucketActionsHasBeenSet() const { return m_requiredBucketActionsHasBeenSet; }
    template<typename RequiredBucketActionsT = Aws::Vector<Aws::String>>
    void SetRequiredBucketActions(RequiredBucketActionsT&& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions = std::forward<RequiredBucketActionsT>(value); }
    template<typename RequiredBucketActionsT = Aws::Vector<Aws::String>>
    ProviderIntermediateDataAccessConfiguration& WithRequiredBucketActions(RequiredBucketActionsT&& value) { SetRequiredBucketActions(std::forward<RequiredBucketActionsT>(value)); return *this;}
    template<typename RequiredBucketActionsT = Aws::String>
    ProviderIntermediateDataAccessConfiguration& AddRequiredBucketActions(RequiredBucketActionsT&& value) { m_requiredBucketActionsHasBeenSet = true; m_requiredBucketActions.emplace_back(std::forward<RequiredBucketActionsT>(value)); return *this; }
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
