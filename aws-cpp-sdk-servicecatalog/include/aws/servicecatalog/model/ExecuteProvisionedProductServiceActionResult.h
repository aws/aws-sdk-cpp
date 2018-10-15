/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionResult
  {
  public:
    ExecuteProvisionedProductServiceActionResult();
    ExecuteProvisionedProductServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExecuteProvisionedProductServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }

    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }

    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }

    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline ExecuteProvisionedProductServiceActionResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}

    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline ExecuteProvisionedProductServiceActionResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}

  private:

    RecordDetail m_recordDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
