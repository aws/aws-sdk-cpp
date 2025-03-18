/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/BlockPublicAccess.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the account level permissions on the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountLevelPermissions">AWS
   * API Reference</a></p>
   */
  class AccountLevelPermissions
  {
  public:
    AWS_GUARDDUTY_API AccountLevelPermissions() = default;
    AWS_GUARDDUTY_API AccountLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the S3 Block Public Access settings of the bucket's parent
     * account.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const { return m_blockPublicAccess; }
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    void SetBlockPublicAccess(BlockPublicAccessT&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::forward<BlockPublicAccessT>(value); }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    AccountLevelPermissions& WithBlockPublicAccess(BlockPublicAccessT&& value) { SetBlockPublicAccess(std::forward<BlockPublicAccessT>(value)); return *this;}
    ///@}
  private:

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
