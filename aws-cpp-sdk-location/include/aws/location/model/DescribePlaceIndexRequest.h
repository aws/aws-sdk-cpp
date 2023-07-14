﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API DescribePlaceIndexRequest : public LocationServiceRequest
  {
  public:
    DescribePlaceIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlaceIndex"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the place index resource.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the place index resource.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the place index resource.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the place index resource.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the place index resource.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the place index resource.</p>
     */
    inline DescribePlaceIndexRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the place index resource.</p>
     */
    inline DescribePlaceIndexRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the place index resource.</p>
     */
    inline DescribePlaceIndexRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
