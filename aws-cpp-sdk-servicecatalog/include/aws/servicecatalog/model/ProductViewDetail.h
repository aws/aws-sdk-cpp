/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
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

  /**
   * <p>Detailed product view information.</p>
   */
  class AWS_SERVICECATALOG_API ProductViewDetail
  {
  public:
    ProductViewDetail();
    ProductViewDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    ProductViewDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The summary metadata about the specified product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }

    /**
     * <p>The summary metadata about the specified product view.</p>
     */
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = value; }

    /**
     * <p>The summary metadata about the specified product view.</p>
     */
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = value; }

    /**
     * <p>The summary metadata about the specified product view.</p>
     */
    inline ProductViewDetail& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>The summary metadata about the specified product view.</p>
     */
    inline ProductViewDetail& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>Current status of the product.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the product.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the product.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the product.</p>
     */
    inline ProductViewDetail& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the product.</p>
     */
    inline ProductViewDetail& WithStatus(Status&& value) { SetStatus(value); return *this;}

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline const Aws::String& GetProductARN() const{ return m_productARN; }

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline void SetProductARN(const Aws::String& value) { m_productARNHasBeenSet = true; m_productARN = value; }

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline void SetProductARN(Aws::String&& value) { m_productARNHasBeenSet = true; m_productARN = value; }

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline void SetProductARN(const char* value) { m_productARNHasBeenSet = true; m_productARN.assign(value); }

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline ProductViewDetail& WithProductARN(const Aws::String& value) { SetProductARN(value); return *this;}

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline ProductViewDetail& WithProductARN(Aws::String&& value) { SetProductARN(value); return *this;}

    /**
     * <p>The ARN associated with the product.</p>
     */
    inline ProductViewDetail& WithProductARN(const char* value) { SetProductARN(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline ProductViewDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline ProductViewDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(value); return *this;}

  private:
    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet;
    Status m_status;
    bool m_statusHasBeenSet;
    Aws::String m_productARN;
    bool m_productARNHasBeenSet;
    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
