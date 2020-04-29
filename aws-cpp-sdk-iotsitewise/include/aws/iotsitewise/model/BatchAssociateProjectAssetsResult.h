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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetErrorDetails.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API BatchAssociateProjectAssetsResult
  {
  public:
    BatchAssociateProjectAssetsResult();
    BatchAssociateProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchAssociateProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline const Aws::Vector<AssetErrorDetails>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline void SetErrors(const Aws::Vector<AssetErrorDetails>& value) { m_errors = value; }

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline void SetErrors(Aws::Vector<AssetErrorDetails>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchAssociateProjectAssetsResult& WithErrors(const Aws::Vector<AssetErrorDetails>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchAssociateProjectAssetsResult& WithErrors(Aws::Vector<AssetErrorDetails>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchAssociateProjectAssetsResult& AddErrors(const AssetErrorDetails& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchAssociateProjectAssetsResult& AddErrors(AssetErrorDetails&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AssetErrorDetails> m_errors;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
