/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ImportAsProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult();
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }

    
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }

    
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }

    
    inline ImportAsProvisionedProductResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}

    
    inline ImportAsProvisionedProductResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}

  private:

    RecordDetail m_recordDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
