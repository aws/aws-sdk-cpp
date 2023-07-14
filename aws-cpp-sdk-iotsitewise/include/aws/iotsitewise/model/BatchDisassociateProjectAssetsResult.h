﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsResult
  {
  public:
    BatchDisassociateProjectAssetsResult();
    BatchDisassociateProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDisassociateProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline BatchDisassociateProjectAssetsResult& WithErrors(const Aws::Vector<AssetErrorDetails>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchDisassociateProjectAssetsResult& WithErrors(Aws::Vector<AssetErrorDetails>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchDisassociateProjectAssetsResult& AddErrors(const AssetErrorDetails& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline BatchDisassociateProjectAssetsResult& AddErrors(AssetErrorDetails&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AssetErrorDetails> m_errors;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
