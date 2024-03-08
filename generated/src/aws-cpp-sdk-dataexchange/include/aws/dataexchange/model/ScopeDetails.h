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
    AWS_DATAEXCHANGE_API ScopeDetails();
    AWS_DATAEXCHANGE_API ScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<LakeFormationTagPolicyDetails>& GetLakeFormationTagPolicies() const{ return m_lakeFormationTagPolicies; }

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline bool LakeFormationTagPoliciesHasBeenSet() const { return m_lakeFormationTagPoliciesHasBeenSet; }

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline void SetLakeFormationTagPolicies(const Aws::Vector<LakeFormationTagPolicyDetails>& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies = value; }

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline void SetLakeFormationTagPolicies(Aws::Vector<LakeFormationTagPolicyDetails>&& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies = std::move(value); }

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithLakeFormationTagPolicies(const Aws::Vector<LakeFormationTagPolicyDetails>& value) { SetLakeFormationTagPolicies(value); return *this;}

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithLakeFormationTagPolicies(Aws::Vector<LakeFormationTagPolicyDetails>&& value) { SetLakeFormationTagPolicies(std::move(value)); return *this;}

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddLakeFormationTagPolicies(const LakeFormationTagPolicyDetails& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies.push_back(value); return *this; }

    /**
     * <p>Underlying LF resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddLakeFormationTagPolicies(LakeFormationTagPolicyDetails&& value) { m_lakeFormationTagPoliciesHasBeenSet = true; m_lakeFormationTagPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<RedshiftDataShareDetails>& GetRedshiftDataShares() const{ return m_redshiftDataShares; }

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline bool RedshiftDataSharesHasBeenSet() const { return m_redshiftDataSharesHasBeenSet; }

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline void SetRedshiftDataShares(const Aws::Vector<RedshiftDataShareDetails>& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares = value; }

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline void SetRedshiftDataShares(Aws::Vector<RedshiftDataShareDetails>&& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares = std::move(value); }

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithRedshiftDataShares(const Aws::Vector<RedshiftDataShareDetails>& value) { SetRedshiftDataShares(value); return *this;}

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithRedshiftDataShares(Aws::Vector<RedshiftDataShareDetails>&& value) { SetRedshiftDataShares(std::move(value)); return *this;}

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddRedshiftDataShares(const RedshiftDataShareDetails& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares.push_back(value); return *this; }

    /**
     * <p>Underlying Redshift resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddRedshiftDataShares(RedshiftDataShareDetails&& value) { m_redshiftDataSharesHasBeenSet = true; m_redshiftDataShares.push_back(std::move(value)); return *this; }


    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline const Aws::Vector<S3DataAccessDetails>& GetS3DataAccesses() const{ return m_s3DataAccesses; }

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline bool S3DataAccessesHasBeenSet() const { return m_s3DataAccessesHasBeenSet; }

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline void SetS3DataAccesses(const Aws::Vector<S3DataAccessDetails>& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses = value; }

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline void SetS3DataAccesses(Aws::Vector<S3DataAccessDetails>&& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses = std::move(value); }

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithS3DataAccesses(const Aws::Vector<S3DataAccessDetails>& value) { SetS3DataAccesses(value); return *this;}

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& WithS3DataAccesses(Aws::Vector<S3DataAccessDetails>&& value) { SetS3DataAccesses(std::move(value)); return *this;}

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddS3DataAccesses(const S3DataAccessDetails& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses.push_back(value); return *this; }

    /**
     * <p>Underlying S3 resources that will be affected by this notification.</p>
     */
    inline ScopeDetails& AddS3DataAccesses(S3DataAccessDetails&& value) { m_s3DataAccessesHasBeenSet = true; m_s3DataAccesses.push_back(std::move(value)); return *this; }

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
