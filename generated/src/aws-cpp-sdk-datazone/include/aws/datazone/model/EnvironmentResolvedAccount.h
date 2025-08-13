/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies the account/Region that is to be used during project creation for a
   * particular blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentResolvedAccount">AWS
   * API Reference</a></p>
   */
  class EnvironmentResolvedAccount
  {
  public:
    AWS_DATAZONE_API EnvironmentResolvedAccount() = default;
    AWS_DATAZONE_API EnvironmentResolvedAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentResolvedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the resolved account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    EnvironmentResolvedAccount& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resolved Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    EnvironmentResolvedAccount& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account pool.</p>
     */
    inline const Aws::String& GetSourceAccountPoolId() const { return m_sourceAccountPoolId; }
    inline bool SourceAccountPoolIdHasBeenSet() const { return m_sourceAccountPoolIdHasBeenSet; }
    template<typename SourceAccountPoolIdT = Aws::String>
    void SetSourceAccountPoolId(SourceAccountPoolIdT&& value) { m_sourceAccountPoolIdHasBeenSet = true; m_sourceAccountPoolId = std::forward<SourceAccountPoolIdT>(value); }
    template<typename SourceAccountPoolIdT = Aws::String>
    EnvironmentResolvedAccount& WithSourceAccountPoolId(SourceAccountPoolIdT&& value) { SetSourceAccountPoolId(std::forward<SourceAccountPoolIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_sourceAccountPoolId;
    bool m_sourceAccountPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
