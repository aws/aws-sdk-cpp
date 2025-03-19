/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/LakeFormationTagPolicyDetails.h>
#include <aws/dataexchange/model/RedshiftDataShareDetails.h>
#include <aws/dataexchange/model/S3DataAccessDetails.h>
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
   * <p>Details about the scope of the notifications such as the affected
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ScopeDetails">AWS
   * API Reference</a></p>
   */
  class ScopeDetails
  {
  public:
    AWS_DATAEXCHANGE_API ScopeDetails() = default;
    AWS_DATAEXCHANGE_API ScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<LakeFormationTagPolicyDetails>& GetLakeFormationTagPolicies() const { return m_lakeFormationTagPolicies; }
    inline bool LakeFormationTagPoliciesHasBeenSet() const { return m_lakeFormationTagPoliciesHasBeenSet; }
    template<typename LakeFormationTagPoliciesT = Aws::Vector<LakeFormationTagPolicyDetails>>
    void SetLakeFormationTagPolicies(LakeFormationTagPoliciesT&& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies = std::forward<LakeFormationTagPoliciesT>(value); }
    template<typename LakeFormationTagPoliciesT = Aws::Vector<LakeFormationTagPolicyDetails>>
    ScopeDetails& WithLakeFormationTagPolicies(LakeFormationTagPoliciesT&& value) { SetLakeFormationTagPolicies(std::forward<LakeFormationTagPoliciesT>(value)); return *this;}
    template<typename LakeFormationTagPoliciesT = LakeFormationTagPolicyDetails>
    ScopeDetails& AddLakeFormationTagPolicies(LakeFormationTagPoliciesT&& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies.emplace_back(std::forward<LakeFormationTagPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<RedshiftDataShareDetails>& GetRedshiftDataShares() const { return m_redshiftDataShares; }
    inline bool RedshiftDataSharesHasBeenSet() const { return m_redshiftDataSharesHasBeenSet; }
    template<typename RedshiftDataSharesT = Aws::Vector<RedshiftDataShareDetails>>
    void SetRedshiftDataShares(RedshiftDataSharesT&& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares = std::forward<RedshiftDataSharesT>(value); }
    template<typename RedshiftDataSharesT = Aws::Vector<RedshiftDataShareDetails>>
    ScopeDetails& WithRedshiftDataShares(RedshiftDataSharesT&& value) { SetRedshiftDataShares(std::forward<RedshiftDataSharesT>(value)); return *this;}
    template<typename RedshiftDataSharesT = RedshiftDataShareDetails>
    ScopeDetails& AddRedshiftDataShares(RedshiftDataSharesT&& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares.emplace_back(std::forward<RedshiftDataSharesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<S3DataAccessDetails>& GetS3DataAccesses() const { return m_s3DataAccesses; }
    inline bool S3DataAccessesHasBeenSet() const { return m_s3DataAccessesHasBeenSet; }
    template<typename S3DataAccessesT = Aws::Vector<S3DataAccessDetails>>
    void SetS3DataAccesses(S3DataAccessesT&& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses = std::forward<S3DataAccessesT>(value); }
    template<typename S3DataAccessesT = Aws::Vector<S3DataAccessDetails>>
    ScopeDetails& WithS3DataAccesses(S3DataAccessesT&& value) { SetS3DataAccesses(std::forward<S3DataAccessesT>(value)); return *this;}
    template<typename S3DataAccessesT = S3DataAccessDetails>
    ScopeDetails& AddS3DataAccesses(S3DataAccessesT&& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses.emplace_back(std::forward<S3DataAccessesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LakeFormationTagPolicyDetails> m_lakeFormationTagPolicies;
    bool m_lakeFormationTagPoliciesHasBeenSet = false;

    Aws::Vector<RedshiftDataShareDetails> m_redshiftDataShares;
    bool m_redshiftDataSharesHasBeenSet = false;

    Aws::Vector<S3DataAccessDetails> m_s3DataAccesses;
    bool m_s3DataAccessesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
