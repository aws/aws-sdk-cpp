/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/BlockPublicAccess.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the account-level permissions settings that apply
   * to an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AccountLevelPermissions">AWS
   * API Reference</a></p>
   */
  class AccountLevelPermissions
  {
  public:
    AWS_MACIE2_API AccountLevelPermissions() = default;
    AWS_MACIE2_API AccountLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AccountLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
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
} // namespace Macie2
} // namespace Aws
