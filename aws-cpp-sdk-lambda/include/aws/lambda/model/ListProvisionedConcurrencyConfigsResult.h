﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/ProvisionedConcurrencyConfigListItem.h>
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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API ListProvisionedConcurrencyConfigsResult
  {
  public:
    ListProvisionedConcurrencyConfigsResult();
    ListProvisionedConcurrencyConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProvisionedConcurrencyConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline const Aws::Vector<ProvisionedConcurrencyConfigListItem>& GetProvisionedConcurrencyConfigs() const{ return m_provisionedConcurrencyConfigs; }

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline void SetProvisionedConcurrencyConfigs(const Aws::Vector<ProvisionedConcurrencyConfigListItem>& value) { m_provisionedConcurrencyConfigs = value; }

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline void SetProvisionedConcurrencyConfigs(Aws::Vector<ProvisionedConcurrencyConfigListItem>&& value) { m_provisionedConcurrencyConfigs = std::move(value); }

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& WithProvisionedConcurrencyConfigs(const Aws::Vector<ProvisionedConcurrencyConfigListItem>& value) { SetProvisionedConcurrencyConfigs(value); return *this;}

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& WithProvisionedConcurrencyConfigs(Aws::Vector<ProvisionedConcurrencyConfigListItem>&& value) { SetProvisionedConcurrencyConfigs(std::move(value)); return *this;}

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& AddProvisionedConcurrencyConfigs(const ProvisionedConcurrencyConfigListItem& value) { m_provisionedConcurrencyConfigs.push_back(value); return *this; }

    /**
     * <p>A list of provisioned concurrency configurations.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& AddProvisionedConcurrencyConfigs(ProvisionedConcurrencyConfigListItem&& value) { m_provisionedConcurrencyConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListProvisionedConcurrencyConfigsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<ProvisionedConcurrencyConfigListItem> m_provisionedConcurrencyConfigs;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
