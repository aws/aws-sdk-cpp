/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MQ
{
namespace Model
{

  /**
   */
  class DescribeBrokerInstanceOptionsRequest : public MQRequest
  {
  public:
    AWS_MQ_API DescribeBrokerInstanceOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBrokerInstanceOptions"; }

    AWS_MQ_API Aws::String SerializePayload() const override;

    AWS_MQ_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Filter response by engine type.</p>
     */
    inline const Aws::String& GetEngineType() const{ return m_engineType; }

    /**
     * <p>Filter response by engine type.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>Filter response by engine type.</p>
     */
    inline void SetEngineType(const Aws::String& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>Filter response by engine type.</p>
     */
    inline void SetEngineType(Aws::String&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>Filter response by engine type.</p>
     */
    inline void SetEngineType(const char* value) { m_engineTypeHasBeenSet = true; m_engineType.assign(value); }

    /**
     * <p>Filter response by engine type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(const Aws::String& value) { SetEngineType(value); return *this;}

    /**
     * <p>Filter response by engine type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(Aws::String&& value) { SetEngineType(std::move(value)); return *this;}

    /**
     * <p>Filter response by engine type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(const char* value) { SetEngineType(value); return *this;}


    /**
     * <p>Filter response by host instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>Filter response by host instance type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * <p>The maximum number of brokers that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of brokers that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of brokers that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of brokers that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filter response by storage type.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Filter response by storage type.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Filter response by storage type.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Filter response by storage type.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Filter response by storage type.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Filter response by storage type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Filter response by storage type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Filter response by storage type.</p>
     */
    inline DescribeBrokerInstanceOptionsRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}

  private:

    Aws::String m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
