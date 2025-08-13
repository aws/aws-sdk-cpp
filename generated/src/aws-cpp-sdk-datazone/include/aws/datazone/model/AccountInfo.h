/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The account information within an account pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AccountInfo">AWS
   * API Reference</a></p>
   */
  class AccountInfo
  {
  public:
    AWS_DATAZONE_API AccountInfo() = default;
    AWS_DATAZONE_API AccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    AccountInfo& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account name.</p>
     */
    inline const Aws::String& GetAwsAccountName() const { return m_awsAccountName; }
    inline bool AwsAccountNameHasBeenSet() const { return m_awsAccountNameHasBeenSet; }
    template<typename AwsAccountNameT = Aws::String>
    void SetAwsAccountName(AwsAccountNameT&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName = std::forward<AwsAccountNameT>(value); }
    template<typename AwsAccountNameT = Aws::String>
    AccountInfo& WithAwsAccountName(AwsAccountNameT&& value) { SetAwsAccountName(std::forward<AwsAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regions supported for an account within an account pool. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedRegions() const { return m_supportedRegions; }
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    void SetSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::forward<SupportedRegionsT>(value); }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    AccountInfo& WithSupportedRegions(SupportedRegionsT&& value) { SetSupportedRegions(std::forward<SupportedRegionsT>(value)); return *this;}
    template<typename SupportedRegionsT = Aws::String>
    AccountInfo& AddSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.emplace_back(std::forward<SupportedRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountName;
    bool m_awsAccountNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedRegions;
    bool m_supportedRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
