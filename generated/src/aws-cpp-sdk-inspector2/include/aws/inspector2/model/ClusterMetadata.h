/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AwsEcsMetadataDetails.h>
#include <aws/inspector2/model/AwsEksMetadataDetails.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The metadata for a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ClusterMetadata">AWS
   * API Reference</a></p>
   */
  class ClusterMetadata
  {
  public:
    AWS_INSPECTOR2_API ClusterMetadata() = default;
    AWS_INSPECTOR2_API ClusterMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ClusterMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for an Amazon ECS cluster in the cluster metadata.</p>
     */
    inline const AwsEcsMetadataDetails& GetAwsEcsMetadataDetails() const { return m_awsEcsMetadataDetails; }
    inline bool AwsEcsMetadataDetailsHasBeenSet() const { return m_awsEcsMetadataDetailsHasBeenSet; }
    template<typename AwsEcsMetadataDetailsT = AwsEcsMetadataDetails>
    void SetAwsEcsMetadataDetails(AwsEcsMetadataDetailsT&& value) { m_awsEcsMetadataDetailsHasBeenSet = true; m_awsEcsMetadataDetails = std::forward<AwsEcsMetadataDetailsT>(value); }
    template<typename AwsEcsMetadataDetailsT = AwsEcsMetadataDetails>
    ClusterMetadata& WithAwsEcsMetadataDetails(AwsEcsMetadataDetailsT&& value) { SetAwsEcsMetadataDetails(std::forward<AwsEcsMetadataDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an Amazon EKS cluster in the cluster metadata.</p>
     */
    inline const AwsEksMetadataDetails& GetAwsEksMetadataDetails() const { return m_awsEksMetadataDetails; }
    inline bool AwsEksMetadataDetailsHasBeenSet() const { return m_awsEksMetadataDetailsHasBeenSet; }
    template<typename AwsEksMetadataDetailsT = AwsEksMetadataDetails>
    void SetAwsEksMetadataDetails(AwsEksMetadataDetailsT&& value) { m_awsEksMetadataDetailsHasBeenSet = true; m_awsEksMetadataDetails = std::forward<AwsEksMetadataDetailsT>(value); }
    template<typename AwsEksMetadataDetailsT = AwsEksMetadataDetails>
    ClusterMetadata& WithAwsEksMetadataDetails(AwsEksMetadataDetailsT&& value) { SetAwsEksMetadataDetails(std::forward<AwsEksMetadataDetailsT>(value)); return *this;}
    ///@}
  private:

    AwsEcsMetadataDetails m_awsEcsMetadataDetails;
    bool m_awsEcsMetadataDetailsHasBeenSet = false;

    AwsEksMetadataDetails m_awsEksMetadataDetails;
    bool m_awsEksMetadataDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
