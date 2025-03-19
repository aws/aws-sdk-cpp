/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/AccountQuota.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAccountAttributesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Account quota information.</p>
     */
    inline const Aws::Vector<AccountQuota>& GetAccountQuotas() const { return m_accountQuotas; }
    template<typename AccountQuotasT = Aws::Vector<AccountQuota>>
    void SetAccountQuotas(AccountQuotasT&& value) { m_accountQuotasHasBeenSet = true; m_accountQuotas = std::forward<AccountQuotasT>(value); }
    template<typename AccountQuotasT = Aws::Vector<AccountQuota>>
    DescribeAccountAttributesResult& WithAccountQuotas(AccountQuotasT&& value) { SetAccountQuotas(std::forward<AccountQuotasT>(value)); return *this;}
    template<typename AccountQuotasT = AccountQuota>
    DescribeAccountAttributesResult& AddAccountQuotas(AccountQuotasT&& value) { m_accountQuotasHasBeenSet = true; m_accountQuotas.emplace_back(std::forward<AccountQuotasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique DMS identifier for an account in a particular Amazon Web Services
     * Region. The value of this identifier has the following format:
     * <code>c99999999999</code>. DMS uses this identifier to name artifacts. For
     * example, DMS uses this identifier to name the default Amazon S3 bucket for
     * storing task assessment reports in a given Amazon Web Services Region. The
     * format of this S3 bucket name is the following:
     * <code>dms-<i>AccountNumber</i>-<i>UniqueAccountIdentifier</i>.</code> Here is an
     * example name for this default S3 bucket:
     * <code>dms-111122223333-c44445555666</code>.</p>  <p>DMS supports the
     * <code>UniqueAccountIdentifier</code> parameter in versions 3.1.4 and later.</p>
     * 
     */
    inline const Aws::String& GetUniqueAccountIdentifier() const { return m_uniqueAccountIdentifier; }
    template<typename UniqueAccountIdentifierT = Aws::String>
    void SetUniqueAccountIdentifier(UniqueAccountIdentifierT&& value) { m_uniqueAccountIdentifierHasBeenSet = true; m_uniqueAccountIdentifier = std::forward<UniqueAccountIdentifierT>(value); }
    template<typename UniqueAccountIdentifierT = Aws::String>
    DescribeAccountAttributesResult& WithUniqueAccountIdentifier(UniqueAccountIdentifierT&& value) { SetUniqueAccountIdentifier(std::forward<UniqueAccountIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountQuota> m_accountQuotas;
    bool m_accountQuotasHasBeenSet = false;

    Aws::String m_uniqueAccountIdentifier;
    bool m_uniqueAccountIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
