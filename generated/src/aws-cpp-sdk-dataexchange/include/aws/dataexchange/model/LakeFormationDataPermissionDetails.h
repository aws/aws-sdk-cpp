/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/LFTagPolicyDetails.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Details about the AWS Lake Formation data permission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/LakeFormationDataPermissionDetails">AWS
   * API Reference</a></p>
   */
  class LakeFormationDataPermissionDetails
  {
  public:
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionDetails() = default;
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API LakeFormationDataPermissionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the LF-tag policy.</p>
     */
    inline const LFTagPolicyDetails& GetLFTagPolicy() const { return m_lFTagPolicy; }
    inline bool LFTagPolicyHasBeenSet() const { return m_lFTagPolicyHasBeenSet; }
    template<typename LFTagPolicyT = LFTagPolicyDetails>
    void SetLFTagPolicy(LFTagPolicyT&& value) { m_lFTagPolicyHasBeenSet = true; m_lFTagPolicy = std::forward<LFTagPolicyT>(value); }
    template<typename LFTagPolicyT = LFTagPolicyDetails>
    LakeFormationDataPermissionDetails& WithLFTagPolicy(LFTagPolicyT&& value) { SetLFTagPolicy(std::forward<LFTagPolicyT>(value)); return *this;}
    ///@}
  private:

    LFTagPolicyDetails m_lFTagPolicy;
    bool m_lFTagPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
