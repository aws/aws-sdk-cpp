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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/BatchDeleteImportDataError.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataResult
  {
  public:
    BatchDeleteImportDataResult();
    BatchDeleteImportDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeleteImportDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline const Aws::Vector<BatchDeleteImportDataError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDeleteImportDataError>& value) { m_errors = value; }

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDeleteImportDataError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline BatchDeleteImportDataResult& WithErrors(const Aws::Vector<BatchDeleteImportDataError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline BatchDeleteImportDataResult& WithErrors(Aws::Vector<BatchDeleteImportDataError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline BatchDeleteImportDataResult& AddErrors(const BatchDeleteImportDataError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline BatchDeleteImportDataResult& AddErrors(BatchDeleteImportDataError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDeleteImportDataError> m_errors;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
