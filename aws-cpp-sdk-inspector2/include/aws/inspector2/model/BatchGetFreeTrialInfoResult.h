/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/FreeTrialAccountInfo.h>
#include <aws/inspector2/model/FreeTrialInfoError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{
  class BatchGetFreeTrialInfoResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult();
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline const Aws::Vector<FreeTrialAccountInfo>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline void SetAccounts(const Aws::Vector<FreeTrialAccountInfo>& value) { m_accounts = value; }

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline void SetAccounts(Aws::Vector<FreeTrialAccountInfo>&& value) { m_accounts = std::move(value); }

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline BatchGetFreeTrialInfoResult& WithAccounts(const Aws::Vector<FreeTrialAccountInfo>& value) { SetAccounts(value); return *this;}

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline BatchGetFreeTrialInfoResult& WithAccounts(Aws::Vector<FreeTrialAccountInfo>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline BatchGetFreeTrialInfoResult& AddAccounts(const FreeTrialAccountInfo& value) { m_accounts.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline BatchGetFreeTrialInfoResult& AddAccounts(FreeTrialAccountInfo&& value) { m_accounts.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline const Aws::Vector<FreeTrialInfoError>& GetFailedAccounts() const{ return m_failedAccounts; }

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline void SetFailedAccounts(const Aws::Vector<FreeTrialInfoError>& value) { m_failedAccounts = value; }

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline void SetFailedAccounts(Aws::Vector<FreeTrialInfoError>&& value) { m_failedAccounts = std::move(value); }

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline BatchGetFreeTrialInfoResult& WithFailedAccounts(const Aws::Vector<FreeTrialInfoError>& value) { SetFailedAccounts(value); return *this;}

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline BatchGetFreeTrialInfoResult& WithFailedAccounts(Aws::Vector<FreeTrialInfoError>&& value) { SetFailedAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline BatchGetFreeTrialInfoResult& AddFailedAccounts(const FreeTrialInfoError& value) { m_failedAccounts.push_back(value); return *this; }

    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline BatchGetFreeTrialInfoResult& AddFailedAccounts(FreeTrialInfoError&& value) { m_failedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FreeTrialAccountInfo> m_accounts;

    Aws::Vector<FreeTrialInfoError> m_failedAccounts;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
